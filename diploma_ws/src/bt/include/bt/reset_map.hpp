#include "behaviortree_cpp_v3/condition_node.h"
#include "rclcpp/rclcpp.hpp"


class ResetMap : public BT::ConditionNode
{
    public:
        ResetMap(const std::string& name) : BT::ConditionNode(name, {})
        {   
            node_= rclcpp::Node::make_shared("reset_map_bt_node");
        }

        BT::NodeStatus tick() override
        {
            RCLCPP_INFO(node_->get_logger(), "Ticking 'reset_map' node...");
            RCLCPP_INFO(node_->get_logger(), "Resetting map...");
            RCLCPP_INFO(node_->get_logger(), "Map reset.");
            return BT::NodeStatus::SUCCESS;
        }


    private:
        rclcpp::Node::SharedPtr node_;
};