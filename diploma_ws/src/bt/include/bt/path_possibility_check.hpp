#include "behaviortree_cpp_v3/condition_node.h"

#include "rclcpp/rclcpp.hpp"

#include "std_srvs/srv/set_bool.hpp"


class PathPossibilityCheck : public BT::ConditionNode
{
    public:
        PathPossibilityCheck(const std::string& name) : BT::ConditionNode(name, {})
        {   
            node = rclcpp::Node::make_shared("path_possibility_check_bt_node");
            service_client = node->create_client<std_srvs::srv::SetBool>("check_path_possibility");
            request = std::make_shared<std_srvs::srv::SetBool::Request>();

            request->data = true;
            is_path_possible = true;
        }

        BT::NodeStatus tick() override
        {
            RCLCPP_INFO(node->get_logger(), "Calling 'check_path_possibility' service...");

            while (!service_client->wait_for_service(std::chrono::seconds(1)))
            {
                if (!rclcpp::ok()) 
                {
                    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupt while trying to call 'check_path_possibility' service.");
                    return BT::NodeStatus::FAILURE;
                }
                RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Service 'check_path_possibility' not available, waiting...");
            }
            
            auto result = service_client->async_send_request(request);

            if (rclcpp::spin_until_future_complete(node, result) == rclcpp::FutureReturnCode::SUCCESS)
                is_path_possible = result.get()->success;
            else
                return BT::NodeStatus::FAILURE;

            RCLCPP_INFO(rclcpp::get_logger("path_possibility_check_bt_node"), (is_path_possible) ? "Path is possible" : "Path is impossible");

            if (is_path_possible)
                return BT::NodeStatus::SUCCESS;
            else 
                return BT::NodeStatus::FAILURE;
        }

    private:
        rclcpp::Node::SharedPtr node;
        rclcpp::Client<std_srvs::srv::SetBool>::SharedPtr service_client;
        std::shared_ptr<std_srvs::srv::SetBool::Request> request;

        bool is_path_possible;
};