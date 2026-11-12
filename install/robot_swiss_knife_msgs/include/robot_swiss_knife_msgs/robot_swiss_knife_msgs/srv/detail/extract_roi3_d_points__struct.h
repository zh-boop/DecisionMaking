// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_swiss_knife_msgs:srv/ExtractROI3DPoints.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__EXTRACT_ROI3_D_POINTS__STRUCT_H_
#define ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__EXTRACT_ROI3_D_POINTS__STRUCT_H_

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
// Member 'objects'
#include "robot_swiss_knife_msgs/msg/detail/object__struct.h"

/// Struct defined in srv/ExtractROI3DPoints in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Request
{
  sensor_msgs__msg__PointCloud2 point_cloud;
  robot_swiss_knife_msgs__msg__Object__Sequence objects;
} robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Request;

// Struct for a sequence of robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Request.
typedef struct robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Request__Sequence
{
  robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'objects'
// already included above
// #include "robot_swiss_knife_msgs/msg/detail/object__struct.h"

/// Struct defined in srv/ExtractROI3DPoints in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Response
{
  robot_swiss_knife_msgs__msg__Object__Sequence objects;
} robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Response;

// Struct for a sequence of robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Response.
typedef struct robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Response__Sequence
{
  robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__EXTRACT_ROI3_D_POINTS__STRUCT_H_
