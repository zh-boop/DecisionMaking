// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_swiss_knife_msgs:msg/Action.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__ACTION__BUILDER_HPP_
#define ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_swiss_knife_msgs/msg/detail/action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_swiss_knife_msgs
{

namespace msg
{

namespace builder
{

class Init_Action_params
{
public:
  explicit Init_Action_params(::robot_swiss_knife_msgs::msg::Action & msg)
  : msg_(msg)
  {}
  ::robot_swiss_knife_msgs::msg::Action params(::robot_swiss_knife_msgs::msg::Action::_params_type arg)
  {
    msg_.params = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_swiss_knife_msgs::msg::Action msg_;
};

class Init_Action_name
{
public:
  Init_Action_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Action_params name(::robot_swiss_knife_msgs::msg::Action::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Action_params(msg_);
  }

private:
  ::robot_swiss_knife_msgs::msg::Action msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_swiss_knife_msgs::msg::Action>()
{
  return robot_swiss_knife_msgs::msg::builder::Init_Action_name();
}

}  // namespace robot_swiss_knife_msgs

#endif  // ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__ACTION__BUILDER_HPP_
