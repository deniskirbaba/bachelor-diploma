#include <chrono>
#include <string>
#include <memory>
#include <iostream>
#include <cstdlib> // for system()

#include "rclcpp/rclcpp.hpp"
#include "behaviortree_cpp_v3/action_node.h"


class SaveMap : public BT::SyncActionNode
{   
    public:
        SaveMap(const std::string& name) : BT::SyncActionNode(name, {})
        {
            node_= rclcpp::Node::make_shared("save_map_bt_node");
        }

        bool save_map_service_call()
        {
            std::string bash_script_dest = "/home/denis/diploma_src/bash_scripts/save_map_script.sh";
            int result = system(bash_script_dest.c_str());

            if (result == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        BT::NodeStatus tick() override
        {   
            RCLCPP_INFO(node_->get_logger(), "Ticking 'save_map' node...");

            if (!save_map_service_call())
            {
                RCLCPP_ERROR(node_->get_logger(), "Failed to save the updated map.");
                return BT::NodeStatus::FAILURE;
            }
            RCLCPP_INFO(node_->get_logger(), "Updated map saved successfully.");
            return BT::NodeStatus::SUCCESS;
        }

    private:
        std::shared_ptr<rclcpp::Node> node_;
};