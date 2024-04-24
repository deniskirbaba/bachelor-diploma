#include "sensor_supervisitory_unit.hpp"


SensorSupervisitoryUnit::SensorSupervisitoryUnit (const std::string& node_name) : Node(node_name)
{
    lidar_sub = this->create_subscription<sensor_msgs::msg::LaserScan>(
        "scan", 
        10, 
        std::bind(&SensorSupervisitoryUnit::lidar_cb, 
            this, 
            std::placeholders::_1));

    imu_sub = this->create_subscription<sensor_msgs::msg::Imu>(
        "imu", 
        10, 
        std::bind(&SensorSupervisitoryUnit::imu_cb, 
            this, 
            std::placeholders::_1));

    odom_sub = this->create_subscription<nav_msgs::msg::Odometry>(
        "odom", 
        10, 
        std::bind(&SensorSupervisitoryUnit::odom_cb, 
            this, 
            std::placeholders::_1));            

    lidar_service = this->create_service<std_srvs::srv::SetBool>(
        "lidar_check_service", 
        std::bind(&SensorSupervisitoryUnit::lidar_check_service_cb, 
            this, 
            std::placeholders::_1, 
            std::placeholders::_2));

    imu_service = this->create_service<std_srvs::srv::SetBool>(
        "imu_check_service", 
        std::bind(&SensorSupervisitoryUnit::imu_check_service_cb, 
            this, 
            std::placeholders::_1, 
            std::placeholders::_2));

    odom_service = this->create_service<std_srvs::srv::SetBool>(
        "odom_check_service", 
        std::bind(&SensorSupervisitoryUnit::odom_check_service_cb, 
            this, 
            std::placeholders::_1, 
            std::placeholders::_2));            
}

SensorSupervisitoryUnit::~SensorSupervisitoryUnit() = default;

void SensorSupervisitoryUnit::lidar_cb(const sensor_msgs::msg::LaserScan::SharedPtr msg)
{   
    RCLCPP_INFO(this->get_logger(), "New scan received. Message interval: %f", this->get_clock()->now().seconds() - lidar_last_msg_time.seconds());

    lidar_last_msg_time = this->get_clock()->now();
}

void SensorSupervisitoryUnit::imu_cb(const sensor_msgs::msg::Imu::SharedPtr msg)
{   
    RCLCPP_INFO(this->get_logger(), "New imu received. Message interval: %f", this->get_clock()->now().seconds() - imu_last_msg_time.seconds());

    imu_last_msg_time = this->get_clock()->now();
}

void SensorSupervisitoryUnit::odom_cb(const nav_msgs::msg::Odometry::SharedPtr msg)
{   
    RCLCPP_INFO(this->get_logger(), "New odom received. Message interval: %f", this->get_clock()->now().seconds() - odom_last_msg_time.seconds());

    odom_last_msg_time = this->get_clock()->now();
}

void SensorSupervisitoryUnit::lidar_check_service_cb(
            const std_srvs::srv::SetBool_Request::SharedPtr request,
            const std_srvs::srv::SetBool_Response::SharedPtr response)
{   
    lidar_msg_interval = (this->get_clock()->now().seconds() - lidar_last_msg_time.seconds());

    if(lidar_msg_interval < MAX_MSG_INTERVAL)
    {
        RCLCPP_INFO(this->get_logger(), "Scan message interval not exceeded. Lidar is up.");
        is_lidar_up = true;
    }
    else 
    {
        RCLCPP_INFO(this->get_logger(), "Scan message interval is exceeded. Lidar is down.");        
        is_lidar_up = false;
    }
    response->message = "";
    response->success = is_lidar_up;  
}

void SensorSupervisitoryUnit::imu_check_service_cb(
            const std_srvs::srv::SetBool_Request::SharedPtr request,
            const std_srvs::srv::SetBool_Response::SharedPtr response)
{   
    imu_msg_interval = (this->get_clock()->now().seconds() - imu_last_msg_time.seconds());

    if(imu_msg_interval < MAX_MSG_INTERVAL)
    {
        RCLCPP_INFO(this->get_logger(), "Imu message interval not exceeded. IMU is up.");
        is_imu_up = true;
    }
    else 
    {
        RCLCPP_INFO(this->get_logger(), "Imu message interval is exceeded. IMU is down.");        
        is_imu_up = false;
    }
    response->message = "";
    response->success = is_imu_up;  
}

void SensorSupervisitoryUnit::odom_check_service_cb(
            const std_srvs::srv::SetBool_Request::SharedPtr request,
            const std_srvs::srv::SetBool_Response::SharedPtr response)
{   
    odom_msg_interval = (this->get_clock()->now().seconds() - odom_last_msg_time.seconds());

    if(odom_msg_interval < MAX_MSG_INTERVAL)
    {
        RCLCPP_INFO(this->get_logger(), "Odom message interval not exceeded. Odometry is up.");
        is_odom_up = true;
    }
    else 
    {
        RCLCPP_INFO(this->get_logger(), "Odom message interval is exceeded. Odometry is down.");        
        is_odom_up = false;
    }
    response->message = "";
    response->success = is_odom_up;  
}


int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  RCLCPP_INFO(rclcpp::get_logger("SensorSupervisitoryUnit"), "Sensor supervisitory unit is active.");
  rclcpp::spin(std::make_shared<SensorSupervisitoryUnit>("sensor_supervisitory_unit"));
  rclcpp::shutdown();

  return 0;
}