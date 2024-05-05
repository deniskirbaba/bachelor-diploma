#include <string>
#include <memory>
#include <cstdio>
#include <chrono>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "dms_interfaces/srv/get_battery_level.hpp"


class BatterySimulationUnit : public rclcpp::Node
{
    public:
        BatterySimulationUnit(const std::string & node_name);
        ~BatterySimulationUnit() = default;
    
    private:
        rclcpp::TimerBase::SharedPtr timer;
        void timer_cb();
        
        rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_sub;
        void cmd_vel_cb(const geometry_msgs::msg::Twist::SharedPtr msg);

        rclcpp::Service<dms_interfaces::srv::GetBatteryLevel>::SharedPtr get_battery_level_srv;
        void get_battery_level_srv_cb(
            const dms_interfaces::srv::GetBatteryLevel_Request::SharedPtr request,
            const dms_interfaces::srv::GetBatteryLevel_Response::SharedPtr response);

        float battery_level;
        float idle_consumption;
        float drive_consumption;
};