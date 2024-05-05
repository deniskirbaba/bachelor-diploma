#include "behaviortree_cpp_v3/condition_node.h"

#include "rclcpp/rclcpp.hpp"

#include "std_srvs/srv/set_bool.hpp"

/**
 * @brief Returns Success when all 4 wheels are still on the ground 
 * Determined by the robots imu orientation,
 * if the terrain contains slopes this method does not work 
 * 
 */
class OrientationCheck : public BT::ConditionNode
{
    public:
        OrientationCheck(const std::string& name) : BT::ConditionNode(name, {})
        {   
            node_= rclcpp::Node::make_shared("orientation_check_bt_node");
            all_wheels_on_the_ground = true;

            service_client_ = node_->create_client<std_srvs::srv::SetBool>("check_orientation");
            request_ = std::make_shared<std_srvs::srv::SetBool::Request>();
            request_->data = true;
        }

        BT::NodeStatus tick() override
        {
            RCLCPP_INFO(node_->get_logger(), "Ticking 'check_orientation' node...");
            RCLCPP_INFO(node_->get_logger(), "Calling 'check_orientation' service...");

            while (!service_client_->wait_for_service(std::chrono::milliseconds(1000)))
            {
                if (!rclcpp::ok())
                {
                    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupt while trying to call 'check_orientation' service.");
                    return BT::NodeStatus::FAILURE;
                }
                RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Service 'check_orientation' not available, waiting...");
            }
            
            auto result = service_client_->async_send_request(request_);

            if (rclcpp::spin_until_future_complete(node_, result) == rclcpp::FutureReturnCode::SUCCESS)
                all_wheels_on_the_ground = result.get()->success;
            else
                return BT::NodeStatus::FAILURE;

            RCLCPP_INFO(node_->get_logger(), (all_wheels_on_the_ground) ? "Robot orientation intact." : "Robot orientation impaired.");

            if (all_wheels_on_the_ground)
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

        bool all_wheels_on_the_ground;
};