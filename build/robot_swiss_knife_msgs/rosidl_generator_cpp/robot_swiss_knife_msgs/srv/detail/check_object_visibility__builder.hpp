// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_swiss_knife_msgs:srv/CheckObjectVisibility.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__CHECK_OBJECT_VISIBILITY__BUILDER_HPP_
#define ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__CHECK_OBJECT_VISIBILITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_swiss_knife_msgs/srv/detail/check_object_visibility__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_swiss_knife_msgs
{

namespace srv
{

namespace builder
{

class Init_CheckObjectVisibility_Request_object_categories
{
public:
  explicit Init_CheckObjectVisibility_Request_object_categories(::robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request & msg)
  : msg_(msg)
  {}
  ::robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request object_categories(::robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request::_object_categories_type arg)
  {
    msg_.object_categories = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request msg_;
};

class Init_CheckObjectVisibility_Request_image
{
public:
  Init_CheckObjectVisibility_Request_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CheckObjectVisibility_Request_object_categories image(::robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_CheckObjectVisibility_Request_object_categories(msg_);
  }

private:
  ::robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_swiss_knife_msgs::srv::CheckObjectVisibility_Request>()
{
  return robot_swiss_knife_msgs::srv::builder::Init_CheckObjectVisibility_Request_image();
}

}  // namespace robot_swiss_knife_msgs


namespace robot_swiss_knife_msgs
{

namespace srv
{

namespace builder
{

class Init_CheckObjectVisibility_Response_objects_visible
{
public:
  Init_CheckObjectVisibility_Response_objects_visible()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_swiss_knife_msgs::srv::CheckObjectVisibility_Response objects_visible(::robot_swiss_knife_msgs::srv::CheckObjectVisibility_Response::_objects_visible_type arg)
  {
    msg_.objects_visible = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_swiss_knife_msgs::srv::CheckObjectVisibility_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_swiss_knife_msgs::srv::CheckObjectVisibility_Response>()
{
  return robot_swiss_knife_msgs::srv::builder::Init_CheckObjectVisibility_Response_objects_visible();
}

}  // namespace robot_swiss_knife_msgs

#endif  // ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__CHECK_OBJECT_VISIBILITY__BUILDER_HPP_
