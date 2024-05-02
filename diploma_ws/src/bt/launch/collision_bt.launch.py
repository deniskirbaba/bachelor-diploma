from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='bt',
            executable='collision_bt',
            name='collision_bt',
        )
    ])