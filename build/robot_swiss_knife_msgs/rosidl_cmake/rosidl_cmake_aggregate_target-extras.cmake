# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target robot_swiss_knife_msgs::robot_swiss_knife_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${robot_swiss_knife_msgs_TARGETS}.
if(robot_swiss_knife_msgs_TARGETS AND NOT TARGET robot_swiss_knife_msgs::robot_swiss_knife_msgs)
  add_library(robot_swiss_knife_msgs::robot_swiss_knife_msgs INTERFACE IMPORTED)
  set_target_properties(robot_swiss_knife_msgs::robot_swiss_knife_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${robot_swiss_knife_msgs_TARGETS}")
endif()
