#include "data_storage_unit.hpp"


DataStorageUnit::DataStorageUnit(const std::string& node_name) : Node(node_name)
{
    // Goal pose
    goal_sub = this->create_subscription<geometry_msgs::msg::PoseStamped>(
        "goal_pose", 
        1, 
        std::bind(
            &DataStorageUnit::sub_goal_cb, 
            this, 
            std::placeholders::_1));
    goal_pub = this->create_publisher<geometry_msgs::msg::PoseStamped>("goal_pose", 1);
    set_last_goal_srv = this->create_service<std_srvs::srv::Empty>(
        "set_last_goal", 
        std::bind(
            &DataStorageUnit::set_last_goal_srv_cb, 
            this, 
            std::placeholders::_1, 
            std::placeholders::_2));
    get_last_goal_srv = this->create_service<dms_interfaces::srv::GetGoal>(
        "get_last_goal", 
        std::bind(
            &DataStorageUnit::get_last_goal_srv_cb, 
            this, 
            std::placeholders::_1, 
            std::placeholders::_2));
    
    // Robot pose
    sub_pose = this->create_subscription<geometry_msgs::msg::PoseWithCovarianceStamped>(
        "amcl_pose", 
        1, 
        std::bind(
            &DataStorageUnit::sub_pose_cb, 
            this, 
            std::placeholders::_1));
    get_last_pose_srv = this->create_service<dms_interfaces::srv::GetPose>(
        "get_last_pose", 
        std::bind(
            &DataStorageUnit::get_last_pose_srv_cb, 
            this, 
            std::placeholders::_1, 
            std::placeholders::_2));

    // Map
    map_sub = this->create_subscription<nav_msgs::msg::OccupancyGrid>(
        "map", 
        rclcpp::QoS(rclcpp::KeepLast(1)).transient_local().reliable(), 
        std::bind(
            &DataStorageUnit::map_cb, 
            this, 
            std::placeholders::_1));
    map_pub = this->create_publisher<nav_msgs::msg::OccupancyGrid>("map_updated", rclcpp::QoS(rclcpp::KeepLast(1)).transient_local().reliable());

    get_last_map_srv = this->create_service<dms_interfaces::srv::GetLastMap>("get_last_map", 
        std::bind(
            &DataStorageUnit::get_last_map_srv_cb, 
            this, 
            std::placeholders::_1, 
            std::placeholders::_2));

    send_map_srv = this->create_service<dms_interfaces::srv::SendMap>("send_map", 
        std::bind(
            &DataStorageUnit::send_map_srv_cb, 
            this, 
            std::placeholders::_1, 
            std::placeholders::_2));

    // Collision pose
    save_collision_pose_srv = this->create_service<std_srvs::srv::Empty>(
        "save_collision_pose", 
        std::bind(
            &DataStorageUnit::save_collision_pose_srv_cb, 
            this, 
            std::placeholders::_1, 
            std::placeholders::_2));

    get_collision_pose_srv = this->create_service<dms_interfaces::srv::GetPose>(
        "get_collision_pose", 
        std::bind(
            &DataStorageUnit::get_last_pose_srv_cb, 
            this, 
            std::placeholders::_1, 
            std::placeholders::_2));
}

// Goal pose

void DataStorageUnit::sub_goal_cb(const geometry_msgs::msg::PoseStamped::SharedPtr msg)
{
    RCLCPP_INFO(this->get_logger(), "Received a Goal Pose.");
    last_goal = *msg;
}

void DataStorageUnit::set_last_goal_srv_cb(
    const std_srvs::srv::Empty_Request::SharedPtr request,
    const std_srvs::srv::Empty_Response::SharedPtr response)
{
    if (last_goal != geometry_msgs::msg::PoseStamped())
    {
        RCLCPP_INFO(this->get_logger(), "Publishing last saved goal.");
        goal_pub->publish(last_goal);
    }
    else 
        RCLCPP_INFO(this->get_logger(), "No Goal saved to republish.");
}

void DataStorageUnit::get_last_goal_srv_cb(
            const dms_interfaces::srv::GetGoal_Request::SharedPtr request,
            const dms_interfaces::srv::GetGoal_Response::SharedPtr response)
{
    response->goal_pose = this->last_goal.pose;
}

// Robot pose

void DataStorageUnit::sub_pose_cb(const geometry_msgs::msg::PoseWithCovarianceStamped::SharedPtr msg)
{
    RCLCPP_INFO(this->get_logger(), "Received AMCL Pose.");
    poses.push_back(*msg);
    if (poses.size() > 20)
        poses.erase(poses.begin());
}
        
void DataStorageUnit::get_last_pose_srv_cb(
    const dms_interfaces::srv::GetPose_Request::SharedPtr request,
    const dms_interfaces::srv::GetPose_Response::SharedPtr response)
{
    // check if poses is empty
    if (this->poses.empty())
    {
        RCLCPP_INFO(this->get_logger(), "No Pose saved to return.");
        response->pose = geometry_msgs::msg::Pose();
    }
    response->pose = this->poses.back().pose.pose;
}

// Map

void DataStorageUnit::map_cb(const nav_msgs::msg::OccupancyGrid::SharedPtr msg)
{
    RCLCPP_INFO(this->get_logger(), "Received a Map.");
    this->last_map = *msg;
}

void DataStorageUnit::get_last_map_srv_cb(
    const dms_interfaces::srv::GetLastMap_Request::SharedPtr request,
    const dms_interfaces::srv::GetLastMap_Response::SharedPtr response)
{
    response->map = this->last_map;
}

void DataStorageUnit::send_map_srv_cb(
    dms_interfaces::srv::SendMap_Request::SharedPtr request,
    dms_interfaces::srv::SendMap_Response::SharedPtr response)
{
    RCLCPP_INFO(this->get_logger(), "Sending Map.");
    last_map = request->map;
    map_pub->publish(last_map);
}

// Collision pose

void DataStorageUnit::save_collision_pose_srv_cb(
    const std_srvs::srv::Empty_Request::SharedPtr request,
    const std_srvs::srv::Empty_Response::SharedPtr response)
{
    // Save last robot pose from vector poses
    if (!poses.empty())
    {
        collision_pose = this->poses.back().pose.pose;
        RCLCPP_INFO(this->get_logger(), "Collision Pose saved.");
    }
    else
        RCLCPP_INFO(this->get_logger(), "No Pose saved to save as Collision Pose.");
}

void DataStorageUnit::get_collision_pose_srv_cb(
    const dms_interfaces::srv::GetPose_Request::SharedPtr request,
    const dms_interfaces::srv::GetPose_Response::SharedPtr response)
{
    // check if we have collision pose and if so return it
    if (this->collision_pose != geometry_msgs::msg::Pose())
    {
        RCLCPP_INFO(this->get_logger(), "Returning Collision Pose.");
        response->pose = collision_pose;
    }
    else
    {
        RCLCPP_INFO(this->get_logger(), "No Collision Pose saved to return.");
        response->pose = geometry_msgs::msg::Pose();
    }
}


int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);

    rclcpp::spin(std::make_shared<DataStorageUnit>("data_storage_unit"));
}
 