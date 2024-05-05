#include "global_planner_check.hpp"
#include "global_planner_restart.hpp"

#include "path_possibility_check.hpp"

#include "full_stop.hpp"

#include "cancel_task.hpp"
#include "set_path_failure_state.hpp"

#include "behaviortree_cpp_v3/behavior_tree.h"
#include "behaviortree_cpp_v3/bt_factory.h"
#include "behaviortree_cpp_v3/loggers/bt_zmq_publisher.h"
#include "behaviortree_cpp_v3/loggers/bt_file_logger.h"


int main(int argc, const char* argv[])
{       
    rclcpp::init(argc, argv);
    
    BT::BehaviorTreeFactory factory;

    RCLCPP_INFO(rclcpp::get_logger("root"), "Registering BT nodes...");
    // -------------------------------------------------------------------------------------------
    factory.registerNodeType<GlobalPlannerCheck>("GlobalPlannerCheck");
    factory.registerNodeType<GlobalPlannerRestart>("GlobalPlannerRestart");

    factory.registerNodeType<PathPossibilityCheck>("PathPossibilityCheck");
    
    factory.registerNodeType<FullStop>("FullStop");

    factory.registerNodeType<CancelTask>("CancelTask");
    factory.registerNodeType<SetPathFailureState>("SetPathFailureState");
    // -------------------------------------------------------------------------------------------

    RCLCPP_INFO(rclcpp::get_logger("root"), "Creating BT...");
    auto tree = factory.createTreeFromFile("/home/denis/diploma_ws/src/bt/resources/path_bt.xml");
    RCLCPP_INFO(rclcpp::get_logger("root"), "BT created.");

    RCLCPP_INFO(rclcpp::get_logger("root"), "Creating BT ZeroMQ publisher."); 
    BT::PublisherZMQ publisher_zqm(tree, 25, 1668, 1669);

    BT::NodeStatus status;

    // Create logger so we can track the change of node's status
    BT::FileLogger logger_file(tree, "bt_path_trace.fbl");

    std::chrono::milliseconds sleep_time = std::chrono::milliseconds(2000);

    while(true)
    { 
        RCLCPP_INFO(rclcpp::get_logger("root"), "Ticking root.");  

        status = tree.tickRoot();

        RCLCPP_INFO(rclcpp::get_logger("root"), "BT Status: %d", status);  

        tree.sleep(sleep_time);
    }

    return 0;
}