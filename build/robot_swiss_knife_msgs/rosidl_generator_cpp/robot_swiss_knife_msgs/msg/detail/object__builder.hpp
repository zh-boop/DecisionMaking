// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_swiss_knife_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_
#define ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_swiss_knife_msgs/msg/detail/object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_swiss_knife_msgs
{

namespace msg
{

namespace builder
{

class Init_Object_roi
{
public:
  explicit Init_Object_roi(::robot_swiss_knife_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  ::robot_swiss_knife_msgs::msg::Object roi(::robot_swiss_knife_msgs::msg::Object::_roi_type arg)
  {
    msg_.roi = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_swiss_knife_msgs::msg::Object msg_;
};

class Init_Object_view
{
public:
  explicit Init_Object_view(::robot_swiss_knife_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_roi view(::robot_swiss_knife_msgs::msg::Object::_view_type arg)
  {
    msg_.view = std::move(arg);
    return Init_Object_roi(msg_);
  }

private:
  ::robot_swiss_knife_msgs::msg::Object msg_;
};

class Init_Object_probability
{
public:
  explicit Init_Object_probability(::robot_swiss_knife_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_view probability(::robot_swiss_knife_msgs::msg::Object::_probability_type arg)
  {
    msg_.probability = std::move(arg);
    return Init_Object_view(msg_);
  }

private:
  ::robot_swiss_knife_msgs::msg::Object msg_;
};

class Init_Object_database_id
{
public:
  explicit Init_Object_database_id(::robot_swiss_knife_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_probability database_id(::robot_swiss_knife_msgs::msg::Object::_database_id_type arg)
  {
    msg_.database_id = std::move(arg);
    return Init_Object_probability(msg_);
  }

private:
  ::robot_swiss_knife_msgs::msg::Object msg_;
};

class Init_Object_category
{
public:
  explicit Init_Object_category(::robot_swiss_knife_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_database_id category(::robot_swiss_knife_msgs::msg::Object::_category_type arg)
  {
    msg_.category = std::move(arg);
    return Init_Object_database_id(msg_);
  }

private:
  ::robot_swiss_knife_msgs::msg::Object msg_;
};

class Init_Object_name
{
public:
  explicit Init_Object_name(::robot_swiss_knife_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_category name(::robot_swiss_knife_msgs::msg::Object::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Object_category(msg_);
  }

private:
  ::robot_swiss_knife_msgs::msg::Object msg_;
};

class Init_Object_dimensions
{
public:
  explicit Init_Object_dimensions(::robot_swiss_knife_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_name dimensions(::robot_swiss_knife_msgs::msg::Object::_dimensions_type arg)
  {
    msg_.dimensions = std::move(arg);
    return Init_Object_name(msg_);
  }

private:
  ::robot_swiss_knife_msgs::msg::Object msg_;
};

class Init_Object_pose
{
public:
  Init_Object_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Object_dimensions pose(::robot_swiss_knife_msgs::msg::Object::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Object_dimensions(msg_);
  }

private:
  ::robot_swiss_knife_msgs::msg::Object msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_swiss_knife_msgs::msg::Object>()
{
  return robot_swiss_knife_msgs::msg::builder::Init_Object_pose();
}

}  // namespace robot_swiss_knife_msgs

#endif  // ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_
