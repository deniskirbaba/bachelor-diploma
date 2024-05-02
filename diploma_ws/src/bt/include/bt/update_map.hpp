#include <vector>
#include <string>
#include <chrono>
#include <memory>

#include "rclcpp/rclcpp.hpp"

#include "behaviortree_cpp_v3/action_node.h"

#include "geometry_msgs/msg/pose.hpp"
#include "geometry_msgs/msg/point.hpp"
#include "nav_msgs/msg/occupancy_grid.hpp"
#include "nav2_msgs/srv/clear_entire_costmap.hpp"
#include "visualization_msgs/msg/marker.hpp"

#include "dms_interfaces/srv/get_pose.hpp"
#include "dms_interfaces/srv/get_last_map.hpp"
#include "dms_interfaces/srv/send_map.hpp"

#include "tf2/convert.h"
#include "tf2/LinearMath/Quaternion.h"
#include "tf2/LinearMath/Matrix3x3.h"

#define ROBOT_RADIUS 0.15


class UpdateMap : public BT::SyncActionNode
{   
    public:
        UpdateMap(const std::string& name) : BT::SyncActionNode(name, {})
        {
            node_ = rclcpp::Node::make_shared("update_map_bt_node");

            map_service_client_ = node_->create_client<dms_interfaces::srv::GetLastMap>("get_last_map");
            pose_service_client_ = node_->create_client<dms_interfaces::srv::GetPose>("get_collision_pose");
            marker_publisher_ = node_->create_publisher<visualization_msgs::msg::Marker>("marker", 1);
            send_map_client_ = node_->create_client<dms_interfaces::srv::SendMap>("send_map");
            clear_costmap_service_client_ = node_->create_client<nav2_msgs::srv::ClearEntireCostmap>("global_costmap/clear_entirely_global_costmap");
        }

        bool get_map_service_call(nav_msgs::msg::OccupancyGrid& map)
        {
            while (!map_service_client_->wait_for_service(std::chrono::seconds(1)))
            {
                if (!rclcpp::ok()) 
                {
                    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupt while trying to call 'get_last_map' service.");
                    return false;
                }
                RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Service 'get_last_map' not available, waiting...");
            }

            auto request = std::make_shared<dms_interfaces::srv::GetLastMap::Request>();
            auto result = map_service_client_->async_send_request(request);

            if(rclcpp::spin_until_future_complete(node_, result) == rclcpp::FutureReturnCode::SUCCESS)
            {
                map = result.get()->map;
                RCLCPP_INFO(node_->get_logger(), "Received map with dimensions: width: %d and height: %d", map.info.width, map.info.height);
                return true;
            }
            else
            {
                return false;
            }
            return false;
        }

