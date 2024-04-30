#include <memory>
#include <string>
#include <vector>
#include <utility>
#include <functional>
#include <chrono>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp/qos.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "action_msgs/msg/goal_status.hpp"


class GoalPosePublisherUnit : public rclcpp::Node
{
    public:
        GoalPosePublisherUnit(const std::string & node_name);
        
        ~GoalPosePublisherUnit() = default;

        void start();

        void goal_status_callback(const action_msgs::msg::GoalStatus::SharedPtr msg);

    private:
        rclcpp::Publisher<geometry_msgs::msg::PoseStamped>::SharedPtr goal_pose_pub_ptr;

        rclcpp::Subscription<action_msgs::msg::GoalStatus>::SharedPtr goal_status_sub_ptr;

        // create std::vector for storing the coordinates x and y of goals
        std::vector<std::pair<double, double>> goals_xy;
        int goal_index = 0;
};