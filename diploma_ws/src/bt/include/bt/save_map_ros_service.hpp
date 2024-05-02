#include <chrono>
#include <string>
#include <memory>
#include <iostream>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp/qos.hpp" // for Quality of Services policies (node communication)
#include "nav2_msgs/srv/save_map.hpp"
#include "behaviortree_cpp_v3/action_node.h"


class SaveMap : public BT::SyncActionNode
{   
    public:
        SaveMap(const std::string& name) : BT::SyncActionNode(name, {})
        {
            node_= rclcpp::Node::make_shared("save_map_bt_node");
            
            map_service_client_ = node_->create_client<nav2_msgs::srv::SaveMap>("/map_saver/save_map");
        }

        bool save_map_service_call()
        {
            while (!map_service_client_->wait_for_service(std::chrono::seconds(1)))
            {
                if (!rclcpp::ok()) 
                {
                    RCLCPP_ERROR(rclcpp::get_logger("save_map"), "Interrupt while trying to call 'map_saver/save_map' service.");
                    return false;
                }
                RCLCPP_INFO(rclcpp::get_logger("save_map"), "Service 'map_saver/save_map' not available, waiting...");
            }

            auto request = std::make_shared<nav2_msgs::srv::SaveMap::Request>();
            request->map_topic = "map_updated";
            request->map_url = "/home/denis/diploma_src/updated_map";
            auto result = map_service_client_->async_send_request(request);

            if (rclcpp::spin_until_future_complete(node_, result) == rclcpp::FutureReturnCode::SUCCESS)
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
        rclcpp::Client<nav2_msgs::srv::SaveMap>::SharedPtr map_service_client_;
};