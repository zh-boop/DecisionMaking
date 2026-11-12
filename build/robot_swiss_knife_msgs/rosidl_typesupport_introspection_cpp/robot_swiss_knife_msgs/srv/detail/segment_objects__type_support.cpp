// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robot_swiss_knife_msgs:srv/SegmentObjects.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robot_swiss_knife_msgs/srv/detail/segment_objects__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robot_swiss_knife_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SegmentObjects_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robot_swiss_knife_msgs::srv::SegmentObjects_Request(_init);
}

void SegmentObjects_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robot_swiss_knife_msgs::srv::SegmentObjects_Request *>(message_memory);
  typed_message->~SegmentObjects_Request();
}

size_t size_function__SegmentObjects_Request__object_categories(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SegmentObjects_Request__object_categories(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SegmentObjects_Request__object_categories(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SegmentObjects_Request__object_categories(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SegmentObjects_Request__object_categories(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SegmentObjects_Request__object_categories(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SegmentObjects_Request__object_categories(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SegmentObjects_Request__object_categories(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SegmentObjects_Request_message_member_array[2] = {
  {
    "image",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_swiss_knife_msgs::srv::SegmentObjects_Request, image),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "object_categories",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_swiss_knife_msgs::srv::SegmentObjects_Request, object_categories),  // bytes offset in struct
    nullptr,  // default value
    size_function__SegmentObjects_Request__object_categories,  // size() function pointer
    get_const_function__SegmentObjects_Request__object_categories,  // get_const(index) function pointer
    get_function__SegmentObjects_Request__object_categories,  // get(index) function pointer
    fetch_function__SegmentObjects_Request__object_categories,  // fetch(index, &value) function pointer
    assign_function__SegmentObjects_Request__object_categories,  // assign(index, value) function pointer
    resize_function__SegmentObjects_Request__object_categories  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SegmentObjects_Request_message_members = {
  "robot_swiss_knife_msgs::srv",  // message namespace
  "SegmentObjects_Request",  // message name
  2,  // number of fields
  sizeof(robot_swiss_knife_msgs::srv::SegmentObjects_Request),
  SegmentObjects_Request_message_member_array,  // message members
  SegmentObjects_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SegmentObjects_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SegmentObjects_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SegmentObjects_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace robot_swiss_knife_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_swiss_knife_msgs::srv::SegmentObjects_Request>()
{
  return &::robot_swiss_knife_msgs::srv::rosidl_typesupport_introspection_cpp::SegmentObjects_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_swiss_knife_msgs, srv, SegmentObjects_Request)() {
  return &::robot_swiss_knife_msgs::srv::rosidl_typesupport_introspection_cpp::SegmentObjects_Request_message_type_support_handle;
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
// #include "robot_swiss_knife_msgs/srv/detail/segment_objects__struct.hpp"
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

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SegmentObjects_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robot_swiss_knife_msgs::srv::SegmentObjects_Response(_init);
}

void SegmentObjects_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robot_swiss_knife_msgs::srv::SegmentObjects_Response *>(message_memory);
  typed_message->~SegmentObjects_Response();
}

size_t size_function__SegmentObjects_Response__objects(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<robot_swiss_knife_msgs::msg::Object> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SegmentObjects_Response__objects(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<robot_swiss_knife_msgs::msg::Object> *>(untyped_member);
  return &member[index];
}

void * get_function__SegmentObjects_Response__objects(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<robot_swiss_knife_msgs::msg::Object> *>(untyped_member);
  return &member[index];
}

void fetch_function__SegmentObjects_Response__objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const robot_swiss_knife_msgs::msg::Object *>(
    get_const_function__SegmentObjects_Response__objects(untyped_member, index));
  auto & value = *reinterpret_cast<robot_swiss_knife_msgs::msg::Object *>(untyped_value);
  value = item;
}

void assign_function__SegmentObjects_Response__objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<robot_swiss_knife_msgs::msg::Object *>(
    get_function__SegmentObjects_Response__objects(untyped_member, index));
  const auto & value = *reinterpret_cast<const robot_swiss_knife_msgs::msg::Object *>(untyped_value);
  item = value;
}

void resize_function__SegmentObjects_Response__objects(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<robot_swiss_knife_msgs::msg::Object> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SegmentObjects_Response_message_member_array[1] = {
  {
    "objects",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robot_swiss_knife_msgs::msg::Object>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_swiss_knife_msgs::srv::SegmentObjects_Response, objects),  // bytes offset in struct
    nullptr,  // default value
    size_function__SegmentObjects_Response__objects,  // size() function pointer
    get_const_function__SegmentObjects_Response__objects,  // get_const(index) function pointer
    get_function__SegmentObjects_Response__objects,  // get(index) function pointer
    fetch_function__SegmentObjects_Response__objects,  // fetch(index, &value) function pointer
    assign_function__SegmentObjects_Response__objects,  // assign(index, value) function pointer
    resize_function__SegmentObjects_Response__objects  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SegmentObjects_Response_message_members = {
  "robot_swiss_knife_msgs::srv",  // message namespace
  "SegmentObjects_Response",  // message name
  1,  // number of fields
  sizeof(robot_swiss_knife_msgs::srv::SegmentObjects_Response),
  SegmentObjects_Response_message_member_array,  // message members
  SegmentObjects_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SegmentObjects_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SegmentObjects_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SegmentObjects_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace robot_swiss_knife_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_swiss_knife_msgs::srv::SegmentObjects_Response>()
{
  return &::robot_swiss_knife_msgs::srv::rosidl_typesupport_introspection_cpp::SegmentObjects_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_swiss_knife_msgs, srv, SegmentObjects_Response)() {
  return &::robot_swiss_knife_msgs::srv::rosidl_typesupport_introspection_cpp::SegmentObjects_Response_message_type_support_handle;
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
// #include "robot_swiss_knife_msgs/srv/detail/segment_objects__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace robot_swiss_knife_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers SegmentObjects_service_members = {
  "robot_swiss_knife_msgs::srv",  // service namespace
  "SegmentObjects",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<robot_swiss_knife_msgs::srv::SegmentObjects>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t SegmentObjects_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SegmentObjects_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace robot_swiss_knife_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<robot_swiss_knife_msgs::srv::SegmentObjects>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::robot_swiss_knife_msgs::srv::rosidl_typesupport_introspection_cpp::SegmentObjects_service_type_support_handle;
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
        ::robot_swiss_knife_msgs::srv::SegmentObjects_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::robot_swiss_knife_msgs::srv::SegmentObjects_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_swiss_knife_msgs, srv, SegmentObjects)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<robot_swiss_knife_msgs::srv::SegmentObjects>();
}

#ifdef __cplusplus
}
#endif
