#include "battery_simulation_unit.hpp"


BatterySimulationUnit::BatterySimulationUnit(const std::string & node_name) : Node(node_name)
{
    RCLCPP_INFO(this->get_logger(), "Battery simulation unit is active.");

    cmd_vel_sub = this->create_subscription<geometry_msgs::msg::Twist>(
        "cmd_vel", 
        10, 
        std::bind(&BatterySimulationUnit::cmd_vel_cb, 
            this, 
            std::placeholders::_1));

    timer = this->create_wall_timer(
        std::chrono::seconds(1), 
        std::bind(&BatterySimulationUnit::timer_cb, 
            this));

    get_battery_level_srv = this->create_service<dms_interfaces::srv::GetBatteryLevel>(
        "get_battery_level_service", 
        std::bind(&BatterySimulationUnit::get_battery_level_srv_cb, 
            this, 
            std::placeholders::_1, 
            std::placeholders::_2));

    battery_level = 100.0;
    idle_consumption = 0.01;
    drive_consumption = 0.05;
}

void BatterySimulationUnit::cmd_vel_cb(const geometry_msgs::msg::Twist::SharedPtr msg)
{
    if (msg->linear.x != 0)
        battery_level -= drive_consumption;
}

void BatterySimulationUnit::timer_cb()
{
    battery_level -= idle_consumption;
}

void BatterySimulationUnit::get_battery_level_srv_cb(
    const dms_interfaces::srv::GetBatteryLevel_Request::SharedPtr request,
    const dms_interfaces::srv::GetBatteryLevel_Response::SharedPtr response)
{
    response->battery_level = battery_level;
    response->idle_consumption = idle_consumption;
    response->drive_consumption = drive_consumption;
}

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<BatterySimulationUnit>("battery_simulation_unit"));
  rclcpp::shutdown();

  return 0;
}