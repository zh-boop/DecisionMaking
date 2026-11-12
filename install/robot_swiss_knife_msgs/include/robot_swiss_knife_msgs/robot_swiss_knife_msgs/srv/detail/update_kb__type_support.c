// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robot_swiss_knife_msgs:srv/UpdateKB.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robot_swiss_knife_msgs/srv/detail/update_kb__rosidl_typesupport_introspection_c.h"
#include "robot_swiss_knife_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robot_swiss_knife_msgs/srv/detail/update_kb__functions.h"
#include "robot_swiss_knife_msgs/srv/detail/update_kb__struct.h"


// Include directives for member types
// Member `fluents`
#include "robot_swiss_knife_msgs/msg/fluent.h"
// Member `fluents`
#include "robot_swiss_knife_msgs/msg/detail/fluent__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_swiss_knife_msgs__srv__UpdateKB_Request__rosidl_typesupport_introspection_c__UpdateKB_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_swiss_knife_msgs__srv__UpdateKB_Request__init(message_memory);
}

void robot_swiss_knife_msgs__srv__UpdateKB_Request__rosidl_typesupport_introspection_c__UpdateKB_Request_fini_function(void * message_memory)
{
  robot_swiss_knife_msgs__srv__UpdateKB_Request__fini(message_memory);
}

