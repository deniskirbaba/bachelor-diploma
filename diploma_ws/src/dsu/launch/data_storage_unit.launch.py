import launch
from launch_ros.actions import Node

def generate_launch_description():
    ld = launch.LaunchDescription()
    
    dsu = Node(
        package="dsu",
        executable="data_storage_unit",
        output="screen")
    
    ld.add_action(dsu)
    
    return ld