import launch
from launch_ros.actions import Node

def generate_launch_description():
    ld = launch.LaunchDescription()
    
    gppu = Node(
        package="gppu",
        executable="goal_pose_publisher_unit",
        output="screen")
    
    ld.add_action(gppu)
    
    return ld