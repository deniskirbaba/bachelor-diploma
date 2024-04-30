#include <cstdio>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>
#include <boost/algorithm/string.hpp>
#include <stdlib.h>
#include <chrono>
#include <thread>

#include "rclcpp/rclcpp.hpp"

#include "behaviortree_cpp_v3/action_node.h"


class GlobalPlannerRestart : public BT::SyncActionNode
{   
    public:

        GlobalPlannerRestart(const std::string& name) : BT::SyncActionNode(name, {})
        {
            node = rclcpp::Node::make_shared("global_planner_restart");
        }

        BT::NodeStatus tick() override
        {
            RCLCPP_INFO(rclcpp::get_logger("global_planner_restart"), "Restarting Global Planner...");

            try
            {
                RCLCPP_INFO(rclcpp::get_logger("restart_global_planner"), "Trying to restart Global Planner");
                system("gnome-terminal -e 'sh -c \"ros2 launch bt global_planner.launch.py ; exec bash\"'");
                
                std::this_thread::sleep_for(std::chrono::milliseconds(3000));

                // check if there planner_server in "ros2 node list"
                auto available_nodes = node->get_node_names();
                if (std::find(available_nodes.begin(), available_nodes.end(), "/planner_server") != available_nodes.end())
                {
                    RCLCPP_INFO(rclcpp::get_logger("global_planner_restart"), "Global planner successfully restarted.");
                    return BT::NodeStatus::SUCCESS;
                }
                else
                {
                    RCLCPP_INFO(rclcpp::get_logger("global_planner_restart"), "Global planner fails to restart.");
                    return BT::NodeStatus::FAILURE;
                }

                return BT::NodeStatus::SUCCESS;
            }
            catch(const std::exception& e)
            {   
                RCLCPP_ERROR(rclcpp::get_logger("global_planner_restart"), e.what());
                return BT::NodeStatus::FAILURE;
            }
        }
    
    private:
        std::shared_ptr<rclcpp::Node> node;
};