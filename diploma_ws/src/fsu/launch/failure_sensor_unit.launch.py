import launch
from launch_ros.actions import Node


def generate_launch_description():
    ld = launch.LaunchDescription()

    lidar_rn = Node(
        package="fsu",
        executable="lidar_remapping_node",
        output="screen",
    )
    imu_rn = Node(
        package="fsu",
        executable="imu_remapping_node",
        output="screen"
    )
    odom_rn = Node(
        package="fsu",
        executable="odom_remapping_node",
        output="screen"
    )

    ld.add_action(lidar_rn)
    ld.add_action(imu_rn)
    ld.add_action(odom_rn)

    return ld