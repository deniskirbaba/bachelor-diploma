from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='bt',
            executable='imu_bt',
            name='imu_bt',
        )
    ])