// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_swiss_knife_msgs:srv/ExtractROI3DPoints.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__EXTRACT_ROI3_D_POINTS__BUILDER_HPP_
#define ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__EXTRACT_ROI3_D_POINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_swiss_knife_msgs/srv/detail/extract_roi3_d_points__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_swiss_knife_msgs
{

namespace srv
{

namespace builder
{

class Init_ExtractROI3DPoints_Request_objects
{
public:
  explicit Init_ExtractROI3DPoints_Request_objects(::robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Request & msg)
  : msg_(msg)
  {}
  ::robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Request objects(::robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Request::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Request msg_;
};

class Init_ExtractROI3DPoints_Request_point_cloud
{
public:
  Init_ExtractROI3DPoints_Request_point_cloud()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExtractROI3DPoints_Request_objects point_cloud(::robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Request::_point_cloud_type arg)
  {
    msg_.point_cloud = std::move(arg);
    return Init_ExtractROI3DPoints_Request_objects(msg_);
  }

private:
  ::robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Request>()
{
  return robot_swiss_knife_msgs::srv::builder::Init_ExtractROI3DPoints_Request_point_cloud();
}

}  // namespace robot_swiss_knife_msgs


namespace robot_swiss_knife_msgs
{

namespace srv
{

namespace builder
{

class Init_ExtractROI3DPoints_Response_objects
{
public:
  Init_ExtractROI3DPoints_Response_objects()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Response objects(::robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Response::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_swiss_knife_msgs::srv::ExtractROI3DPoints_Response>()
{
  return robot_swiss_knife_msgs::srv::builder::Init_ExtractROI3DPoints_Response_objects();
}

}  // namespace robot_swiss_knife_msgs

#endif  // ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__EXTRACT_ROI3_D_POINTS__BUILDER_HPP_