size_t robot_swiss_knife_msgs__srv__UpdateKB_Request__rosidl_typesupport_introspection_c__size_function__UpdateKB_Request__fluents(
  const void * untyped_member)
{
  const robot_swiss_knife_msgs__msg__Fluent__Sequence * member =
    (const robot_swiss_knife_msgs__msg__Fluent__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_swiss_knife_msgs__srv__UpdateKB_Request__rosidl_typesupport_introspection_c__get_const_function__UpdateKB_Request__fluents(
  const void * untyped_member, size_t index)
{
  const robot_swiss_knife_msgs__msg__Fluent__Sequence * member =
    (const robot_swiss_knife_msgs__msg__Fluent__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_swiss_knife_msgs__srv__UpdateKB_Request__rosidl_typesupport_introspection_c__get_function__UpdateKB_Request__fluents(
  void * untyped_member, size_t index)
{
  robot_swiss_knife_msgs__msg__Fluent__Sequence * member =
    (robot_swiss_knife_msgs__msg__Fluent__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_swiss_knife_msgs__srv__UpdateKB_Request__rosidl_typesupport_introspection_c__fetch_function__UpdateKB_Request__fluents(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const robot_swiss_knife_msgs__msg__Fluent * item =
    ((const robot_swiss_knife_msgs__msg__Fluent *)
    robot_swiss_knife_msgs__srv__UpdateKB_Request__rosidl_typesupport_introspection_c__get_const_function__UpdateKB_Request__fluents(untyped_member, index));
  robot_swiss_knife_msgs__msg__Fluent * value =
    (robot_swiss_knife_msgs__msg__Fluent *)(untyped_value);
  *value = *item;
}

void robot_swiss_knife_msgs__srv__UpdateKB_Request__rosidl_typesupport_introspection_c__assign_function__UpdateKB_Request__fluents(
  void * untyped_member, size_t index, const void * untyped_value)
{
  robot_swiss_knife_msgs__msg__Fluent * item =
    ((robot_swiss_knife_msgs__msg__Fluent *)
    robot_swiss_knife_msgs__srv__UpdateKB_Request__rosidl_typesupport_introspection_c__get_function__UpdateKB_Request__fluents(untyped_member, index));
  const robot_swiss_knife_msgs__msg__Fluent * value =
    (const robot_swiss_knife_msgs__msg__Fluent *)(untyped_value);
  *item = *value;
}

bool robot_swiss_knife_msgs__srv__UpdateKB_Request__rosidl_typesupport_introspection_c__resize_function__UpdateKB_Request__fluents(
  void * untyped_member, size_t size)
{
  robot_swiss_knife_msgs__msg__Fluent__Sequence * member =
    (robot_swiss_knife_msgs__msg__Fluent__Sequence *)(untyped_member);
  robot_swiss_knife_msgs__msg__Fluent__Sequence__fini(member);
  return robot_swiss_knife_msgs__msg__Fluent__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robot_swiss_knife_msgs__srv__UpdateKB_Request__rosidl_typesupport_introspection_c__UpdateKB_Request_message_member_array[2] = {
  {
    "operation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_swiss_knife_msgs__srv__UpdateKB_Request, operation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fluents",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_swiss_knife_msgs__srv__UpdateKB_Request, fluents),  // bytes offset in struct
    NULL,  // default value
    robot_swiss_knife_msgs__srv__UpdateKB_Request__rosidl_typesupport_introspection_c__size_function__UpdateKB_Request__fluents,  // size() function pointer
    robot_swiss_knife_msgs__srv__UpdateKB_Request__rosidl_typesupport_introspection_c__get_const_function__UpdateKB_Request__fluents,  // get_const(index) function pointer
    robot_swiss_knife_msgs__srv__UpdateKB_Request__rosidl_typesupport_introspection_c__get_function__UpdateKB_Request__fluents,  // get(index) function pointer
    robot_swiss_knife_msgs__srv__UpdateKB_Request__rosidl_typesupport_introspection_c__fetch_function__UpdateKB_Request__fluents,  // fetch(index, &value) function pointer
    robot_swiss_knife_msgs__srv__UpdateKB_Request__rosidl_typesupport_introspection_c__assign_function__UpdateKB_Request__fluents,  // assign(index, value) function pointer
    robot_swiss_knife_msgs__srv__UpdateKB_Request__rosidl_typesupport_introspection_c__resize_function__UpdateKB_Request__fluents  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_swiss_knife_msgs__srv__UpdateKB_Request__rosidl_typesupport_introspection_c__UpdateKB_Request_message_members = {
  "robot_swiss_knife_msgs__srv",  // message namespace
  "UpdateKB_Request",  // message name
  2,  // number of fields
  sizeof(robot_swiss_knife_msgs__srv__UpdateKB_Request),
  robot_swiss_knife_msgs__srv__UpdateKB_Request__rosidl_typesupport_introspection_c__UpdateKB_Request_message_member_array,  // message members
  robot_swiss_knife_msgs__srv__UpdateKB_Request__rosidl_typesupport_introspection_c__UpdateKB_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_swiss_knife_msgs__srv__UpdateKB_Request__rosidl_typesupport_introspection_c__UpdateKB_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_swiss_knife_msgs__srv__UpdateKB_Request__rosidl_typesupport_introspection_c__UpdateKB_Request_message_type_support_handle = {
  0,
  &robot_swiss_knife_msgs__srv__UpdateKB_Request__rosidl_typesupport_introspection_c__UpdateKB_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_swiss_knife_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_swiss_knife_msgs, srv, UpdateKB_Request)() {
  robot_swiss_knife_msgs__srv__UpdateKB_Request__rosidl_typesupport_introspection_c__UpdateKB_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_swiss_knife_msgs, msg, Fluent)();
  if (!robot_swiss_knife_msgs__srv__UpdateKB_Request__rosidl_typesupport_introspection_c__UpdateKB_Request_message_type_support_handle.typesupport_identifier) {
    robot_swiss_knife_msgs__srv__UpdateKB_Request__rosidl_typesupport_introspection_c__UpdateKB_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_swiss_knife_msgs__srv__UpdateKB_Request__rosidl_typesupport_introspection_c__UpdateKB_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robot_swiss_knife_msgs/srv/detail/update_kb__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_swiss_knife_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_swiss_knife_msgs/srv/detail/update_kb__functions.h"
// already included above
// #include "robot_swiss_knife_msgs/srv/detail/update_kb__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void robot_swiss_knife_msgs__srv__UpdateKB_Response__rosidl_typesupport_introspection_c__UpdateKB_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_swiss_knife_msgs__srv__UpdateKB_Response__init(message_memory);
}

void robot_swiss_knife_msgs__srv__UpdateKB_Response__rosidl_typesupport_introspection_c__UpdateKB_Response_fini_function(void * message_memory)
{
  robot_swiss_knife_msgs__srv__UpdateKB_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robot_swiss_knife_msgs__srv__UpdateKB_Response__rosidl_typesupport_introspection_c__UpdateKB_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_swiss_knife_msgs__srv__UpdateKB_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_swiss_knife_msgs__srv__UpdateKB_Response__rosidl_typesupport_introspection_c__UpdateKB_Response_message_members = {
  "robot_swiss_knife_msgs__srv",  // message namespace
  "UpdateKB_Response",  // message name
  1,  // number of fields
  sizeof(robot_swiss_knife_msgs__srv__UpdateKB_Response),
  robot_swiss_knife_msgs__srv__UpdateKB_Response__rosidl_typesupport_introspection_c__UpdateKB_Response_message_member_array,  // message members
  robot_swiss_knife_msgs__srv__UpdateKB_Response__rosidl_typesupport_introspection_c__UpdateKB_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_swiss_knife_msgs__srv__UpdateKB_Response__rosidl_typesupport_introspection_c__UpdateKB_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_swiss_knife_msgs__srv__UpdateKB_Response__rosidl_typesupport_introspection_c__UpdateKB_Response_message_type_support_handle = {
  0,
  &robot_swiss_knife_msgs__srv__UpdateKB_Response__rosidl_typesupport_introspection_c__UpdateKB_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_swiss_knife_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_swiss_knife_msgs, srv, UpdateKB_Response)() {
  if (!robot_swiss_knife_msgs__srv__UpdateKB_Response__rosidl_typesupport_introspection_c__UpdateKB_Response_message_type_support_handle.typesupport_identifier) {
    robot_swiss_knife_msgs__srv__UpdateKB_Response__rosidl_typesupport_introspection_c__UpdateKB_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_swiss_knife_msgs__srv__UpdateKB_Response__rosidl_typesupport_introspection_c__UpdateKB_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robot_swiss_knife_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "robot_swiss_knife_msgs/srv/detail/update_kb__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers robot_swiss_knife_msgs__srv__detail__update_kb__rosidl_typesupport_introspection_c__UpdateKB_service_members = {
  "robot_swiss_knife_msgs__srv",  // service namespace
  "UpdateKB",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // robot_swiss_knife_msgs__srv__detail__update_kb__rosidl_typesupport_introspection_c__UpdateKB_Request_message_type_support_handle,
  NULL  // response message
  // robot_swiss_knife_msgs__srv__detail__update_kb__rosidl_typesupport_introspection_c__UpdateKB_Response_message_type_support_handle
};

static rosidl_service_type_support_t robot_swiss_knife_msgs__srv__detail__update_kb__rosidl_typesupport_introspection_c__UpdateKB_service_type_support_handle = {
  0,
  &robot_swiss_knife_msgs__srv__detail__update_kb__rosidl_typesupport_introspection_c__UpdateKB_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_swiss_knife_msgs, srv, UpdateKB_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_swiss_knife_msgs, srv, UpdateKB_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_swiss_knife_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_swiss_knife_msgs, srv, UpdateKB)() {
  if (!robot_swiss_knife_msgs__srv__detail__update_kb__rosidl_typesupport_introspection_c__UpdateKB_service_type_support_handle.typesupport_identifier) {
    robot_swiss_knife_msgs__srv__detail__update_kb__rosidl_typesupport_introspection_c__UpdateKB_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)robot_swiss_knife_msgs__srv__detail__update_kb__rosidl_typesupport_introspection_c__UpdateKB_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_swiss_knife_msgs, srv, UpdateKB_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_swiss_knife_msgs, srv, UpdateKB_Response)()->data;
  }

  return &robot_swiss_knife_msgs__srv__detail__update_kb__rosidl_typesupport_introspection_c__UpdateKB_service_type_support_handle;
}
