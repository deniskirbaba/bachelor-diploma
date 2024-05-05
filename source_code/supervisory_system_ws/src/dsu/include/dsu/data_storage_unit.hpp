#include <queue>
#include <vector>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/pose.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "geometry_msgs/msg/pose_with_covariance_stamped.hpp"
#include "std_srvs/srv/empty.hpp"

#include "dms_interfaces/srv/get_goal.hpp"
#include "dms_interfaces/srv/get_pose.hpp"
#include "dms_interfaces/srv/get_last_map.hpp"
#include "dms_interfaces/srv/send_map.hpp"


class DataStorageUnit : public rclcpp::Node
{
    public:
        DataStorageUnit(const std::string& node_name);
        
        ~DataStorageUnit() = default;

    private:
        // Goal pose
        rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr goal_sub;
        rclcpp::Publisher<geometry_msgs::msg::PoseStamped>::SharedPtr goal_pub;
        rclcpp::Service<std_srvs::srv::Empty>::SharedPtr set_last_goal_srv;
        rclcpp::Service<dms_interfaces::srv::GetGoal>::SharedPtr get_last_goal_srv;
        
        geometry_msgs::msg::PoseStamped last_goal;
        
        void sub_goal_cb(const geometry_msgs::msg::PoseStamped::SharedPtr msg);
        
        void set_last_goal_srv_cb(
            const std_srvs::srv::Empty_Request::SharedPtr request,
            const std_srvs::srv::Empty_Response::SharedPtr response);

        void get_last_goal_srv_cb(
            const dms_interfaces::srv::GetGoal_Request::SharedPtr request,
            const dms_interfaces::srv::GetGoal_Response::SharedPtr response);
        
        // Robot pose
        rclcpp::Subscription<geometry_msgs::msg::PoseWithCovarianceStamped>::SharedPtr sub_pose;
        rclcpp::Service<dms_interfaces::srv::GetPose>::SharedPtr get_last_pose_srv; 
        
        std::vector<geometry_msgs::msg::PoseWithCovarianceStamped> poses;
        
        void sub_pose_cb(const geometry_msgs::msg::PoseWithCovarianceStamped::SharedPtr msg);
        
        void get_last_pose_srv_cb(
            const dms_interfaces::srv::GetPose_Request::SharedPtr request,
            const dms_interfaces::srv::GetPose_Response::SharedPtr response);   

        // Map
        rclcpp::Subscription<nav_msgs::msg::OccupancyGrid>::SharedPtr map_sub;
        rclcpp::Publisher<nav_msgs::msg::OccupancyGrid>::SharedPtr map_pub;
        rclcpp::Service<dms_interfaces::srv::GetLastMap>::SharedPtr get_last_map_srv;
        rclcpp::Service<dms_interfaces::srv::SendMap>::SharedPtr send_map_srv;

        nav_msgs::msg::OccupancyGrid last_map;

        void get_last_map_srv_cb(
            const dms_interfaces::srv::GetLastMap_Request::SharedPtr request,
            const dms_interfaces::srv::GetLastMap_Response::SharedPtr response);   

        void send_map_srv_cb(
            dms_interfaces::srv::SendMap_Request::SharedPtr request,
            dms_interfaces::srv::SendMap_Response::SharedPtr response);

        void map_cb(const nav_msgs::msg::OccupancyGrid::SharedPtr msg);

        // Collision pose
        rclcpp::Service<std_srvs::srv::Empty>::SharedPtr save_collision_pose_srv;
        rclcpp::Service<dms_interfaces::srv::GetPose>::SharedPtr get_collision_pose_srv;

        geometry_msgs::msg::Pose collision_pose;

        void save_collision_pose_srv_cb(
            const std_srvs::srv::Empty_Request::SharedPtr request,
            const std_srvs::srv::Empty_Response::SharedPtr response);

        void get_collision_pose_srv_cb(
            const dms_interfaces::srv::GetPose_Request::SharedPtr request,
            const dms_interfaces::srv::GetPose_Response::SharedPtr response);
};