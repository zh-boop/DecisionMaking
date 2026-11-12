// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_swiss_knife_msgs:srv/SegmentObjects.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__SEGMENT_OBJECTS__BUILDER_HPP_
#define ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__SEGMENT_OBJECTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_swiss_knife_msgs/srv/detail/segment_objects__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_swiss_knife_msgs
{

namespace srv
{

namespace builder
{

class Init_SegmentObjects_Request_object_categories
{
public:
  explicit Init_SegmentObjects_Request_object_categories(::robot_swiss_knife_msgs::srv::SegmentObjects_Request & msg)
  : msg_(msg)
  {}
  ::robot_swiss_knife_msgs::srv::SegmentObjects_Request object_categories(::robot_swiss_knife_msgs::srv::SegmentObjects_Request::_object_categories_type arg)
  {
    msg_.object_categories = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_swiss_knife_msgs::srv::SegmentObjects_Request msg_;
};

class Init_SegmentObjects_Request_image
{
public:
  Init_SegmentObjects_Request_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SegmentObjects_Request_object_categories image(::robot_swiss_knife_msgs::srv::SegmentObjects_Request::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_SegmentObjects_Request_object_categories(msg_);
  }

private:
  ::robot_swiss_knife_msgs::srv::SegmentObjects_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_swiss_knife_msgs::srv::SegmentObjects_Request>()
{
  return robot_swiss_knife_msgs::srv::builder::Init_SegmentObjects_Request_image();
}

}  // namespace robot_swiss_knife_msgs


namespace robot_swiss_knife_msgs
{

namespace srv
{

namespace builder
{

class Init_SegmentObjects_Response_objects
{
public:
  Init_SegmentObjects_Response_objects()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_swiss_knife_msgs::srv::SegmentObjects_Response objects(::robot_swiss_knife_msgs::srv::SegmentObjects_Response::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_swiss_knife_msgs::srv::SegmentObjects_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_swiss_knife_msgs::srv::SegmentObjects_Response>()
{
  return robot_swiss_knife_msgs::srv::builder::Init_SegmentObjects_Response_objects();
}

}  // namespace robot_swiss_knife_msgs

#endif  // ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__SEGMENT_OBJECTS__BUILDER_HPP_
