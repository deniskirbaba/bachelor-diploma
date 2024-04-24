import launch
from launch_ros.actions import Node

def generate_launch_description():
    ld = launch.LaunchDescription()
    
    nspu = Node(
        package="nspu",
        executable="navigation_services_provider_unit",
        output="screen")
    
    ld.add_action(nspu)
    
    return ld