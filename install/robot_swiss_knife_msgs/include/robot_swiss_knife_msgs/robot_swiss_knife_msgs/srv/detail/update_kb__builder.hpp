// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_swiss_knife_msgs:srv/UpdateKB.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__UPDATE_KB__BUILDER_HPP_
#define ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__UPDATE_KB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_swiss_knife_msgs/srv/detail/update_kb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_swiss_knife_msgs
{

namespace srv
{

namespace builder
{

class Init_UpdateKB_Request_fluents
{
public:
  explicit Init_UpdateKB_Request_fluents(::robot_swiss_knife_msgs::srv::UpdateKB_Request & msg)
  : msg_(msg)
  {}
  ::robot_swiss_knife_msgs::srv::UpdateKB_Request fluents(::robot_swiss_knife_msgs::srv::UpdateKB_Request::_fluents_type arg)
  {
    msg_.fluents = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_swiss_knife_msgs::srv::UpdateKB_Request msg_;
};

class Init_UpdateKB_Request_operation
{
public:
  Init_UpdateKB_Request_operation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UpdateKB_Request_fluents operation(::robot_swiss_knife_msgs::srv::UpdateKB_Request::_operation_type arg)
  {
    msg_.operation = std::move(arg);
    return Init_UpdateKB_Request_fluents(msg_);
  }

private:
  ::robot_swiss_knife_msgs::srv::UpdateKB_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_swiss_knife_msgs::srv::UpdateKB_Request>()
{
  return robot_swiss_knife_msgs::srv::builder::Init_UpdateKB_Request_operation();
}

}  // namespace robot_swiss_knife_msgs


namespace robot_swiss_knife_msgs
{

namespace srv
{

namespace builder
{

class Init_UpdateKB_Response_success
{
public:
  Init_UpdateKB_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_swiss_knife_msgs::srv::UpdateKB_Response success(::robot_swiss_knife_msgs::srv::UpdateKB_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_swiss_knife_msgs::srv::UpdateKB_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_swiss_knife_msgs::srv::UpdateKB_Response>()
{
  return robot_swiss_knife_msgs::srv::builder::Init_UpdateKB_Response_success();
}

}  // namespace robot_swiss_knife_msgs

#endif  // ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__UPDATE_KB__BUILDER_HPP_
