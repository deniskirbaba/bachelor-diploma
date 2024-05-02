#include <string>
#include <memory>

#include "rclcpp/rclcpp.hpp"

#include "geometry_msgs/msg/pose_stamped.hpp"
#include "geometry_msgs/msg/pose_with_covariance_stamped.hpp"
#include "nav_msgs/msg/path.hpp"
#include "action_msgs/msg/goal_status_array.hpp"
#include "gazebo_msgs/msg/contacts_state.hpp"
#include "gazebo_msgs/msg/contact_state.hpp"
#include "std_msgs/msg/header.hpp"
#include "sensor_msgs/msg/imu.hpp"

#include "tf2/convert.h"
#include "tf2/LinearMath/Quaternion.h"
#include "tf2/LinearMath/Matrix3x3.h"

#include "std_srvs/srv/set_bool.hpp"
#include "std_srvs/srv/empty.hpp"

#include "dms_interfaces/srv/get_goal_distance.hpp"


class NavigationServicesProviderUnit : public rclcpp::Node
{
    public:
        explicit NavigationServicesProviderUnit (const std::string& node_name);
        virtual ~NavigationServicesProviderUnit();

    private:
        // Get goal distance service
        void path_cb(const nav_msgs::msg::Path::SharedPtr msg);
        void pose_cov_st_cb(const geometry_msgs::msg::PoseWithCovarianceStamped::SharedPtr msg);
        void get_goal_distance_srv_cb(
            const dms_interfaces::srv::GetGoalDistance_Request::SharedPtr request,
            const dms_interfaces::srv::GetGoalDistance_Response::SharedPtr response);

        rclcpp::Subscription<nav_msgs::msg::Path>::SharedPtr path_sub;
        rclcpp::Subscription<geometry_msgs::msg::PoseWithCovarianceStamped>::SharedPtr pose_cov_st_sub;
        rclcpp::Service<dms_interfaces::srv::GetGoalDistance>::SharedPtr get_goal_distance_srv;

        geometry_msgs::msg::PoseStamped goal = geometry_msgs::msg::PoseStamped();
        geometry_msgs::msg::PoseWithCovarianceStamped pose = geometry_msgs::msg::PoseWithCovarianceStamped();
        
        double goal_distance;
        bool goal_received = false;
        bool pose_received = false;


        // Check path possibility service 
        void check_path_possibility_srv_cb(
            const std_srvs::srv::SetBool_Request::SharedPtr request,
            const std_srvs::srv::SetBool_Response::SharedPtr response);

        void goal_status_cb(const action_msgs::msg::GoalStatusArray::SharedPtr msg);

        rclcpp::Service<std_srvs::srv::SetBool>::SharedPtr check_path_possibility_srv;
        rclcpp::Subscription<action_msgs::msg::GoalStatusArray>::SharedPtr goal_status_sub;
        
        bool path_possibility;

        // Check collision service
        void check_collision_srv_cb(
            const std_srvs::srv::SetBool_Request::SharedPtr request,
            const std_srvs::srv::SetBool_Response::SharedPtr response);

        void contacts_state_cb(const gazebo_msgs::msg::ContactsState::SharedPtr msg);

        rclcpp::Client<std_srvs::srv::Empty>::SharedPtr save_collision_pose_cli;
        rclcpp::Service<std_srvs::srv::SetBool>::SharedPtr check_collision_srv;
        rclcpp::Subscription<gazebo_msgs::msg::ContactsState>::SharedPtr contacts_state_sub;

        bool in_collision;
        int32_t last_collision_time;   

        // Check orientation service
        void check_orientation_srv_cb(
            const std_srvs::srv::SetBool_Request::SharedPtr request,
            const std_srvs::srv::SetBool_Response::SharedPtr response);

        void imu_cb(const sensor_msgs::msg::Imu::SharedPtr msg);

        rclcpp::Service<std_srvs::srv::SetBool>::SharedPtr check_orientation_srv;
        rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr imu_sub;

        bool all_wheels_on_the_ground;     
};