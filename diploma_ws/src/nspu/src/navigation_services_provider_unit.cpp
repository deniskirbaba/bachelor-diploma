#include "navigation_services_provider_unit.hpp"


NavigationServicesProviderUnit::NavigationServicesProviderUnit (const std::string& node_name) : Node(node_name)
{
    RCLCPP_INFO(rclcpp::get_logger("NavigationServicesProviderUnit"), "Navigation services provider unit is active.");

    // Get goal distance service

    get_goal_distance_srv = this->create_service<dms_interfaces::srv::GetGoalDistance>(
        "get_goal_distance",
        std::bind(&NavigationServicesProviderUnit::get_goal_distance_srv_cb,
            this,
            std::placeholders::_1,
            std::placeholders::_2));
    
    path_sub = this->create_subscription<nav_msgs::msg::Path>(
        "plan", 
        1, 
        std::bind(&NavigationServicesProviderUnit::path_cb, 
            this, 
            std::placeholders::_1));
    
    pose_cov_st_sub = this->create_subscription<geometry_msgs::msg::PoseWithCovarianceStamped>(
        "amcl_pose", 
        10, 
        std::bind(&NavigationServicesProviderUnit::pose_cov_st_cb, 
            this, 
            std::placeholders::_1));


    // Check path possibility service

    path_possibility = true;

    check_path_possibility_srv = this->create_service<std_srvs::srv::SetBool>(
        "check_path_possibility",
        std::bind(&NavigationServicesProviderUnit::check_path_possibility_srv_cb,
            this,
            std::placeholders::_1,
            std::placeholders::_2));

    goal_status_sub = this->create_subscription<action_msgs::msg::GoalStatusArray>(
        "compute_path_to_pose/_action/status", 
        10, 
        std::bind(&NavigationServicesProviderUnit::goal_status_cb, 
            this, 
            std::placeholders::_1));
}

NavigationServicesProviderUnit::~NavigationServicesProviderUnit() = default;

// Get goal distance service

void NavigationServicesProviderUnit::path_cb(const nav_msgs::msg::Path::SharedPtr msg)
{
    RCLCPP_INFO(this->get_logger(), "Goal has received.");
    goal = msg->poses.back();
    goal_received = true;
}

void NavigationServicesProviderUnit::pose_cov_st_cb(const geometry_msgs::msg::PoseWithCovarianceStamped::SharedPtr msg)
{
    RCLCPP_INFO(this->get_logger(), "Pose has received.");
    pose = *msg;
    pose_received = true;
}

void NavigationServicesProviderUnit::get_goal_distance_srv_cb(
    const dms_interfaces::srv::GetGoalDistance_Request::SharedPtr request,
    const dms_interfaces::srv::GetGoalDistance_Response::SharedPtr response)
{
    if (goal_received && pose_received)
        goal_distance = sqrt(pow(goal.pose.position.x - pose.pose.pose.position.x, 2) + pow(goal.pose.position.y - pose.pose.pose.position.y, 2));
    else
        goal_distance = 0.0;

    response->goal_distance = goal_distance;
}


// Check path possibility service

void NavigationServicesProviderUnit::check_path_possibility_srv_cb(   
    const std_srvs::srv::SetBool_Request::SharedPtr request,
    const std_srvs::srv::SetBool_Response::SharedPtr response)
{   
    response->message="";
    response->success = path_possibility;    
}   

void NavigationServicesProviderUnit::goal_status_cb(const action_msgs::msg::GoalStatusArray::SharedPtr msg)
{
    auto state = msg->status_list.back();

    RCLCPP_INFO(this->get_logger(), "Goal status array received from Nav2 planner.");

    if (state.status == action_msgs::msg::GoalStatus::STATUS_SUCCEEDED)
    { 
        path_possibility = true;
    }
    else if (state.status == action_msgs::msg::GoalStatus::STATUS_EXECUTING)
    {
        path_possibility = true;
    }
    else
    {
        path_possibility = false;
    }

    if (path_possibility)
        RCLCPP_INFO(this->get_logger(), "Path is possible.");    
    else
        RCLCPP_INFO(this->get_logger(), "Path is impossible.");    
}


int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<NavigationServicesProviderUnit>("navigation_services_provider_unit"));
    rclcpp::shutdown();

    return 0;
}