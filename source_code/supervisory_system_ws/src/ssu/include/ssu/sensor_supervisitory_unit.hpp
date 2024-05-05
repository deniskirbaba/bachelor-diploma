#include <functional>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_srvs/srv/set_bool.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include "sensor_msgs/msg/imu.hpp"
#include "nav_msgs/msg/odometry.hpp"

#define MAX_MSG_INTERVAL 3.0


class SensorSupervisitoryUnit : public rclcpp::Node
{
    public:
        explicit SensorSupervisitoryUnit (const std::string& node_name);  // constructor
        virtual ~SensorSupervisitoryUnit();  // destructor

    private:
        void lidar_cb(const sensor_msgs::msg::LaserScan::SharedPtr msg);
        void imu_cb(const sensor_msgs::msg::Imu::SharedPtr msg);
        void odom_cb(const nav_msgs::msg::Odometry::SharedPtr msg);

        void lidar_check_service_cb(
            const std_srvs::srv::SetBool_Request::SharedPtr request,
            const std_srvs::srv::SetBool_Response::SharedPtr response);
        void imu_check_service_cb(
            const std_srvs::srv::SetBool_Request::SharedPtr request,
            const std_srvs::srv::SetBool_Response::SharedPtr response);
        void odom_check_service_cb(
            const std_srvs::srv::SetBool_Request::SharedPtr request,
            const std_srvs::srv::SetBool_Response::SharedPtr response);            
        
        rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr lidar_sub;
        rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr imu_sub;
        rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_sub;

        rclcpp::Service<std_srvs::srv::SetBool>::SharedPtr lidar_service;
        rclcpp::Service<std_srvs::srv::SetBool>::SharedPtr imu_service;
        rclcpp::Service<std_srvs::srv::SetBool>::SharedPtr odom_service;

        rclcpp::Time lidar_last_msg_time;
        rclcpp::Time imu_last_msg_time;
        rclcpp::Time odom_last_msg_time;
        
        bool is_lidar_up;
        bool is_imu_up;
        bool is_odom_up;
        
        float lidar_msg_interval;
        float imu_msg_interval;
        float odom_msg_interval;
};
