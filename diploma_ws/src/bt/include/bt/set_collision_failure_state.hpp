#include <memory>

#include "rclcpp/rclcpp.hpp"

#include "behaviortree_cpp_v3/action_node.h"


class SetCollisionFailureState : public BT::SyncActionNode
{   
    public:
        SetCollisionFailureState(const std::string& name) : BT::SyncActionNode(name, {})
        {
            node = rclcpp::Node::make_shared("set_collision_failure_state");
        }

        BT::NodeStatus tick() override
        {
            RCLCPP_ERROR(rclcpp::get_logger("root"), "Robot fails to function due to prolonged collision.");
            while (rclcpp::ok())
            {}
            return BT::NodeStatus::SUCCESS;
        }
    private:
        std::shared_ptr<rclcpp::Node> node;
};

