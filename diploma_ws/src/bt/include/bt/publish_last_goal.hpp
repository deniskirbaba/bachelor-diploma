#include <chrono>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_srvs/srv/empty.hpp"
#include "behaviortree_cpp_v3/action_node.h"


class PublishLastGoal : public BT::SyncActionNode
{
    public:
        PublishLastGoal(const std::string& name) : BT::SyncActionNode(name, {})
        {   
            node_= rclcpp::Node::make_shared("publish_last_goal_bt_node");
            service_client_ = node_->create_client<std_srvs::srv::Empty>("get_last_goal");
            request_ = std::make_shared<std_srvs::srv::Empty::Request>();
        }

        BT::NodeStatus tick() override
        {
            RCLCPP_INFO(node_->get_logger(), "Publish last goal node ticked.");

            while (!service_client_->wait_for_service(std::chrono::seconds(1)))
            {
                if (!rclcpp::ok()) 
                {
                    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupt while trying to call 'get_last_goal' service.");
                    return BT::NodeStatus::FAILURE;
                }
                RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Service 'get_last_goal' not available, waiting...");
            }
            
            auto result = service_client_->async_send_request(request_);

            if (rclcpp::spin_until_future_complete(node_, result) == rclcpp::FutureReturnCode::SUCCESS)
            {
                return BT::NodeStatus::SUCCESS;
            }
            else
            {
                return BT::NodeStatus::FAILURE;
            }


            return BT::NodeStatus::FAILURE;
        }

    private:
        rclcpp::Node::SharedPtr node_;
        rclcpp::Client<std_srvs::srv::Empty>::SharedPtr service_client_;
        std::shared_ptr<std_srvs::srv::Empty::Request> request_;
};