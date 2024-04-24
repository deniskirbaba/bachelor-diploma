from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='ssu',
            executable='sensor_supervisitory_unit',
            name='sensor_supervisitory_unit',
        )
    ])