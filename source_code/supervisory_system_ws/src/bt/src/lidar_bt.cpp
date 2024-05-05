#include "lidar_check.hpp"
#include "lidar_restart.hpp"

#include "speed_reduce.hpp"
#include "speed_restore.hpp"
#include "full_stop.hpp"

#include "cancel_task.hpp"
#include "set_lidar_failure_state.hpp"

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
    factory.registerNodeType<LidarCheck>("LidarCheck");
    factory.registerNodeType<LidarRestart>("LidarRestart");
    
    factory.registerNodeType<SpeedReduce>("SpeedReduce");
    factory.registerNodeType<SpeedRestore>("SpeedRestore");
    factory.registerNodeType<FullStop>("FullStop");

    factory.registerNodeType<CancelTask>("CancelTask");
    factory.registerNodeType<SetLidarFailureState>("SetLidarFailureState");
    // -------------------------------------------------------------------------------------------

    RCLCPP_INFO(rclcpp::get_logger("root"), "Creating BT...");
    auto tree = factory.createTreeFromFile("/home/denis/diploma_ws/src/bt/resources/lidar_bt.xml");
    RCLCPP_INFO(rclcpp::get_logger("root"), "BT created.");

    RCLCPP_INFO(rclcpp::get_logger("root"), "Creating BT ZeroMQ publisher."); 
    BT::PublisherZMQ publisher_zqm(tree, 25, 1668, 1669);

    BT::NodeStatus status;

    // Create logger so we can track the change of node's status
    BT::FileLogger logger_file(tree, "bt_lidar_trace.fbl");

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