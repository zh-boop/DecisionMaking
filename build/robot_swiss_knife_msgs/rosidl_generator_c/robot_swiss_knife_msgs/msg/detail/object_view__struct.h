// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_swiss_knife_msgs:msg/ObjectView.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__OBJECT_VIEW__STRUCT_H_
#define ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__OBJECT_VIEW__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'image'
// Member 'mask'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'point_cloud'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"

/// Struct defined in msg/ObjectView in the package robot_swiss_knife_msgs.
/**
  * Message definition adapted from https://github.com/b-it-bots/mas_perception_msgs/blob/noetic/msg/ObjectView.msg
 */
typedef struct robot_swiss_knife_msgs__msg__ObjectView
{
  sensor_msgs__msg__Image image;
  sensor_msgs__msg__Image mask;
  sensor_msgs__msg__PointCloud2 point_cloud;
} robot_swiss_knife_msgs__msg__ObjectView;

// Struct for a sequence of robot_swiss_knife_msgs__msg__ObjectView.
typedef struct robot_swiss_knife_msgs__msg__ObjectView__Sequence
{
  robot_swiss_knife_msgs__msg__ObjectView * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__msg__ObjectView__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__OBJECT_VIEW__STRUCT_H_
