// #include "control_switching_unit.hpp"


// ControlSwitchingUnit::ControlSwitchingUnit(
//     const std::string& node_name, 
//     const rclcpp::NodeOptions& options = rclcpp::NodeOptions().allow_undeclared_parameters(true)) : Node(node_name, options)
// {
//     RCLCPP_INFO(this->get_logger(), "Initialization of CSU is started.");

//     nav2_cmd_vel_sub = this->create_subscription<geometry_msgs::msg::Twist>("cmd_vel_nav", 1, std::bind(&ControlSwitchingUnit::nav2_cmd_vel_cb, this, std::placeholders::_1));
//     bt_cmd_vel_sub = this->create_subscription<geometry_msgs::msg::Twist>("cmd_vel_bt", 1, std::bind(&ControlSwitchingUnit::bt_cmd_vel_cb, this, std::placeholders::_1));
    
//     res_cmd_vel_pub = this->create_publisher<geometry_msgs::msg::Twist>("cmd_vel", 10);

//     reduce_speed_service = this->create_service<std_srvs::srv::SetBool>("speed_reduce_service", std::bind(&ControlSwitchingUnit::reduce_speed_service_cb, this, std::placeholders::_1, std::placeholders::_2));
    
//     this->declare_parameter("reduce_speed_flag", false);
//     reduce_speed_flag = this->get_parameter("reduce_speed_flag").as_bool();

//     parameter_cb = this->add_on_set_parameters_callback(std::bind(&ControlSwitchingUnit::parameters_cb, this, std::placeholders::_1));
    
//     RCLCPP_INFO(this->get_logger(), "Initialization of CSU is finished.");
// }

// void ControlSwitchingUnit::reduce_speed_service_cb(
//         const std_srvs::srv::SetBool_Request::SharedPtr request,
//         const std_srvs::srv::SetBool_Response::SharedPtr response)
// {
//     rclcpp::Parameter parameter("reduce_speed_flag", request->data);
//     this->set_parameter(parameter);
//     reduce_speed_flag = request->data;

//     response->message = "";
//     response->success = true;
// }

// rcl_interfaces::msg::SetParametersResult ControlSwitchingUnit::parameters_cb(const std::vector<rclcpp::Parameter>& parameters)
// {
//     RCLCPP_INFO(this->get_logger(), "Parameters callback is invoked.");
//     for (auto &param : parameters)
//     {
//         if (param.get_name() == "reduce_speed_flag")
//         {
//             if (param.get_type() == rclcpp::ParameterType::PARAMETER_BOOL)
//             {
//                 reduce_speed_flag = param.as_bool();
//                 RCLCPP_INFO(this->get_logger(), "Parameter reduce_speed_flag is set to %s.", reduce_speed_flag ? "true" : "false");
//             }
//         }
//     }

//     rcl_interfaces::msg::SetParametersResult result;
//     result.successful = true;
//     result.reason = "success";

//     return result;
// }

// void ControlSwitchingUnit::nav2_cmd_vel_cb(const geometry_msgs::msg::Twist::SharedPtr msg)
// { 
//     if(reduce_speed_flag)
//     {
//         RCLCPP_INFO(this->get_logger(), "Publishing reduced speed.");
//         auto twist_msg = geometry_msgs::msg::Twist();

//         if (msg->linear.x != 0.0)
//         {
//             if(msg->linear.x > 0.0)
//                 twist_msg.linear.x = MIN_LINEAR_SPEED;
//             else
//                 twist_msg.linear.x = -MIN_LINEAR_SPEED;
//             twist_msg.angular.z = twist_msg.angular.z * MIN_LINEAR_SPEED / msg->linear.x;
//         }
//         else
//         {
//             twist_msg.linear.x = 0.0;
//             twist_msg.angular.z = 0.0;
//         }
//         twist_msg.linear.y = 0.0;
//         twist_msg.linear.z = 0.0;
//         twist_msg.angular.x = 0.0;
//         twist_msg.angular.y = 0.0;

//         res_cmd_vel_pub->publish(twist_msg);
//     }
//     else
//     {
//         RCLCPP_INFO(this->get_logger(), "Publishing speed from Nav2.");
//         res_cmd_vel_pub->publish(*msg);
//     }
// } 

// void ControlSwitchingUnit::bt_cmd_vel_cb(const geometry_msgs::msg::Twist::SharedPtr msg)
// {
//     RCLCPP_INFO(this->get_logger(), "Publishing speed from BT.");
//     res_cmd_vel_pub->publish(*msg);
// }


