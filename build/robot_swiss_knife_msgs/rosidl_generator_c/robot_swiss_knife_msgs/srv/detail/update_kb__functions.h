// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robot_swiss_knife_msgs:srv/UpdateKB.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__UPDATE_KB__FUNCTIONS_H_
#define ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__UPDATE_KB__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robot_swiss_knife_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "robot_swiss_knife_msgs/srv/detail/update_kb__struct.h"

/// Initialize srv/UpdateKB message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robot_swiss_knife_msgs__srv__UpdateKB_Request
 * )) before or use
 * robot_swiss_knife_msgs__srv__UpdateKB_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
bool
robot_swiss_knife_msgs__srv__UpdateKB_Request__init(robot_swiss_knife_msgs__srv__UpdateKB_Request * msg);

/// Finalize srv/UpdateKB message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
void
robot_swiss_knife_msgs__srv__UpdateKB_Request__fini(robot_swiss_knife_msgs__srv__UpdateKB_Request * msg);

/// Create srv/UpdateKB message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robot_swiss_knife_msgs__srv__UpdateKB_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
robot_swiss_knife_msgs__srv__UpdateKB_Request *
robot_swiss_knife_msgs__srv__UpdateKB_Request__create();

/// Destroy srv/UpdateKB message.
/**
 * It calls
 * robot_swiss_knife_msgs__srv__UpdateKB_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
void
robot_swiss_knife_msgs__srv__UpdateKB_Request__destroy(robot_swiss_knife_msgs__srv__UpdateKB_Request * msg);

/// Check for srv/UpdateKB message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
bool
robot_swiss_knife_msgs__srv__UpdateKB_Request__are_equal(const robot_swiss_knife_msgs__srv__UpdateKB_Request * lhs, const robot_swiss_knife_msgs__srv__UpdateKB_Request * rhs);

/// Copy a srv/UpdateKB message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
bool
robot_swiss_knife_msgs__srv__UpdateKB_Request__copy(
  const robot_swiss_knife_msgs__srv__UpdateKB_Request * input,
  robot_swiss_knife_msgs__srv__UpdateKB_Request * output);

/// Initialize array of srv/UpdateKB messages.
/**
 * It allocates the memory for the number of elements and calls
 * robot_swiss_knife_msgs__srv__UpdateKB_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
bool
robot_swiss_knife_msgs__srv__UpdateKB_Request__Sequence__init(robot_swiss_knife_msgs__srv__UpdateKB_Request__Sequence * array, size_t size);

/// Finalize array of srv/UpdateKB messages.
/**
 * It calls
 * robot_swiss_knife_msgs__srv__UpdateKB_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
void
robot_swiss_knife_msgs__srv__UpdateKB_Request__Sequence__fini(robot_swiss_knife_msgs__srv__UpdateKB_Request__Sequence * array);

/// Create array of srv/UpdateKB messages.
/**
 * It allocates the memory for the array and calls
 * robot_swiss_knife_msgs__srv__UpdateKB_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
robot_swiss_knife_msgs__srv__UpdateKB_Request__Sequence *
robot_swiss_knife_msgs__srv__UpdateKB_Request__Sequence__create(size_t size);

/// Destroy array of srv/UpdateKB messages.
/**
 * It calls
 * robot_swiss_knife_msgs__srv__UpdateKB_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
void
robot_swiss_knife_msgs__srv__UpdateKB_Request__Sequence__destroy(robot_swiss_knife_msgs__srv__UpdateKB_Request__Sequence * array);

/// Check for srv/UpdateKB message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
bool
robot_swiss_knife_msgs__srv__UpdateKB_Request__Sequence__are_equal(const robot_swiss_knife_msgs__srv__UpdateKB_Request__Sequence * lhs, const robot_swiss_knife_msgs__srv__UpdateKB_Request__Sequence * rhs);

/// Copy an array of srv/UpdateKB messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
bool
robot_swiss_knife_msgs__srv__UpdateKB_Request__Sequence__copy(
  const robot_swiss_knife_msgs__srv__UpdateKB_Request__Sequence * input,
  robot_swiss_knife_msgs__srv__UpdateKB_Request__Sequence * output);

/// Initialize srv/UpdateKB message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robot_swiss_knife_msgs__srv__UpdateKB_Response
 * )) before or use
 * robot_swiss_knife_msgs__srv__UpdateKB_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
bool
robot_swiss_knife_msgs__srv__UpdateKB_Response__init(robot_swiss_knife_msgs__srv__UpdateKB_Response * msg);

/// Finalize srv/UpdateKB message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
void
robot_swiss_knife_msgs__srv__UpdateKB_Response__fini(robot_swiss_knife_msgs__srv__UpdateKB_Response * msg);

/// Create srv/UpdateKB message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robot_swiss_knife_msgs__srv__UpdateKB_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
robot_swiss_knife_msgs__srv__UpdateKB_Response *
robot_swiss_knife_msgs__srv__UpdateKB_Response__create();

/// Destroy srv/UpdateKB message.
/**
 * It calls
 * robot_swiss_knife_msgs__srv__UpdateKB_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
void
robot_swiss_knife_msgs__srv__UpdateKB_Response__destroy(robot_swiss_knife_msgs__srv__UpdateKB_Response * msg);

/// Check for srv/UpdateKB message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
bool
robot_swiss_knife_msgs__srv__UpdateKB_Response__are_equal(const robot_swiss_knife_msgs__srv__UpdateKB_Response * lhs, const robot_swiss_knife_msgs__srv__UpdateKB_Response * rhs);

/// Copy a srv/UpdateKB message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
bool
robot_swiss_knife_msgs__srv__UpdateKB_Response__copy(
  const robot_swiss_knife_msgs__srv__UpdateKB_Response * input,
  robot_swiss_knife_msgs__srv__UpdateKB_Response * output);

/// Initialize array of srv/UpdateKB messages.
/**
 * It allocates the memory for the number of elements and calls
 * robot_swiss_knife_msgs__srv__UpdateKB_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
bool
robot_swiss_knife_msgs__srv__UpdateKB_Response__Sequence__init(robot_swiss_knife_msgs__srv__UpdateKB_Response__Sequence * array, size_t size);

/// Finalize array of srv/UpdateKB messages.
/**
 * It calls
 * robot_swiss_knife_msgs__srv__UpdateKB_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
void
robot_swiss_knife_msgs__srv__UpdateKB_Response__Sequence__fini(robot_swiss_knife_msgs__srv__UpdateKB_Response__Sequence * array);

/// Create array of srv/UpdateKB messages.
/**
 * It allocates the memory for the array and calls
 * robot_swiss_knife_msgs__srv__UpdateKB_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
robot_swiss_knife_msgs__srv__UpdateKB_Response__Sequence *
robot_swiss_knife_msgs__srv__UpdateKB_Response__Sequence__create(size_t size);

/// Destroy array of srv/UpdateKB messages.
/**
 * It calls
 * robot_swiss_knife_msgs__srv__UpdateKB_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
void
robot_swiss_knife_msgs__srv__UpdateKB_Response__Sequence__destroy(robot_swiss_knife_msgs__srv__UpdateKB_Response__Sequence * array);

/// Check for srv/UpdateKB message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
bool
robot_swiss_knife_msgs__srv__UpdateKB_Response__Sequence__are_equal(const robot_swiss_knife_msgs__srv__UpdateKB_Response__Sequence * lhs, const robot_swiss_knife_msgs__srv__UpdateKB_Response__Sequence * rhs);

/// Copy an array of srv/UpdateKB messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
bool
robot_swiss_knife_msgs__srv__UpdateKB_Response__Sequence__copy(
  const robot_swiss_knife_msgs__srv__UpdateKB_Response__Sequence * input,
  robot_swiss_knife_msgs__srv__UpdateKB_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__UPDATE_KB__FUNCTIONS_H_
