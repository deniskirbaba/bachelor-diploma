#include <memory>

#include "rclcpp/rclcpp.hpp"

#include "behaviortree_cpp_v3/action_node.h"


class SetImuFailureState : public BT::SyncActionNode
{   
    public:
        SetImuFailureState(const std::string& name) : BT::SyncActionNode(name, {})
        {
            node = rclcpp::Node::make_shared("set_imu_failure_state");
        }

        BT::NodeStatus tick() override
        {
            RCLCPP_ERROR(rclcpp::get_logger("root"), "Robot operation is impossible due to IMU failure.");
            while (rclcpp::ok())
            {}
            return BT::NodeStatus::SUCCESS;
        }
    private:
        std::shared_ptr<rclcpp::Node> node;
};

