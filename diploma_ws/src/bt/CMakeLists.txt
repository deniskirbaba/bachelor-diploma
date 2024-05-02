cmake_minimum_required(VERSION 3.8)
project(bt)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)

find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)

find_package(std_srvs REQUIRED)

find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(nav2_msgs REQUIRED)
find_package(lifecycle_msgs REQUIRED)
find_package(visualization_msgs REQUIRED)

find_package(dms_interfaces REQUIRED)
find_package(rcl_interfaces REQUIRED)

find_package(behaviortree_cpp_v3 REQUIRED)
find_package(tf2 REQUIRED)


# add executables
add_executable(lidar_bt src/lidar_bt.cpp)
ament_target_dependencies(lidar_bt
  rclcpp 
  rclcpp_action
  std_srvs
  nav2_msgs
  behaviortree_cpp_v3)
add_executable(imu_bt src/imu_bt.cpp)
  ament_target_dependencies(imu_bt
    rclcpp 
    rclcpp_action
    std_srvs
    nav2_msgs
    behaviortree_cpp_v3)
add_executable(odom_bt src/odom_bt.cpp)
  ament_target_dependencies(odom_bt
    rclcpp 
    rclcpp_action
    std_srvs
    nav2_msgs
    behaviortree_cpp_v3)
add_executable(sensors_bt src/sensors_bt.cpp)
  ament_target_dependencies(sensors_bt
    rclcpp 
    rclcpp_action
    std_srvs
    nav2_msgs
    behaviortree_cpp_v3)
add_executable(battery_bt src/battery_bt.cpp)
  ament_target_dependencies(battery_bt
    rclcpp 
    rclcpp_action
    std_srvs
    nav2_msgs
    behaviortree_cpp_v3
    dms_interfaces
    rcl_interfaces)
add_executable(path_bt src/path_bt.cpp)
  ament_target_dependencies(path_bt
    rclcpp 
    rclcpp_action
    std_srvs
    nav2_msgs
    behaviortree_cpp_v3
    dms_interfaces
    rcl_interfaces
    lifecycle_msgs)
add_executable(collision_bt src/collision_bt.cpp)
  ament_target_dependencies(collision_bt
    rclcpp 
    rclcpp_action
    std_srvs
    geometry_msgs
    nav_msgs
    nav2_msgs
    visualization_msgs
    behaviortree_cpp_v3
    dms_interfaces
    rcl_interfaces
    lifecycle_msgs
    tf2)
  
add_executable(main_bt src/main_bt.cpp)
  ament_target_dependencies(main_bt
  rclcpp 
  rclcpp_action
  std_srvs
  geometry_msgs
  nav_msgs
  nav2_msgs
  visualization_msgs
  behaviortree_cpp_v3
  dms_interfaces
  rcl_interfaces
  lifecycle_msgs
  tf2)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

include_directories(
  include/${PROJECT_NAME}
)

install(
  TARGETS lidar_bt imu_bt odom_bt sensors_bt battery_bt path_bt collision_bt main_bt
  DESTINATION lib/${PROJECT_NAME}
)

install(
  DIRECTORY resources
  DESTINATION share/${PROJECT_NAME}
)

install(
  DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
