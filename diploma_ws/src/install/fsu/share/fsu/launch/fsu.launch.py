import launch

from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    ld = launch.LaunchDescription()

    lidar_rn = Node(
        package="fsu",
        executable="lidar_remapping_node",
        output="screen",
    )

    ld.add_action(lidar_rn)

    return ld