        bool send_map_service_call(nav_msgs::msg::OccupancyGrid& map)
        {
            while (!send_map_client_->wait_for_service(std::chrono::seconds(1)))
            {
                if (!rclcpp::ok()) 
                {
                    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupt while trying to call 'send_map' service.");
                    return false;
                }
                RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Service 'send_map' not available, waiting...");
            }

            auto request = std::make_shared<dms_interfaces::srv::SendMap::Request>();
            request->map = map;
            auto result = send_map_client_->async_send_request(request);


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

        bool get_collision_pose_service_call(geometry_msgs::msg::Pose& collision_pose)
        {
            while (!pose_service_client_->wait_for_service(std::chrono::seconds(1)))
            {
                if (!rclcpp::ok()) 
                {
                    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupt while trying to call 'get_collision_pose' service.");
                    return false;
                }
                RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Service 'get_collision_pose' not available, waiting...");
            }

            auto request = std::make_shared<dms_interfaces::srv::GetPose::Request>();
            auto result = pose_service_client_->async_send_request(request);

            if(rclcpp::spin_until_future_complete(node_, result) == rclcpp::FutureReturnCode::SUCCESS)
            {
                collision_pose = result.get()->pose;
                return true;
            }
            else
            {
                return false;
            }

            return false;
        }
        
        void convert_data_to_vector(const nav_msgs::msg::OccupancyGrid& map, std::vector<std::vector<int>>& vec_2d)
        {
            RCLCPP_INFO(node_->get_logger(), "Transformation from nav_msgs::OccupancyGrid to 2D std::vector.");
            for (size_t i = 0; i < map.info.height - 1; i++)
            {   
                for (size_t j = 0; j < map.info.width -1; j++)
                {   
                    vec_2d.at(i).at(j) = map.data.at(i * map.info.width + j);
                }            
            }       
        }

        void publish_marker(geometry_msgs::msg::Point point)
        {
            RCLCPP_INFO(node_->get_logger(), "Publishing marker.");
            visualization_msgs::msg::Marker marker;
            marker.action = visualization_msgs::msg::Marker::ADD;
            marker.type = visualization_msgs::msg::Marker::SPHERE;
            marker.color.r = 1.0;
            marker.color.a = 1.0;
            marker.id = 1;
            marker.header.stamp = node_->get_clock()->now();
            marker.header.frame_id = "map";
            marker.pose.position = point;
            marker.pose.orientation.w = 1.0;
            marker.pose.orientation.x = 0.0;
            marker.pose.orientation.y = 0.0;
            marker.pose.orientation.z = 0.0;
            marker.scale.x = 0.25;
            marker.scale.y = 0.25;
            marker.scale.z = 0.25;
            
            marker_publisher_->publish(marker);
        }
    
        /**
         * @brief 
         * Determine the position of the collision by creating a vector in the direction of the yaw angle with the length of the robot radius.
         * y axis goes left, x axis goes in front, yaw direction is counterclockwise positive
         * start position is pose.position.x and pose.position.y
         * end position is x + robot_radius * cos(yaw angle) and y + robot_radius * sin(yaw_angle)
         * @param pose 
         * @return geometry_msgs::msg::Point 
         */
        geometry_msgs::msg::Point determine_collision_point(geometry_msgs::msg::Pose pose)
        {   
            RCLCPP_INFO(node_->get_logger(), "Determining Collision Point.");
            tf2::Quaternion quat(
                pose.orientation.x,
                pose.orientation.y,
                pose.orientation.z,
                pose.orientation.w);
        
            tf2::Matrix3x3 m(quat);
            double roll,pitch,yaw;
            m.getRPY(roll, pitch, yaw);

            geometry_msgs::msg::Point goal_point;
            goal_point.x = (cos(yaw)*ROBOT_RADIUS) + pose.position.x;
            goal_point.y = (sin(yaw)*ROBOT_RADIUS) + pose.position.y;
            goal_point.z = 0.0;

            RCLCPP_INFO(node_->get_logger(), "Calculated Collision Point: %f | %f ", goal_point.x, goal_point.y); 

            return goal_point;
        }

        void add_occupation_to_costmap(std::vector<std::vector<int>>& costmap_2d, int x_px, int y_px)
        {
            // modify costmap routine
            // then it should modify the costmap by adding a 5x5 square at the location of the crash  
            RCLCPP_INFO(node_->get_logger(), "Adding occupation to costmap vector."); 
            for (size_t i = y_px -2; i < y_px +2; i++)
            {
                for (size_t j = x_px -2; j < x_px +2; j++)
                {
                    costmap_2d.at(i).at(j) = 100; 
                }
            }        
        }   

        void convert_vector_to_data(std::vector<std::vector<int>>& costmap_vector_2d, nav_msgs::msg::OccupancyGrid& map)
        {
            RCLCPP_INFO(node_->get_logger(), "Converting to one dimensional data array and putting it into the map msg.");
            std::vector<int8_t> data((map.info.height * map.info.width), -1);

            for (size_t i = 0; i < costmap_vector_2d.size(); i++)
            {   
                for (size_t j = 0; j < costmap_vector_2d.at(i).size(); j++)
                {
                    data.at(map.info.width * i + j ) = costmap_vector_2d.at(i).at(j);                
                }            
            }
            if (data.size() == map.info.width * map.info.height)
            {
                map.data = data;
            }
            else
            {
                RCLCPP_INFO(node_->get_logger(), "Map Data not compatible. Error while converting.");
                RCLCPP_INFO(node_->get_logger(), "Expected Array of size %d. Got array of size %d", map.info.height * map.info.width, data.size());
            }
        }

        BT::NodeStatus tick() override
        {   
            RCLCPP_INFO(node_->get_logger(), "Update Map Node Ticked.");
            
            geometry_msgs::msg::Pose collision_pose;
            nav_msgs::msg::OccupancyGrid map;

            if (!get_map_service_call(map))
                return BT::NodeStatus::FAILURE;

            std::vector<int> row(map.info.width, 0); // rows, travel along the x axis
            std::vector<std::vector<int>> costmap_vector_2d(map.info.height, row); // columns, travel allong the y axis

            convert_data_to_vector(map, costmap_vector_2d);

            if(!get_collision_pose_service_call(collision_pose))
                return BT::NodeStatus::FAILURE;

            geometry_msgs::msg::Point goal_point = determine_collision_point(collision_pose);
            publish_marker(goal_point);

            // the origin of the costmap is normally -10, -10
            // the usual resolution is 0.05 m/px which results is 20px/m
            // therefore the the offset is normally 200px in both x and y direction
            // the size of the costmap is normally 384 x 384
            // the formula for converting the goal point into the position in the costmap vector is: 
            // x_px = (x - x_origin) / resolution and y_px = (y-y_origin) / resolution
                
            int x_px = (goal_point.x - map.info.origin.position.x) / map.info.resolution;
            int y_px = (goal_point.y - map.info.origin.position.y) / map.info.resolution;
            
            RCLCPP_INFO(node_->get_logger(), "\nX Pixel: %d \n Y Pixel: %d", x_px, y_px);
            
            add_occupation_to_costmap(costmap_vector_2d, x_px, y_px);

            convert_vector_to_data(costmap_vector_2d, map);

            if(!send_map_service_call(map))
                return BT::NodeStatus::FAILURE;

            return BT::NodeStatus::SUCCESS;
        }

    private:
        std::shared_ptr<rclcpp::Node> node_;
        rclcpp::Client<dms_interfaces::srv::GetLastMap>::SharedPtr map_service_client_;
        rclcpp::Client<dms_interfaces::srv::GetPose>::SharedPtr pose_service_client_;
        rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr marker_publisher_;
        rclcpp::Client<nav2_msgs::srv::ClearEntireCostmap>::SharedPtr clear_costmap_service_client_;
        rclcpp::Client<dms_interfaces::srv::SendMap>::SharedPtr send_map_client_;
};