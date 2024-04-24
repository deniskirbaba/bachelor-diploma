#include <string>
#include <memory>

#include "rclcpp/rclcpp.hpp"

#include "geometry_msgs/msg/pose_stamped.hpp"
#include "geometry_msgs/msg/pose_with_covariance_stamped.hpp"
#include "nav_msgs/msg/path.hpp"

#include "dms_interfaces/srv/get_goal_distance.hpp"


class NavigationServicesProviderUnit : public rclcpp::Node
{
    public:
        explicit NavigationServicesProviderUnit (const std::string& node_name);
        virtual ~NavigationServicesProviderUnit();

    private:
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
};