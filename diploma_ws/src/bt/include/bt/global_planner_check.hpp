#include <chrono>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"

#include "behaviortree_cpp_v3/condition_node.h"

#include "std_srvs/srv/set_bool.hpp"
#include "lifecycle_msgs/srv/get_state.hpp"


class GlobalPlannerCheck : public BT::ConditionNode
{
    public:
        GlobalPlannerCheck(const std::string& name) : BT::ConditionNode(name, {})
        {   
            is_global_planner_up = true;
            node = rclcpp::Node::make_shared("global_planner_check_bt_node");
            service_client = node->create_client<lifecycle_msgs::srv::GetState>("planner_server/get_state");
        }

        BT::NodeStatus tick() override
        {
            RCLCPP_INFO(node->get_logger(), "Calling 'planner_server/get_state' service...");

            while (!service_client->wait_for_service(std::chrono::seconds(1)))
            {
                if (!rclcpp::ok()) 
                {
                    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupt while trying to call 'planner_server/get_state' service.");
                    return BT::NodeStatus::FAILURE;
                }
                RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Service 'planner_server/get_state' not available, waiting...");
            }

            auto request = std::make_shared<lifecycle_msgs::srv::GetState::Request>();
            auto result = service_client->async_send_request(request);
            lifecycle_msgs::msg::State state;

            if (rclcpp::spin_until_future_complete(node, result) == rclcpp::FutureReturnCode::SUCCESS)
                state = result.get()->current_state;
            else
                return BT::NodeStatus::FAILURE;

            if (state.id == lifecycle_msgs::msg::State::PRIMARY_STATE_ACTIVE)
                is_global_planner_up = true;
            else
                is_global_planner_up = false;

            RCLCPP_INFO(rclcpp::get_logger("global_planner_check_bt_node"), (is_global_planner_up) ? "Global planner is up" : "Global planner is down");

            if (is_global_planner_up)
                return BT::NodeStatus::SUCCESS;
            else 
                return BT::NodeStatus::FAILURE;
        }

    private:
        rclcpp::Node::SharedPtr node;
        rclcpp::Client<lifecycle_msgs::srv::GetState>::SharedPtr service_client;

        bool is_global_planner_up;
};