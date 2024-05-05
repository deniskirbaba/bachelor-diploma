#include "goal_pose_publisher_unit.hpp"


GoalPosePublisherUnit::GoalPosePublisherUnit(const std::string& node_name) : Node(node_name)
{
    goals_xy.push_back(std::make_pair(-3.94, -2.68));
    goals_xy.push_back(std::make_pair(-0.75, 2.75));
    goals_xy.push_back(std::make_pair(2.6, 2.1));
    goals_xy.push_back(std::make_pair(8.0, -4.05));

    this->action_cli_ptr = rclcpp_action::create_client<nav2_msgs::action::NavigateThroughPoses>(this, "/navigate_through_poses");

    start();
}

void GoalPosePublisherUnit::goal_response_callback(
    const rclcpp_action::ClientGoalHandle<nav2_msgs::action::NavigateThroughPoses>::SharedPtr & goal_handle)
{
    if (!goal_handle) 
    {
      RCLCPP_ERROR(this->get_logger(), "Goal was rejected by server");
    } 
    else 
    {
      RCLCPP_INFO(this->get_logger(), "Goal accepted by server, waiting for result");
    }
}

void GoalPosePublisherUnit::feedback_callback(
    rclcpp_action::ClientGoalHandle<nav2_msgs::action::NavigateThroughPoses>::SharedPtr,
    const std::shared_ptr<const nav2_msgs::action::NavigateThroughPoses::Feedback> feedback)
{
    RCLCPP_INFO(this->get_logger(), "Received feedback");
    RCLCPP_INFO(this->get_logger(), "Distance remaining: %f", feedback->distance_remaining);
    RCLCPP_INFO(this->get_logger(), "Number of remaining poses: %d", feedback->number_of_poses_remaining);
}

void GoalPosePublisherUnit::result_callback(
    const rclcpp_action::ClientGoalHandle<nav2_msgs::action::NavigateThroughPoses>::WrappedResult & result)
{
    switch (result.code) 
    {
        case rclcpp_action::ResultCode::SUCCEEDED:
            RCLCPP_INFO(this->get_logger(), "Goal succeeded");
            break;
        case rclcpp_action::ResultCode::ABORTED:
            RCLCPP_INFO(this->get_logger(), "Goal was aborted");
            return;
        case rclcpp_action::ResultCode::CANCELED:
            RCLCPP_INFO(this->get_logger(), "Goal was canceled");
            return;
        default:
            RCLCPP_ERROR(this->get_logger(), "Unknown result code");
            return;
    }
}

void GoalPosePublisherUnit::start()
{
    // Wait for the action server to become available
    if (!this->action_cli_ptr->wait_for_action_server(std::chrono::seconds(10))) 
    {
        RCLCPP_ERROR(this->get_logger(), "Action server not available after waiting");
        rclcpp::shutdown();
        return;
    }

    auto goal_message = nav2_msgs::action::NavigateThroughPoses::Goal();
    // fill the goal message with poses, using the x and y coordinates from goals_xy
    for (auto goal : goals_xy)
    {
        geometry_msgs::msg::PoseStamped pose;
        pose.header.frame_id = "map";
        pose.header.stamp = this->now();
        pose.pose.position.x = goal.first;
        pose.pose.position.y = goal.second;
        pose.pose.position.z = 0.0;
        pose.pose.orientation.x = 0.0;
        pose.pose.orientation.y = 0.0;
        pose.pose.orientation.z = 0.0;
        pose.pose.orientation.w = 1.0;
        goal_message.poses.push_back(pose);
    }
    goal_message.behavior_tree = "";

    RCLCPP_INFO(this->get_logger(), "Sending goal");

    // send the goal to the server
    auto send_goal_options = rclcpp_action::Client<nav2_msgs::action::NavigateThroughPoses>::SendGoalOptions();
    send_goal_options.goal_response_callback = std::bind(&GoalPosePublisherUnit::goal_response_callback, this, std::placeholders::_1);
    send_goal_options.feedback_callback = std::bind(&GoalPosePublisherUnit::feedback_callback, this, std::placeholders::_1, std::placeholders::_2);
    send_goal_options.result_callback = std::bind(&GoalPosePublisherUnit::result_callback, this, std::placeholders::_1);

    this->action_cli_ptr->async_send_goal(goal_message, send_goal_options);
}

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<GoalPosePublisherUnit>("goal_pose_publisher_unit");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}