// int main(int argc, char ** argv)
// {
//     rclcpp::init(argc, argv);
//     while(rclcpp::ok())
//     {
//         rclcpp::spin(std::make_shared<ControlSwitchingUnit>("control_switching_unit"));
//     }

//     return 0;
// }


#include "control_switching_unit.hpp"


ControlSwitchingUnit::ControlSwitchingUnit(const std::string& name) : Node(name)
{
    RCLCPP_INFO(this->get_logger(), "Initialization of CSU is started.");

    nav2_cmd_vel_sub = this->create_subscription<geometry_msgs::msg::Twist>("cmd_vel_nav", 1, std::bind(&ControlSwitchingUnit::nav2_cmd_vel_cb, this, std::placeholders::_1));
    bt_cmd_vel_sub = this->create_subscription<geometry_msgs::msg::Twist>("cmd_vel_bt", 1, std::bind(&ControlSwitchingUnit::bt_cmd_vel_cb, this, std::placeholders::_1));
    
    res_cmd_vel_pub = this->create_publisher<geometry_msgs::msg::Twist>("cmd_vel", 10);

    reduce_speed_service = this->create_service<std_srvs::srv::SetBool>("speed_reduce_service", std::bind(&ControlSwitchingUnit::reduce_speed_service_cb, this, std::placeholders::_1, std::placeholders::_2));
    full_stop_service = this->create_service<std_srvs::srv::SetBool>("full_stop_service", std::bind(&ControlSwitchingUnit::full_stop_service_cb, this, std::placeholders::_1, std::placeholders::_2));
    
    reduce_speed_flag = false;
    full_stop_flag = false;

    RCLCPP_INFO(this->get_logger(), "Initialization of CSU is finished.");
}

void ControlSwitchingUnit::reduce_speed_service_cb(
        const std_srvs::srv::SetBool_Request::SharedPtr request,
        const std_srvs::srv::SetBool_Response::SharedPtr response)
{
    reduce_speed_flag = request->data;

    if (!reduce_speed_flag)
        full_stop_flag = false;

    response->message = "";
    response->success = true;
}

void ControlSwitchingUnit::full_stop_service_cb(
        const std_srvs::srv::SetBool_Request::SharedPtr request,
        const std_srvs::srv::SetBool_Response::SharedPtr response)
{
    full_stop_flag = request->data;

    response->message = "";
    response->success = true;
}

void ControlSwitchingUnit::nav2_cmd_vel_cb(const geometry_msgs::msg::Twist::SharedPtr msg)
{
    if (full_stop_flag)
    {
        RCLCPP_INFO(this->get_logger(), "Publishing zero twist.");
        auto twist_msg = geometry_msgs::msg::Twist();

        twist_msg.linear.x = 0.0;
        twist_msg.linear.y = 0.0;
        twist_msg.linear.z = 0.0;
        twist_msg.angular.x = 0.0;
        twist_msg.angular.y = 0.0;
        twist_msg.angular.z = 0.0;

        res_cmd_vel_pub->publish(twist_msg);
    }
    else if (reduce_speed_flag)
    {
        RCLCPP_INFO(this->get_logger(), "Publishing reduced speed.");
        auto twist_msg = geometry_msgs::msg::Twist();

        if (msg->linear.x != 0.0)
        {
            if(msg->linear.x > 0.0)
                twist_msg.linear.x = MIN_LINEAR_SPEED;
            else
                twist_msg.linear.x = -MIN_LINEAR_SPEED;
            twist_msg.angular.z = twist_msg.angular.z * MIN_LINEAR_SPEED / msg->linear.x;
        }
        else
        {
            twist_msg.linear.x = 0.0;
            twist_msg.angular.z = 0.0;
        }
        twist_msg.linear.y = 0.0;
        twist_msg.linear.z = 0.0;
        twist_msg.angular.x = 0.0;
        twist_msg.angular.y = 0.0;

        res_cmd_vel_pub->publish(twist_msg);
    }
    else
    {
        RCLCPP_INFO(this->get_logger(), "Publishing speed from Nav2.");
        res_cmd_vel_pub->publish(*msg);
    }
} 

void ControlSwitchingUnit::bt_cmd_vel_cb(const geometry_msgs::msg::Twist::SharedPtr msg)
{
    RCLCPP_INFO(this->get_logger(), "Publishing speed from BT.");
    res_cmd_vel_pub->publish(*msg);
}


int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    while(rclcpp::ok())
    {
        rclcpp::spin(std::make_shared<ControlSwitchingUnit>("control_switching_unit"));
    }

    return 0;
}