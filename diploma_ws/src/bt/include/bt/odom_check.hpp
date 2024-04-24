#include <chrono>
#include <memory>

#include "behaviortree_cpp_v3/condition_node.h"

#include "rclcpp/rclcpp.hpp"
#include "std_srvs/srv/set_bool.hpp"


class OdomCheck : public BT::ConditionNode
{
    public:
        OdomCheck(const std::string& name) : BT::ConditionNode(name, {})
        {   
            is_odom_up = true;

            node = rclcpp::Node::make_shared("odom_check_bt_node");
            service_client = node->create_client<std_srvs::srv::SetBool>("odom_check_service");
            
            request = std::make_shared<std_srvs::srv::SetBool::Request>();
            request->data = true;
        }

        BT::NodeStatus tick() override
        {

            RCLCPP_INFO(node->get_logger(), "Calling 'odom_check_service' service...");

            while (!service_client->wait_for_service(std::chrono::milliseconds(1000)))
            {
                if (!rclcpp::ok())
                {
                    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupt while trying to call 'odom_check_service' service.");
                    return BT::NodeStatus::FAILURE;
                }
                RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Service 'odom_check_service' not available, waiting...");
            }

            // if (!rclcpp::ok())
            // {
            //     RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupt while trying to call odom check service.");
            //     return BT::NodeStatus::FAILURE;
            // }
            // if (!service_client->wait_for_service(std::chrono::milliseconds(500)))
            // {
            //     RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Odom check service (SSU) is not available.");
            //     return BT::NodeStatus::FAILURE;
            // }

            auto result = service_client->async_send_request(request);

            if (rclcpp::spin_until_future_complete(node, result) == rclcpp::FutureReturnCode::SUCCESS)
                is_odom_up = result.get()->success;
            else
                return BT::NodeStatus::FAILURE;

            RCLCPP_INFO(rclcpp::get_logger("odom_check_bt_node"), (is_odom_up) ? "Odom is up" : "Odom is down");

            if (is_odom_up)
                return BT::NodeStatus::SUCCESS;
            else 
                return BT::NodeStatus::FAILURE;
        }

    private:
        rclcpp::Node::SharedPtr node;
        rclcpp::Client<std_srvs::srv::SetBool>::SharedPtr service_client;
        std::shared_ptr<std_srvs::srv::SetBool::Request> request;
        bool is_odom_up;
    };