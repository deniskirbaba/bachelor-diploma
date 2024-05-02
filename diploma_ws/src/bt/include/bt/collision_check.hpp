#include <string>
#include <memory>
#include <future>

#include "rclcpp/rclcpp.hpp"
#include "std_srvs/srv/set_bool.hpp"
#include "behaviortree_cpp_v3/condition_node.h"


/**
 * @brief Returns Success if the robot is not in collision and free to move
 * 
 */
class CollisionCheck : public BT::ConditionNode
{
    public:
        CollisionCheck(const std::string& name) : BT::ConditionNode(name, {})
        {   
            in_collision = false;
            node_= rclcpp::Node::make_shared("collision_check_bt_node");

            service_client_ = node_->create_client<std_srvs::srv::SetBool>("check_collision");
            request_ = std::make_shared<std_srvs::srv::SetBool::Request>();
            request_->data = true;
        }

        BT::NodeStatus tick() override
        {
            RCLCPP_INFO(node_->get_logger(), "Ticking 'collision_check' node...");
            RCLCPP_INFO(node_->get_logger(), "Calling 'collision_check' service...");

            while (!service_client_->wait_for_service(std::chrono::milliseconds(1000)))
            {
                if (!rclcpp::ok())
                {
                    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupt while trying to call 'collision_check' service.");
                    return BT::NodeStatus::FAILURE;
                }
                RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Service 'collision_check' not available, waiting...");
            }
            
            auto result = service_client_->async_send_request(request_);

            if (rclcpp::spin_until_future_complete(node_, result) == rclcpp::FutureReturnCode::SUCCESS)
                in_collision = result.get()->success;
            else
                return BT::NodeStatus::FAILURE;

            RCLCPP_INFO(node_->get_logger(), (in_collision) ? "Robot is in collision." : "Robot is not in collision.");

            if (!in_collision)
            {
                return BT::NodeStatus::SUCCESS;
            }
            else 
            {
                return BT::NodeStatus::FAILURE;
            }
        }

    private:
        rclcpp::Node::SharedPtr node_;
        rclcpp::Client<std_srvs::srv::SetBool>::SharedPtr service_client_;
        std::shared_ptr<std_srvs::srv::SetBool::Request> request_;
        bool in_collision;
};