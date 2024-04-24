#include <string>
#include <memory>
#include <future>

#include "rclcpp/rclcpp.hpp"

#include "behaviortree_cpp_v3/condition_node.h"

#include "dms_interfaces/srv/get_battery_level.hpp"
#include "dms_interfaces/srv/get_goal_distance.hpp"


class BatteryCheck : public BT::ConditionNode
{
    public:
        BatteryCheck(const std::string& name) : BT::ConditionNode(name, {})
        {   
            node = rclcpp::Node::make_shared("battery_check_bt_node");

            get_goal_distance_srv_cli = node->create_client<dms_interfaces::srv::GetGoalDistance>("get_goal_distance");
            get_battery_level_srv_cli = node->create_client<dms_interfaces::srv::GetBatteryLevel>("get_battery_level_service");

            get_goal_distance_req = std::make_shared<dms_interfaces::srv::GetGoalDistance::Request>();
            get_battery_level_req = std::make_shared<dms_interfaces::srv::GetBatteryLevel::Request>();

            expected_speed = 0.2;
            consumption_factor = 1.5;  // because we calculating distance as simple Euclidean dist (need to fix)
        }

        bool get_goal_distance_srv_call(float& goal_distance)
        {
            RCLCPP_INFO(node->get_logger(), "Calling 'get_goal_distance' service...");

            while (!get_goal_distance_srv_cli->wait_for_service(std::chrono::milliseconds(1000)))
            {
                if (!rclcpp::ok())
                {
                    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupt while trying to call 'get_goal_distance' service.");
                    return false;
                }
                RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Service 'get_goal_distance' not available, waiting...");
            }

            // if (!get_goal_distance_srv_cli->wait_for_service(std::chrono::milliseconds(1000)))
            // {
            //     RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Service 'get_goal_distance' (NSPU) is not available.");
            //     return false;
            // }

            auto goal_distance_result = get_goal_distance_srv_cli->async_send_request(get_goal_distance_req);

            if (rclcpp::spin_until_future_complete(node, goal_distance_result) == rclcpp::FutureReturnCode::SUCCESS)
            {
                goal_distance = goal_distance_result.get()->goal_distance;
                return true;
            }
            else
                return false;
        }

        bool get_battery_level_srv_call(float& battery_level, float& idle_consumption, float& drive_consumption)
        {   
            RCLCPP_INFO(node->get_logger(), "Calling 'get_battery_level_service' service...");

            while (!get_battery_level_srv_cli->wait_for_service(std::chrono::milliseconds(1000)))
            {
                if (!rclcpp::ok())
                {
                    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupt while trying to call 'get_battery_level_service' service.");
                    return false;
                }
                RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Service 'get_battery_level_service' not available, waiting...");
            }

            // if (!rclcpp::ok())
            // {
            //     RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupt while trying to call 'get_battery_level_service' service.");
            //     return false;
            // }
            // if (!get_battery_level_srv_cli->wait_for_service(std::chrono::milliseconds(1000)))
            // {
            //     RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Service 'get_battery_level_service' (BSU) is not available.");
            //     return false;
            // }

            auto battery_info_result = get_battery_level_srv_cli->async_send_request(get_battery_level_req);

            if (rclcpp::spin_until_future_complete(node, battery_info_result) == rclcpp::FutureReturnCode::SUCCESS)
            {   
                auto response_data = battery_info_result.get();
                battery_level = response_data->battery_level;
                idle_consumption = response_data->idle_consumption;
                drive_consumption = response_data->drive_consumption;
                return true;
            }
            else
                return false;
        }

        BT::NodeStatus tick() override
        {
            float goal_distance;

            if (!get_goal_distance_srv_call(goal_distance))
            {
                RCLCPP_INFO(node->get_logger(), "Failed the battery check due to an error in service obtaining the distance to the goal.");
                return BT::NodeStatus::FAILURE;
            }
            RCLCPP_INFO(node->get_logger(), "Distance to goal: %f", goal_distance);

            if (goal_distance == 0.0)
                return BT::NodeStatus::SUCCESS;
            
            float charge, idle_consumption, drive_consumption;

            if (!get_battery_level_srv_call(charge, idle_consumption, drive_consumption))
            {
                RCLCPP_INFO(node->get_logger(), "Failed the battery check due to an error in service obtaining the battery level.");
                return BT::NodeStatus::FAILURE;
            }

            RCLCPP_INFO(node->get_logger(), "Battery level: %f", charge);

            float expected_time = goal_distance / expected_speed;
            float consumption = expected_time * (idle_consumption + drive_consumption);

            RCLCPP_INFO(node->get_logger(), "Consumption: %f", consumption);

            if (charge >= (consumption * consumption_factor))
            {
                RCLCPP_INFO(node->get_logger(), "The charge level is sufficient to achieve goal.");
                return BT::NodeStatus::SUCCESS;
            }
            else 
            {
                RCLCPP_INFO(node->get_logger(), "The charge level is insufficient to achieve goal.");
                return BT::NodeStatus::FAILURE;
            }
        }

    private:
        rclcpp::Node::SharedPtr node;

        rclcpp::Client<dms_interfaces::srv::GetGoalDistance>::SharedPtr get_goal_distance_srv_cli;
        rclcpp::Client<dms_interfaces::srv::GetBatteryLevel>::SharedPtr get_battery_level_srv_cli;

        std::shared_ptr<dms_interfaces::srv::GetGoalDistance::Request> get_goal_distance_req;
        std::shared_ptr<dms_interfaces::srv::GetBatteryLevel::Request> get_battery_level_req;

        float expected_speed;
        float consumption_factor;
};