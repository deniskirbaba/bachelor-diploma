#include "lidar_check.hpp"
#include "lidar_restart.hpp"
#include "set_lidar_failure_state.hpp"

#include "imu_check.hpp"
#include "imu_restart.hpp"
#include "set_imu_failure_state.hpp"

#include "odom_check.hpp"
#include "odom_restart.hpp"
#include "set_odom_failure_state.hpp"

#include "battery_check.hpp"

#include "global_planner_check.hpp"
#include "global_planner_restart.hpp"
#include "set_path_failure_state.hpp"

#include "path_possibility_check.hpp"

#include "collision_check.hpp"
#include "set_collision_failure_state.hpp"

#include "orientation_check.hpp"
#include "slam_check.hpp"

#include "reset_map.hpp"
#include "update_map.hpp"
#include "save_map.hpp"
#include "load_map.hpp"

#include "publish_last_goal.hpp"

#include "speed_reduce.hpp"
#include "speed_restore.hpp"
#include "full_stop.hpp"

#include "cancel_task.hpp"


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
    factory.registerNodeType<SetLidarFailureState>("SetLidarFailureState");
    
    factory.registerNodeType<ImuCheck>("ImuCheck");
    factory.registerNodeType<ImuRestart>("ImuRestart");
    factory.registerNodeType<SetImuFailureState>("SetImuFailureState");
    
    factory.registerNodeType<OdomCheck>("OdomCheck");
    factory.registerNodeType<OdomRestart>("OdomRestart");
    factory.registerNodeType<SetOdomFailureState>("SetOdomFailureState");

    factory.registerNodeType<BatteryCheck>("BatteryCheck");
    
    factory.registerNodeType<GlobalPlannerCheck>("GlobalPlannerCheck");
    factory.registerNodeType<GlobalPlannerRestart>("GlobalPlannerRestart");
    factory.registerNodeType<SetPathFailureState>("SetPathFailureState");

    factory.registerNodeType<PathPossibilityCheck>("PathPossibilityCheck");

    factory.registerNodeType<CollisionCheck>("CollisionCheck");
    factory.registerNodeType<SetCollisionFailureState>("SetCollisionFailureState");

    factory.registerNodeType<OrientationCheck>("OrientationCheck");
    factory.registerNodeType<SlamCheck>("SlamCheck");

    factory.registerNodeType<ResetMap>("ResetMap");
    factory.registerNodeType<UpdateMap>("UpdateMap");
    factory.registerNodeType<SaveMap>("SaveMap");
    factory.registerNodeType<LoadMap>("LoadMap");

    factory.registerNodeType<PublishLastGoal>("PublishLastGoal");

    factory.registerNodeType<SpeedReduce>("SpeedReduce");
    factory.registerNodeType<SpeedRestore>("SpeedRestore");
    factory.registerNodeType<FullStop>("FullStop");

    factory.registerNodeType<CancelTask>("CancelTask");
    // -------------------------------------------------------------------------------------------

    RCLCPP_INFO(rclcpp::get_logger("root"), "Creating BT...");
    auto tree = factory.createTreeFromFile("/home/denis/diploma_src/dms_ws/src/bt/resources/collision_bt.xml");
    RCLCPP_INFO(rclcpp::get_logger("root"), "BT created.");

    RCLCPP_INFO(rclcpp::get_logger("root"), "Creating BT ZeroMQ publisher."); 
    BT::PublisherZMQ publisher_zqm(tree, 25, 1668, 1669);

    BT::NodeStatus status;

    // Create logger so we can track the change of node's status
    BT::FileLogger logger_file(tree, "bt_collision_trace.fbl");

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