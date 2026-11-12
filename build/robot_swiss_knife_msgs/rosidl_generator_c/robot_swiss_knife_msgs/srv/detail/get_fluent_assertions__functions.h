// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robot_swiss_knife_msgs:srv/GetFluentAssertions.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__GET_FLUENT_ASSERTIONS__FUNCTIONS_H_
#define ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__GET_FLUENT_ASSERTIONS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robot_swiss_knife_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "robot_swiss_knife_msgs/srv/detail/get_fluent_assertions__struct.h"

/// Initialize srv/GetFluentAssertions message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robot_swiss_knife_msgs__srv__GetFluentAssertions_Request
 * )) before or use
 * robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
bool
robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__init(robot_swiss_knife_msgs__srv__GetFluentAssertions_Request * msg);

/// Finalize srv/GetFluentAssertions message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
void
robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__fini(robot_swiss_knife_msgs__srv__GetFluentAssertions_Request * msg);

/// Create srv/GetFluentAssertions message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
robot_swiss_knife_msgs__srv__GetFluentAssertions_Request *
robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__create();

/// Destroy srv/GetFluentAssertions message.
/**
 * It calls
 * robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
void
robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__destroy(robot_swiss_knife_msgs__srv__GetFluentAssertions_Request * msg);

/// Check for srv/GetFluentAssertions message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
bool
robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__are_equal(const robot_swiss_knife_msgs__srv__GetFluentAssertions_Request * lhs, const robot_swiss_knife_msgs__srv__GetFluentAssertions_Request * rhs);

/// Copy a srv/GetFluentAssertions message.
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
robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__copy(
  const robot_swiss_knife_msgs__srv__GetFluentAssertions_Request * input,
  robot_swiss_knife_msgs__srv__GetFluentAssertions_Request * output);

/// Initialize array of srv/GetFluentAssertions messages.
/**
 * It allocates the memory for the number of elements and calls
 * robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
bool
robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__Sequence__init(robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetFluentAssertions messages.
/**
 * It calls
 * robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
void
robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__Sequence__fini(robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__Sequence * array);

/// Create array of srv/GetFluentAssertions messages.
/**
 * It allocates the memory for the array and calls
 * robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__Sequence *
robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetFluentAssertions messages.
/**
 * It calls
 * robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
void
robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__Sequence__destroy(robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__Sequence * array);

/// Check for srv/GetFluentAssertions message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
bool
robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__Sequence__are_equal(const robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__Sequence * lhs, const robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__Sequence * rhs);

/// Copy an array of srv/GetFluentAssertions messages.
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
robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__Sequence__copy(
  const robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__Sequence * input,
  robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__Sequence * output);

/// Initialize srv/GetFluentAssertions message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robot_swiss_knife_msgs__srv__GetFluentAssertions_Response
 * )) before or use
 * robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
bool
robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__init(robot_swiss_knife_msgs__srv__GetFluentAssertions_Response * msg);

/// Finalize srv/GetFluentAssertions message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
void
robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__fini(robot_swiss_knife_msgs__srv__GetFluentAssertions_Response * msg);

/// Create srv/GetFluentAssertions message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
robot_swiss_knife_msgs__srv__GetFluentAssertions_Response *
robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__create();

/// Destroy srv/GetFluentAssertions message.
/**
 * It calls
 * robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
void
robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__destroy(robot_swiss_knife_msgs__srv__GetFluentAssertions_Response * msg);

/// Check for srv/GetFluentAssertions message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
bool
robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__are_equal(const robot_swiss_knife_msgs__srv__GetFluentAssertions_Response * lhs, const robot_swiss_knife_msgs__srv__GetFluentAssertions_Response * rhs);

/// Copy a srv/GetFluentAssertions message.
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
robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__copy(
  const robot_swiss_knife_msgs__srv__GetFluentAssertions_Response * input,
  robot_swiss_knife_msgs__srv__GetFluentAssertions_Response * output);

/// Initialize array of srv/GetFluentAssertions messages.
/**
 * It allocates the memory for the number of elements and calls
 * robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
bool
robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__Sequence__init(robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetFluentAssertions messages.
/**
 * It calls
 * robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
void
robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__Sequence__fini(robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__Sequence * array);

/// Create array of srv/GetFluentAssertions messages.
/**
 * It allocates the memory for the array and calls
 * robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__Sequence *
robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetFluentAssertions messages.
/**
 * It calls
 * robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
void
robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__Sequence__destroy(robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__Sequence * array);

/// Check for srv/GetFluentAssertions message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_swiss_knife_msgs
bool
robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__Sequence__are_equal(const robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__Sequence * lhs, const robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__Sequence * rhs);

/// Copy an array of srv/GetFluentAssertions messages.
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
robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__Sequence__copy(
  const robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__Sequence * input,
  robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__GET_FLUENT_ASSERTIONS__FUNCTIONS_H_
