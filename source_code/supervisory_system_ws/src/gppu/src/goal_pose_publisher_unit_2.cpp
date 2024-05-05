#include "goal_pose_publisher_unit_2.hpp"


GoalPosePublisherUnit::GoalPosePublisherUnit(const std::string & node_name)
: Node(node_name)
{

    // create QoS profile to publish goal pose. We want to keep the last message and make it reliable
    rclcpp::QoS qos_profile = rclcpp::SystemDefaultsQoS();
    qos_profile = rclcpp::QoS(rclcpp::KeepLast(1)).transient_local().reliable();

    goal_pose_pub_ptr = this->create_publisher<geometry_msgs::msg::PoseStamped>("goal_pose", qos_profile);

    // apply the same QoS profile to the subscription
    goal_status_sub_ptr = this->create_subscription<action_msgs::msg::GoalStatus>(
        "navigate_to_pose/_action/status", 
        qos_profile, 
        std::bind(
            &GoalPosePublisherUnit::goal_status_callback, 
            this, 
            std::placeholders::_1));

    // create a vector of goals
    goals_xy.push_back(std::make_pair(2.6, 2.1));
    goals_xy.push_back(std::make_pair(-0.75, 2.75));
    goals_xy.push_back(std::make_pair(-3.94, -2.68));
    goals_xy.push_back(std::make_pair(8.0, -4.05));

    start();
}

void GoalPosePublisherUnit::goal_status_callback(const action_msgs::msg::GoalStatus::SharedPtr msg)
{
    RCLCPP_INFO(this->get_logger(), "Received goal status");

    if (msg->status == 4)
    {
        RCLCPP_INFO(this->get_logger(), "Goal reached. Publishing new goal.");
        
        // publish new goal with goal_index
        geometry_msgs::msg::PoseStamped goal_pose;

        goal_pose.header.stamp = this->now();
        goal_pose.header.frame_id = "map";
        goal_pose.pose.position.x = goals_xy[goal_index].first;
        goal_pose.pose.position.y = goals_xy[goal_index].second;
        goal_pose.pose.position.z = 0.0;
        goal_pose.pose.orientation.x = 0.0;
        goal_pose.pose.orientation.y = 0.0;
        goal_pose.pose.orientation.z = 0.0;
        goal_pose.pose.orientation.w = 1.0;

        goal_pose_pub_ptr->publish(goal_pose);

        // change index to next goal but to not overflow vector
        goal_index = (goal_index + 1) % goals_xy.size();
    }
}

void GoalPosePublisherUnit::start()
{
    RCLCPP_INFO(this->get_logger(), "Publishing first goal");

    // publish first goal
    geometry_msgs::msg::PoseStamped goal_pose;

    goal_pose.header.stamp = this->now();
    goal_pose.header.frame_id = "map";
    goal_pose.pose.position.x = goals_xy[goal_index].first;
    goal_pose.pose.position.y = goals_xy[goal_index].second;
    goal_pose.pose.position.z = 0.0;
    goal_pose.pose.orientation.x = 0.0;
    goal_pose.pose.orientation.y = 0.0;
    goal_pose.pose.orientation.z = 0.0;
    goal_pose.pose.orientation.w = 1.0;
    
    // wait for 1 second before publishing the first goal
    rclcpp::sleep_for(std::chrono::seconds(1));
    // publish the first goal during 1 second
    

    //    goal_pose_pub_ptr->publish(goal_pose);

    // change index to next goal but to not overflow vector
    goal_index = (goal_index + 1) % goals_xy.size();
}

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<GoalPosePublisherUnit>("goal_pose_publisher_unit_2");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}