#include <chrono>
#include <memory>

#include "behaviortree_cpp_v3/condition_node.h"

#include "rclcpp/rclcpp.hpp"
#include "std_srvs/srv/set_bool.hpp"


class ImuCheck : public BT::ConditionNode
{
    public:
        ImuCheck(const std::string& name) : BT::ConditionNode(name, {})
        {   
            is_imu_up = true;

            node = rclcpp::Node::make_shared("imu_check_bt_node");
            service_client = node->create_client<std_srvs::srv::SetBool>("imu_check_service");
            
            request = std::make_shared<std_srvs::srv::SetBool::Request>();
            request->data = true;
        }

        BT::NodeStatus tick() override
        {
            RCLCPP_INFO(node->get_logger(), "Calling 'imu_check_service' service...");

            while (!service_client->wait_for_service(std::chrono::milliseconds(1000)))
            {
                if (!rclcpp::ok())
                {
                    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupt while trying to call 'imu_check_service' service.");
                    return BT::NodeStatus::FAILURE;
                }
                RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Service 'imu_check_service' not available, waiting...");
            }

            // if (!rclcpp::ok())
            // {
            //     RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupt while trying to call imu check service.");
            //     return BT::NodeStatus::FAILURE;
            // }
            // if (!service_client->wait_for_service(std::chrono::milliseconds(500)))
            // {
            //     RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Imu check service (SSU) is not available.");
            //     return BT::NodeStatus::FAILURE;
            // }

            auto result = service_client->async_send_request(request);

            if (rclcpp::spin_until_future_complete(node, result) == rclcpp::FutureReturnCode::SUCCESS)
                is_imu_up = result.get()->success;
            else
                return BT::NodeStatus::FAILURE;

            RCLCPP_INFO(rclcpp::get_logger("imu_check_bt_node"), (is_imu_up) ? "Imu is up" : "Imu is down");

            if (is_imu_up)
                return BT::NodeStatus::SUCCESS;
            else 
                return BT::NodeStatus::FAILURE;
        }

    private:
        rclcpp::Node::SharedPtr node;
        rclcpp::Client<std_srvs::srv::SetBool>::SharedPtr service_client;
        std::shared_ptr<std_srvs::srv::SetBool::Request> request;
        bool is_imu_up;
    };