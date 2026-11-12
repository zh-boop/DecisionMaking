// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_swiss_knife_msgs:msg/Fluent.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__FLUENT__BUILDER_HPP_
#define ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__FLUENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_swiss_knife_msgs/msg/detail/fluent__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_swiss_knife_msgs
{

namespace msg
{

namespace builder
{

class Init_Fluent_value
{
public:
  explicit Init_Fluent_value(::robot_swiss_knife_msgs::msg::Fluent & msg)
  : msg_(msg)
  {}
  ::robot_swiss_knife_msgs::msg::Fluent value(::robot_swiss_knife_msgs::msg::Fluent::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_swiss_knife_msgs::msg::Fluent msg_;
};

class Init_Fluent_params
{
public:
  explicit Init_Fluent_params(::robot_swiss_knife_msgs::msg::Fluent & msg)
  : msg_(msg)
  {}
  Init_Fluent_value params(::robot_swiss_knife_msgs::msg::Fluent::_params_type arg)
  {
    msg_.params = std::move(arg);
    return Init_Fluent_value(msg_);
  }

private:
  ::robot_swiss_knife_msgs::msg::Fluent msg_;
};

class Init_Fluent_name
{
public:
  Init_Fluent_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fluent_params name(::robot_swiss_knife_msgs::msg::Fluent::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Fluent_params(msg_);
  }

private:
  ::robot_swiss_knife_msgs::msg::Fluent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_swiss_knife_msgs::msg::Fluent>()
{
  return robot_swiss_knife_msgs::msg::builder::Init_Fluent_name();
}

}  // namespace robot_swiss_knife_msgs

#endif  // ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__FLUENT__BUILDER_HPP_
