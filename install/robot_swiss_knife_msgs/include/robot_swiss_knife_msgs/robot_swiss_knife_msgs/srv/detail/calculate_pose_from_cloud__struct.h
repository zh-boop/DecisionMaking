// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_swiss_knife_msgs:srv/CalculatePoseFromCloud.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__CALCULATE_POSE_FROM_CLOUD__STRUCT_H_
#define ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__CALCULATE_POSE_FROM_CLOUD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'point_cloud'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"

/// Struct defined in srv/CalculatePoseFromCloud in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Request
{
  sensor_msgs__msg__PointCloud2 point_cloud;
} robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Request;

// Struct for a sequence of robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Request.
typedef struct robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Request__Sequence
{
  robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in srv/CalculatePoseFromCloud in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Response
{
  geometry_msgs__msg__PoseStamped pose;
  bool calculation_successful;
} robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Response;

// Struct for a sequence of robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Response.
typedef struct robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Response__Sequence
{
  robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__CALCULATE_POSE_FROM_CLOUD__STRUCT_H_
