# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target btcpp_ros2_interfaces::btcpp_ros2_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${btcpp_ros2_interfaces_TARGETS}.
if(btcpp_ros2_interfaces_TARGETS AND NOT TARGET btcpp_ros2_interfaces::btcpp_ros2_interfaces)
  add_library(btcpp_ros2_interfaces::btcpp_ros2_interfaces INTERFACE IMPORTED)
  set_target_properties(btcpp_ros2_interfaces::btcpp_ros2_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${btcpp_ros2_interfaces_TARGETS}")
endif()
