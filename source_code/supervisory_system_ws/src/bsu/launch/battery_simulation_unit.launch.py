import launch
from launch_ros.actions import Node


def generate_launch_description():
    ld = launch.LaunchDescription()

    bsu = Node(
        package="bsu",
        executable="battery_simulation_unit",
        output="screen",
    )

    ld.add_action(bsu)

    return ld