// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_swiss_knife_msgs:msg/ObjectView.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__OBJECT_VIEW__BUILDER_HPP_
#define ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__OBJECT_VIEW__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_swiss_knife_msgs/msg/detail/object_view__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_swiss_knife_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectView_point_cloud
{
public:
  explicit Init_ObjectView_point_cloud(::robot_swiss_knife_msgs::msg::ObjectView & msg)
  : msg_(msg)
  {}
  ::robot_swiss_knife_msgs::msg::ObjectView point_cloud(::robot_swiss_knife_msgs::msg::ObjectView::_point_cloud_type arg)
  {
    msg_.point_cloud = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_swiss_knife_msgs::msg::ObjectView msg_;
};

class Init_ObjectView_mask
{
public:
  explicit Init_ObjectView_mask(::robot_swiss_knife_msgs::msg::ObjectView & msg)
  : msg_(msg)
  {}
  Init_ObjectView_point_cloud mask(::robot_swiss_knife_msgs::msg::ObjectView::_mask_type arg)
  {
    msg_.mask = std::move(arg);
    return Init_ObjectView_point_cloud(msg_);
  }

private:
  ::robot_swiss_knife_msgs::msg::ObjectView msg_;
};

class Init_ObjectView_image
{
public:
  Init_ObjectView_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectView_mask image(::robot_swiss_knife_msgs::msg::ObjectView::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_ObjectView_mask(msg_);
  }

private:
  ::robot_swiss_knife_msgs::msg::ObjectView msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_swiss_knife_msgs::msg::ObjectView>()
{
  return robot_swiss_knife_msgs::msg::builder::Init_ObjectView_image();
}

}  // namespace robot_swiss_knife_msgs

#endif  // ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__OBJECT_VIEW__BUILDER_HPP_
