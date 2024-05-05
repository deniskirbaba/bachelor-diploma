#include <memory>
#include <string>
#include <vector>
#include <chrono>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "nav2_msgs/action/navigate_through_poses.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"


class GoalPosePublisherUnit : public rclcpp::Node
{
    public:
        GoalPosePublisherUnit(const std::string & node_name);
        
        ~GoalPosePublisherUnit() = default;

        void start();

    private:
        rclcpp_action::Client<nav2_msgs::action::NavigateThroughPoses>::SharedPtr action_cli_ptr;

        void goal_response_callback(const rclcpp_action::ClientGoalHandle<nav2_msgs::action::NavigateThroughPoses>::SharedPtr & goal_handle);

        void feedback_callback(
            rclcpp_action::ClientGoalHandle<nav2_msgs::action::NavigateThroughPoses>::SharedPtr,
            const std::shared_ptr<const nav2_msgs::action::NavigateThroughPoses::Feedback> feedback);

        void result_callback(const rclcpp_action::ClientGoalHandle<nav2_msgs::action::NavigateThroughPoses>::WrappedResult & result);

        // create std::vector for storing the coordinates x and y of goals
        std::vector<std::pair<double, double>> goals_xy;
};