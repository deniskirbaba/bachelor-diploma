// #include <cstdio>

// #include "rclcpp/rclcpp.hpp"
// #include "geometry_msgs/msg/twist.hpp"
// #include "std_srvs/srv/set_bool.hpp"
// #include "dms_interfaces/srv/pub_res_cmd_vel.hpp"

// #include "rcl_interfaces/msg/parameter.hpp"
// #include "rcl_interfaces/msg/set_parameters_result.hpp"

// #define MIN_LINEAR_SPEED 0.05


// class ControlSwitchingUnit : public rclcpp::Node 
// {
//     public:
//         ControlSwitchingUnit(const std::string& node_name, const rclcpp::NodeOptions& options);

//         rcl_interfaces::msg::SetParametersResult parameters_cb(const std::vector<rclcpp::Parameter>& parameters);

//         void reduce_speed_service_cb(
//             const std_srvs::srv::SetBool_Request::SharedPtr request,
//             const std_srvs::srv::SetBool_Response::SharedPtr response);

//         void nav2_cmd_vel_cb(const geometry_msgs::msg::Twist::SharedPtr msg);
//         void bt_cmd_vel_cb(const geometry_msgs::msg::Twist::SharedPtr msg);

//     private:
//         OnSetParametersCallbackHandle::SharedPtr parameter_cb;

//         rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr nav2_cmd_vel_sub;
//         rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr bt_cmd_vel_sub;

//         rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr res_cmd_vel_pub;

//         rclcpp::Service<std_srvs::srv::SetBool>::SharedPtr reduce_speed_service;
        
//         bool reduce_speed_flag;
// };


#include <cstdio>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "std_srvs/srv/set_bool.hpp"
#include "dms_interfaces/srv/pub_res_cmd_vel.hpp"

#define MIN_LINEAR_SPEED 0.05


class ControlSwitchingUnit : public rclcpp::Node 
{
    public:
        ControlSwitchingUnit(const std::string& name);

        void nav2_cmd_vel_cb(const geometry_msgs::msg::Twist::SharedPtr msg);
        void bt_cmd_vel_cb(const geometry_msgs::msg::Twist::SharedPtr msg);
        
        void reduce_speed_service_cb(
            const std_srvs::srv::SetBool_Request::SharedPtr request,
            const std_srvs::srv::SetBool_Response::SharedPtr response);
        
        void full_stop_service_cb(
            const std_srvs::srv::SetBool_Request::SharedPtr request,
            const std_srvs::srv::SetBool_Response::SharedPtr response);

    private:
        rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr nav2_cmd_vel_sub;
        rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr bt_cmd_vel_sub;

        rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr res_cmd_vel_pub;

        rclcpp::Service<std_srvs::srv::SetBool>::SharedPtr reduce_speed_service;
        rclcpp::Service<std_srvs::srv::SetBool>::SharedPtr full_stop_service;

        bool reduce_speed_flag;
        bool full_stop_flag;
};