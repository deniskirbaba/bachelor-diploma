import launch

from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    ld = launch.LaunchDescription()

    csu = Node(
        package="csu",
        executable="control_switching_unit",
        output="screen",
    )

    ld.add_action(csu)

    return ld