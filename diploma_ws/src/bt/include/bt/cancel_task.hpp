#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"

#include "nav2_msgs/action/navigate_to_pose.hpp"

#include "behaviortree_cpp_v3/action_node.h"


class CancelTask : public BT::SyncActionNode
{   
    public:
        CancelTask(const std::string& name) : BT::SyncActionNode(name, {})
        {
            node = rclcpp::Node::make_shared("cancel_task");
            action_client = rclcpp_action::create_client<nav2_msgs::action::NavigateToPose>(node, "navigate_to_pose");
            RCLCPP_INFO(node->get_logger(), "Cancel task BT node started.");
        }

        BT::NodeStatus tick() override
        {
            auto response = action_client->async_cancel_all_goals();
            RCLCPP_INFO(node->get_logger(), "Successfully cancel all Nav2 goals.");
            return BT::NodeStatus::SUCCESS;
        }

    private:
        std::shared_ptr<rclcpp::Node> node;
        rclcpp_action::Client<nav2_msgs::action::NavigateToPose>::SharedPtr action_client;
};

