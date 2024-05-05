import launch
from launch_ros.actions import Node

def generate_launch_description():
    ld = launch.LaunchDescription()
    
    ssu = Node(
        package="ssu",
        executable="sensor_supervisitory_unit",
        output="screen")
    
    ld.add_action(ssu)
    
    return ld