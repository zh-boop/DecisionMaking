// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robot_swiss_knife_msgs:action/GetTaskPlan.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robot_swiss_knife_msgs/action/detail/get_task_plan__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robot_swiss_knife_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GetTaskPlan_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robot_swiss_knife_msgs::action::GetTaskPlan_Goal(_init);
}

void GetTaskPlan_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robot_swiss_knife_msgs::action::GetTaskPlan_Goal *>(message_memory);
  typed_message->~GetTaskPlan_Goal();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetTaskPlan_Goal_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_swiss_knife_msgs::action::GetTaskPlan_Goal, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetTaskPlan_Goal_message_members = {
  "robot_swiss_knife_msgs::action",  // message namespace
  "GetTaskPlan_Goal",  // message name
  1,  // number of fields
  sizeof(robot_swiss_knife_msgs::action::GetTaskPlan_Goal),
  GetTaskPlan_Goal_message_member_array,  // message members
  GetTaskPlan_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  GetTaskPlan_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetTaskPlan_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetTaskPlan_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace robot_swiss_knife_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_swiss_knife_msgs::action::GetTaskPlan_Goal>()
{
  return &::robot_swiss_knife_msgs::action::rosidl_typesupport_introspection_cpp::GetTaskPlan_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_swiss_knife_msgs, action, GetTaskPlan_Goal)() {
  return &::robot_swiss_knife_msgs::action::rosidl_typesupport_introspection_cpp::GetTaskPlan_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "robot_swiss_knife_msgs/action/detail/get_task_plan__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robot_swiss_knife_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GetTaskPlan_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robot_swiss_knife_msgs::action::GetTaskPlan_Result(_init);
}

void GetTaskPlan_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robot_swiss_knife_msgs::action::GetTaskPlan_Result *>(message_memory);
  typed_message->~GetTaskPlan_Result();
}

