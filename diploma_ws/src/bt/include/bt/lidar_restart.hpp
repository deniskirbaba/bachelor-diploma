#include <cstdlib>
#include <stdexcept>
#include <chrono>
#include <memory>
#include <algorithm>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp/node.hpp"

#include "behaviortree_cpp_v3/action_node.h"


class LidarRestart : public BT::SyncActionNode
{   
    public:
        LidarRestart(const std::string& name) : BT::SyncActionNode(name, {})
        {
            node = rclcpp::Node::make_shared("lidar_restart_bt_node");
        }

        BT::NodeStatus tick() override
        {
            try
            {
                RCLCPP_INFO(rclcpp::get_logger("lidar_restart"), "Restarting Lidar...");
                
                system("gnome-terminal -e 'sh -c \"ros2 run fsu lidar_remapping_node; exec bash\"'");
                std::this_thread::sleep_for(std::chrono::milliseconds(3000));
                
                // check if there lidar_remapping_node in "ros2 node list"
                auto available_nodes = node->get_node_names();
                if (std::find(available_nodes.begin(), available_nodes.end(), "/lidar_remapping_node") != available_nodes.end())
                {
                    RCLCPP_INFO(rclcpp::get_logger("lidar_restart"), "Lidar successfully restarted.");
                    return BT::NodeStatus::SUCCESS;
                }
                else
                {
                    RCLCPP_INFO(rclcpp::get_logger("lidar_restart"), "Lidar fails to restart.");
                    return BT::NodeStatus::FAILURE;
                }
            }
            catch(const std::exception& e)
            {   
                RCLCPP_ERROR(rclcpp::get_logger("lidar_restart"), "Error while trying to restart Lidar.");
                RCLCPP_ERROR(rclcpp::get_logger("lidar_restart"), e.what());
                
                return BT::NodeStatus::FAILURE;
            }
        }

    private:
        std::shared_ptr<rclcpp::Node> node;
};