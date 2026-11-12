// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_swiss_knife_msgs:srv/EstimateAnthropometricParameters.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__ESTIMATE_ANTHROPOMETRIC_PARAMETERS__STRUCT_H_
#define ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__ESTIMATE_ANTHROPOMETRIC_PARAMETERS__STRUCT_H_

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
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in srv/EstimateAnthropometricParameters in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Request
{
  sensor_msgs__msg__Image image;
} robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Request;

// Struct for a sequence of robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Request.
typedef struct robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Request__Sequence
{
  robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/EstimateAnthropometricParameters in the package robot_swiss_knife_msgs.
typedef struct robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Response
{
  float height_cm;
  float mass_kg;
} robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Response;

// Struct for a sequence of robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Response.
typedef struct robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Response__Sequence
{
  robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__ESTIMATE_ANTHROPOMETRIC_PARAMETERS__STRUCT_H_
