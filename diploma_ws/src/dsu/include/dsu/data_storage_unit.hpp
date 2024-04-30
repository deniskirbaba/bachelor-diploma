#include <queue>
#include <vector>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "std_srvs/srv/empty.hpp"
#include "geometry_msgs/msg/pose_with_covariance_stamped.hpp"
#include "dms_interfaces/srv/get_goal.hpp"
#include "dms_interfaces/srv/get_pose.hpp"


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
};