size_t size_function__GetTaskPlan_Result__plan(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<robot_swiss_knife_msgs::msg::Action> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetTaskPlan_Result__plan(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<robot_swiss_knife_msgs::msg::Action> *>(untyped_member);
  return &member[index];
}

void * get_function__GetTaskPlan_Result__plan(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<robot_swiss_knife_msgs::msg::Action> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetTaskPlan_Result__plan(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const robot_swiss_knife_msgs::msg::Action *>(
    get_const_function__GetTaskPlan_Result__plan(untyped_member, index));
  auto & value = *reinterpret_cast<robot_swiss_knife_msgs::msg::Action *>(untyped_value);
  value = item;
}

void assign_function__GetTaskPlan_Result__plan(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<robot_swiss_knife_msgs::msg::Action *>(
    get_function__GetTaskPlan_Result__plan(untyped_member, index));
  const auto & value = *reinterpret_cast<const robot_swiss_knife_msgs::msg::Action *>(untyped_value);
  item = value;
}

void resize_function__GetTaskPlan_Result__plan(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<robot_swiss_knife_msgs::msg::Action> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetTaskPlan_Result_message_member_array[3] = {
  {
    "plan",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robot_swiss_knife_msgs::msg::Action>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_swiss_knife_msgs::action::GetTaskPlan_Result, plan),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetTaskPlan_Result__plan,  // size() function pointer
    get_const_function__GetTaskPlan_Result__plan,  // get_const(index) function pointer
    get_function__GetTaskPlan_Result__plan,  // get(index) function pointer
    fetch_function__GetTaskPlan_Result__plan,  // fetch(index, &value) function pointer
    assign_function__GetTaskPlan_Result__plan,  // assign(index, value) function pointer
    resize_function__GetTaskPlan_Result__plan  // resize(index) function pointer
  },
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_swiss_knife_msgs::action::GetTaskPlan_Result, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_swiss_knife_msgs::action::GetTaskPlan_Result, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetTaskPlan_Result_message_members = {
  "robot_swiss_knife_msgs::action",  // message namespace
  "GetTaskPlan_Result",  // message name
  3,  // number of fields
  sizeof(robot_swiss_knife_msgs::action::GetTaskPlan_Result),
  GetTaskPlan_Result_message_member_array,  // message members
  GetTaskPlan_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  GetTaskPlan_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetTaskPlan_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetTaskPlan_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace robot_swiss_knife_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_swiss_knife_msgs::action::GetTaskPlan_Result>()
{
  return &::robot_swiss_knife_msgs::action::rosidl_typesupport_introspection_cpp::GetTaskPlan_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_swiss_knife_msgs, action, GetTaskPlan_Result)() {
  return &::robot_swiss_knife_msgs::action::rosidl_typesupport_introspection_cpp::GetTaskPlan_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "robot_swiss_knife_msgs/action/detail/get_task_plan__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robot_swiss_knife_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GetTaskPlan_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robot_swiss_knife_msgs::action::GetTaskPlan_Feedback(_init);
}

void GetTaskPlan_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robot_swiss_knife_msgs::action::GetTaskPlan_Feedback *>(message_memory);
  typed_message->~GetTaskPlan_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetTaskPlan_Feedback_message_member_array[1] = {
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_swiss_knife_msgs::action::GetTaskPlan_Feedback, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetTaskPlan_Feedback_message_members = {
  "robot_swiss_knife_msgs::action",  // message namespace
  "GetTaskPlan_Feedback",  // message name
  1,  // number of fields
  sizeof(robot_swiss_knife_msgs::action::GetTaskPlan_Feedback),
  GetTaskPlan_Feedback_message_member_array,  // message members
  GetTaskPlan_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  GetTaskPlan_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetTaskPlan_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetTaskPlan_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace robot_swiss_knife_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_swiss_knife_msgs::action::GetTaskPlan_Feedback>()
{
  return &::robot_swiss_knife_msgs::action::rosidl_typesupport_introspection_cpp::GetTaskPlan_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_swiss_knife_msgs, action, GetTaskPlan_Feedback)() {
  return &::robot_swiss_knife_msgs::action::rosidl_typesupport_introspection_cpp::GetTaskPlan_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "robot_swiss_knife_msgs/action/detail/get_task_plan__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robot_swiss_knife_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GetTaskPlan_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robot_swiss_knife_msgs::action::GetTaskPlan_SendGoal_Request(_init);
}

void GetTaskPlan_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robot_swiss_knife_msgs::action::GetTaskPlan_SendGoal_Request *>(message_memory);
  typed_message->~GetTaskPlan_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetTaskPlan_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_swiss_knife_msgs::action::GetTaskPlan_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robot_swiss_knife_msgs::action::GetTaskPlan_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_swiss_knife_msgs::action::GetTaskPlan_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetTaskPlan_SendGoal_Request_message_members = {
  "robot_swiss_knife_msgs::action",  // message namespace
  "GetTaskPlan_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(robot_swiss_knife_msgs::action::GetTaskPlan_SendGoal_Request),
  GetTaskPlan_SendGoal_Request_message_member_array,  // message members
  GetTaskPlan_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetTaskPlan_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetTaskPlan_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetTaskPlan_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace robot_swiss_knife_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_swiss_knife_msgs::action::GetTaskPlan_SendGoal_Request>()
{
  return &::robot_swiss_knife_msgs::action::rosidl_typesupport_introspection_cpp::GetTaskPlan_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_swiss_knife_msgs, action, GetTaskPlan_SendGoal_Request)() {
  return &::robot_swiss_knife_msgs::action::rosidl_typesupport_introspection_cpp::GetTaskPlan_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "robot_swiss_knife_msgs/action/detail/get_task_plan__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robot_swiss_knife_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GetTaskPlan_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robot_swiss_knife_msgs::action::GetTaskPlan_SendGoal_Response(_init);
}

void GetTaskPlan_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robot_swiss_knife_msgs::action::GetTaskPlan_SendGoal_Response *>(message_memory);
  typed_message->~GetTaskPlan_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetTaskPlan_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_swiss_knife_msgs::action::GetTaskPlan_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_swiss_knife_msgs::action::GetTaskPlan_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetTaskPlan_SendGoal_Response_message_members = {
  "robot_swiss_knife_msgs::action",  // message namespace
  "GetTaskPlan_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(robot_swiss_knife_msgs::action::GetTaskPlan_SendGoal_Response),
  GetTaskPlan_SendGoal_Response_message_member_array,  // message members
  GetTaskPlan_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetTaskPlan_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetTaskPlan_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetTaskPlan_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace robot_swiss_knife_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_swiss_knife_msgs::action::GetTaskPlan_SendGoal_Response>()
{
  return &::robot_swiss_knife_msgs::action::rosidl_typesupport_introspection_cpp::GetTaskPlan_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_swiss_knife_msgs, action, GetTaskPlan_SendGoal_Response)() {
  return &::robot_swiss_knife_msgs::action::rosidl_typesupport_introspection_cpp::GetTaskPlan_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "robot_swiss_knife_msgs/action/detail/get_task_plan__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace robot_swiss_knife_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetTaskPlan_SendGoal_service_members = {
  "robot_swiss_knife_msgs::action",  // service namespace
  "GetTaskPlan_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<robot_swiss_knife_msgs::action::GetTaskPlan_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetTaskPlan_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetTaskPlan_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace robot_swiss_knife_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<robot_swiss_knife_msgs::action::GetTaskPlan_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::robot_swiss_knife_msgs::action::rosidl_typesupport_introspection_cpp::GetTaskPlan_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::robot_swiss_knife_msgs::action::GetTaskPlan_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::robot_swiss_knife_msgs::action::GetTaskPlan_SendGoal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_swiss_knife_msgs, action, GetTaskPlan_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<robot_swiss_knife_msgs::action::GetTaskPlan_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "robot_swiss_knife_msgs/action/detail/get_task_plan__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robot_swiss_knife_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GetTaskPlan_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robot_swiss_knife_msgs::action::GetTaskPlan_GetResult_Request(_init);
}

void GetTaskPlan_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robot_swiss_knife_msgs::action::GetTaskPlan_GetResult_Request *>(message_memory);
  typed_message->~GetTaskPlan_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetTaskPlan_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_swiss_knife_msgs::action::GetTaskPlan_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetTaskPlan_GetResult_Request_message_members = {
  "robot_swiss_knife_msgs::action",  // message namespace
  "GetTaskPlan_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(robot_swiss_knife_msgs::action::GetTaskPlan_GetResult_Request),
  GetTaskPlan_GetResult_Request_message_member_array,  // message members
  GetTaskPlan_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetTaskPlan_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetTaskPlan_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetTaskPlan_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace robot_swiss_knife_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_swiss_knife_msgs::action::GetTaskPlan_GetResult_Request>()
{
  return &::robot_swiss_knife_msgs::action::rosidl_typesupport_introspection_cpp::GetTaskPlan_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_swiss_knife_msgs, action, GetTaskPlan_GetResult_Request)() {
  return &::robot_swiss_knife_msgs::action::rosidl_typesupport_introspection_cpp::GetTaskPlan_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "robot_swiss_knife_msgs/action/detail/get_task_plan__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robot_swiss_knife_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GetTaskPlan_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robot_swiss_knife_msgs::action::GetTaskPlan_GetResult_Response(_init);
}

void GetTaskPlan_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robot_swiss_knife_msgs::action::GetTaskPlan_GetResult_Response *>(message_memory);
  typed_message->~GetTaskPlan_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetTaskPlan_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_swiss_knife_msgs::action::GetTaskPlan_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robot_swiss_knife_msgs::action::GetTaskPlan_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_swiss_knife_msgs::action::GetTaskPlan_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetTaskPlan_GetResult_Response_message_members = {
  "robot_swiss_knife_msgs::action",  // message namespace
  "GetTaskPlan_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(robot_swiss_knife_msgs::action::GetTaskPlan_GetResult_Response),
  GetTaskPlan_GetResult_Response_message_member_array,  // message members
  GetTaskPlan_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetTaskPlan_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetTaskPlan_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetTaskPlan_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace robot_swiss_knife_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_swiss_knife_msgs::action::GetTaskPlan_GetResult_Response>()
{
  return &::robot_swiss_knife_msgs::action::rosidl_typesupport_introspection_cpp::GetTaskPlan_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_swiss_knife_msgs, action, GetTaskPlan_GetResult_Response)() {
  return &::robot_swiss_knife_msgs::action::rosidl_typesupport_introspection_cpp::GetTaskPlan_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "robot_swiss_knife_msgs/action/detail/get_task_plan__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace robot_swiss_knife_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetTaskPlan_GetResult_service_members = {
  "robot_swiss_knife_msgs::action",  // service namespace
  "GetTaskPlan_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<robot_swiss_knife_msgs::action::GetTaskPlan_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetTaskPlan_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetTaskPlan_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace robot_swiss_knife_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<robot_swiss_knife_msgs::action::GetTaskPlan_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::robot_swiss_knife_msgs::action::rosidl_typesupport_introspection_cpp::GetTaskPlan_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::robot_swiss_knife_msgs::action::GetTaskPlan_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::robot_swiss_knife_msgs::action::GetTaskPlan_GetResult_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_swiss_knife_msgs, action, GetTaskPlan_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<robot_swiss_knife_msgs::action::GetTaskPlan_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "robot_swiss_knife_msgs/action/detail/get_task_plan__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robot_swiss_knife_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void GetTaskPlan_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robot_swiss_knife_msgs::action::GetTaskPlan_FeedbackMessage(_init);
}

void GetTaskPlan_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robot_swiss_knife_msgs::action::GetTaskPlan_FeedbackMessage *>(message_memory);
  typed_message->~GetTaskPlan_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetTaskPlan_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_swiss_knife_msgs::action::GetTaskPlan_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robot_swiss_knife_msgs::action::GetTaskPlan_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_swiss_knife_msgs::action::GetTaskPlan_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetTaskPlan_FeedbackMessage_message_members = {
  "robot_swiss_knife_msgs::action",  // message namespace
  "GetTaskPlan_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(robot_swiss_knife_msgs::action::GetTaskPlan_FeedbackMessage),
  GetTaskPlan_FeedbackMessage_message_member_array,  // message members
  GetTaskPlan_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  GetTaskPlan_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetTaskPlan_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetTaskPlan_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace robot_swiss_knife_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_swiss_knife_msgs::action::GetTaskPlan_FeedbackMessage>()
{
  return &::robot_swiss_knife_msgs::action::rosidl_typesupport_introspection_cpp::GetTaskPlan_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_swiss_knife_msgs, action, GetTaskPlan_FeedbackMessage)() {
  return &::robot_swiss_knife_msgs::action::rosidl_typesupport_introspection_cpp::GetTaskPlan_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
