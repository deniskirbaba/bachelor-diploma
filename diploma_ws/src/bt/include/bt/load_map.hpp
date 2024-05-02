#include <chrono>
#include <string>
#include <memory>
#include <iostream>

#include "rclcpp/rclcpp.hpp"
#include "nav2_msgs/srv/load_map.hpp"
#include "behaviortree_cpp_v3/action_node.h"


class LoadMap : public BT::SyncActionNode
{   
    public:
        LoadMap(const std::string& name) : BT::SyncActionNode(name, {})
        {
            node_= rclcpp::Node::make_shared("load_map_bt_node");
            map_service_client_ = node_->create_client<nav2_msgs::srv::LoadMap>("map_server/load_map");
        }

        bool load_map_service_call()
        {
            while (!map_service_client_->wait_for_service(std::chrono::seconds(1)))
            {
                if (!rclcpp::ok()) 
                {
                    RCLCPP_ERROR(rclcpp::get_logger("load_updated_map"), "Interrupt while trying to call 'map_server/load_map' service.");
                    return false;
                }
                RCLCPP_INFO(rclcpp::get_logger("load_updated_map"), "Service 'map_server/load_map' not available, waiting...");
            }

            auto request = std::make_shared<nav2_msgs::srv::LoadMap::Request>();
            request->map_url = "/home/denis/diploma_src/updated_map.yaml";
            auto result = map_service_client_->async_send_request(request);

            if(rclcpp::spin_until_future_complete(node_, result) == rclcpp::FutureReturnCode::SUCCESS)
            {
                return true;
            }
            else
            {
                return false;
            }

            return false;
        }

        BT::NodeStatus tick() override
        {   
            RCLCPP_INFO(node_->get_logger(), "Ticking 'load_map' node...");
            if (!load_map_service_call())
            {
                RCLCPP_ERROR(node_->get_logger(), "Failed to load the updated map.");
                return BT::NodeStatus::FAILURE;
            }
            RCLCPP_INFO(node_->get_logger(), "Updated map loaded successfully.");
            return BT::NodeStatus::SUCCESS;
        }

    private:
        std::shared_ptr<rclcpp::Node> node_;
        rclcpp::Client<nav2_msgs::srv::LoadMap>::SharedPtr map_service_client_;
};