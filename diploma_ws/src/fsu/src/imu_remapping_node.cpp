#include <functional>
#include <memory>

#include "rclcpp/rclcpp.hpp"  // for ROS2
#include "rclcpp/qos.hpp"  // for Quality of Services policies (node communication)
// https://docs.ros.org/en/humble/Concepts/Intermediate/About-Quality-of-Service-Settings.html

#include "sensor_msgs/msg/imu.hpp"


class ImuRemappingNode : public rclcpp::Node
{
  public: 
    ImuRemappingNode() : Node("imu_remapping_node")
    {
        RCLCPP_INFO(this->get_logger(), "IMU remapping node is active. Republishing messages...");

        // slightly edit the QoS profile
        rclcpp::QoS qos_profile = rclcpp::SystemDefaultsQoS();      
        qos_profile = rclcpp::QoS(rclcpp::KeepLast(1)).transient_local().reliable();

        // rclcpp::QoS qos = rclcpp::QoS::transient_local();
        pub = this->create_publisher<sensor_msgs::msg::Imu>("imu", qos_profile);
        sub = this->create_subscription<sensor_msgs::msg::Imu>("orig_imu", 10, std::bind(&ImuRemappingNode::cb, this, std::placeholders::_1));
        
        rclcpp::Parameter sim_time_param("use_sim_time", rclcpp::ParameterValue(true));
        this->set_parameter(sim_time_param);    
    }

    void cb(const sensor_msgs::msg::Imu::SharedPtr msg)
    {
      pub->publish(*msg);
    }

  private:
    rclcpp::Publisher<sensor_msgs::msg::Imu>::SharedPtr pub;
    rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr sub;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);

  rclcpp::spin(std::make_shared<ImuRemappingNode>());
  rclcpp::shutdown();
  return 0;
}