#include <memory>
#include <functional>

#include "rclcpp/rclcpp.hpp"  // for ROS2
#include "rclcpp/qos.hpp"  // for Quality of Services policies (node communication)
// https://docs.ros.org/en/humble/Concepts/Intermediate/About-Quality-of-Service-Settings.html

#include "nav_msgs/msg/odometry.hpp"


class OdomRemappingNode : public rclcpp::Node
{
    public: 
        OdomRemappingNode() : Node("odom_remapping_node")
        {
            RCLCPP_INFO(this->get_logger(), "Odom remapping node is active. Republishing messages...");

            // slightly edit the QoS profile
            rclcpp::QoS qos_profile = rclcpp::SystemDefaultsQoS();      
            qos_profile = rclcpp::QoS(rclcpp::KeepLast(1)).transient_local().reliable();

            pub = this->create_publisher<nav_msgs::msg::Odometry>("odom", qos_profile);
            sub = this->create_subscription<nav_msgs::msg::Odometry>("orig_odom", 10, std::bind(&OdomRemappingNode::cb, this, std::placeholders::_1));

            rclcpp::Parameter sim_time_param("use_sim_time", rclcpp::ParameterValue(true));
            this->set_parameter(sim_time_param);    
        }

        void cb(const nav_msgs::msg::Odometry::SharedPtr msg)
        {
            pub->publish(*msg);
        }

    private:
        rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr pub;
        rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr sub;
};

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);

    rclcpp::spin(std::make_shared<OdomRemappingNode>());
    rclcpp::shutdown();
    
    return 0; 
}