#include "behaviortree_cpp_v3/condition_node.h"
#include "rclcpp/rclcpp.hpp"


class SlamCheck : public BT::ConditionNode
{
public:

    SlamCheck(const std::string& name) : BT::ConditionNode(name, {})
    {   
        node_= rclcpp::Node::make_shared("slam_check_bt_node");
    }

    BT::NodeStatus tick() override
    {
        RCLCPP_INFO(node_->get_logger(), "Ticking 'slam_check' node...");
        RCLCPP_INFO(node_->get_logger(), "Checking if SLAM is running...");
        RCLCPP_INFO(node_->get_logger(), "SLAM is not running.");
        return BT::NodeStatus::FAILURE;
    }


private:
    rclcpp::Node::SharedPtr node_;
};