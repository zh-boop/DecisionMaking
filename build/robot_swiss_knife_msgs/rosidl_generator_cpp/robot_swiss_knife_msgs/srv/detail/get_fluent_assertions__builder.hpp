// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_swiss_knife_msgs:srv/GetFluentAssertions.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__GET_FLUENT_ASSERTIONS__BUILDER_HPP_
#define ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__GET_FLUENT_ASSERTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_swiss_knife_msgs/srv/detail/get_fluent_assertions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_swiss_knife_msgs
{

namespace srv
{

namespace builder
{

class Init_GetFluentAssertions_Request_name
{
public:
  Init_GetFluentAssertions_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_swiss_knife_msgs::srv::GetFluentAssertions_Request name(::robot_swiss_knife_msgs::srv::GetFluentAssertions_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_swiss_knife_msgs::srv::GetFluentAssertions_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_swiss_knife_msgs::srv::GetFluentAssertions_Request>()
{
  return robot_swiss_knife_msgs::srv::builder::Init_GetFluentAssertions_Request_name();
}

}  // namespace robot_swiss_knife_msgs


namespace robot_swiss_knife_msgs
{

namespace srv
{

namespace builder
{

class Init_GetFluentAssertions_Response_fluents
{
public:
  Init_GetFluentAssertions_Response_fluents()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_swiss_knife_msgs::srv::GetFluentAssertions_Response fluents(::robot_swiss_knife_msgs::srv::GetFluentAssertions_Response::_fluents_type arg)
  {
    msg_.fluents = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_swiss_knife_msgs::srv::GetFluentAssertions_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_swiss_knife_msgs::srv::GetFluentAssertions_Response>()
{
  return robot_swiss_knife_msgs::srv::builder::Init_GetFluentAssertions_Response_fluents();
}

}  // namespace robot_swiss_knife_msgs

#endif  // ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__GET_FLUENT_ASSERTIONS__BUILDER_HPP_
