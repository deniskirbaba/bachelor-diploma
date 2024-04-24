#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_srvs/srv/set_bool.hpp"

#include "behaviortree_cpp_v3/action_node.h"


class FullStop : public BT::SyncActionNode
{   
    public:
        FullStop(const std::string& name) : BT::SyncActionNode(name, {})
        {
            node = rclcpp::Node::make_shared("full_stop_bt_node");
            service_client = node->create_client<std_srvs::srv::SetBool>("full_stop_service");

            request = std::make_shared<std_srvs::srv::SetBool_Request>();
            request->data = true;

            RCLCPP_INFO(node->get_logger(), "Full stop BT node started.");
        }

        BT::NodeStatus tick() override
        {   
            RCLCPP_INFO(node->get_logger(), "Full stop BT node is ticked.");

            while (!service_client->wait_for_service(std::chrono::milliseconds(1000)))
            {
                if (!rclcpp::ok())
                {
                    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupt while trying to call 'full_stop_service' service.");
                    return BT::NodeStatus::FAILURE;
                }
                RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Service 'full_stop_service' not available, waiting...");
            }
    
            // if (!rclcpp::ok())
            // {
            //     RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupt while trying to call full stop service.");
            //     return BT::NodeStatus::FAILURE;
            // }
            // if (!service_client->wait_for_service(std::chrono::milliseconds(1000)))
            // {
            //     RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Full stop service (CSU) is not available.");
            //     return BT::NodeStatus::FAILURE;
            // }

            auto result = service_client->async_send_request(request);

            RCLCPP_INFO(node->get_logger(), "Request for full stop service is sent.");
            if(rclcpp::spin_until_future_complete(node, result) == rclcpp::FutureReturnCode::SUCCESS)
                return BT::NodeStatus::SUCCESS;
            else
                return BT::NodeStatus::FAILURE;
        }

    private:
        std::shared_ptr<rclcpp::Node> node;
        rclcpp::Client<std_srvs::srv::SetBool>::SharedPtr service_client;
        std::shared_ptr<std_srvs::srv::SetBool::Request> request;
};