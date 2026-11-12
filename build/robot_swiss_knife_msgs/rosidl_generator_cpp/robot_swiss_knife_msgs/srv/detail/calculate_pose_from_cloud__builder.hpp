// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_swiss_knife_msgs:srv/CalculatePoseFromCloud.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__CALCULATE_POSE_FROM_CLOUD__BUILDER_HPP_
#define ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__CALCULATE_POSE_FROM_CLOUD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_swiss_knife_msgs/srv/detail/calculate_pose_from_cloud__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_swiss_knife_msgs
{

namespace srv
{

namespace builder
{

class Init_CalculatePoseFromCloud_Request_point_cloud
{
public:
  Init_CalculatePoseFromCloud_Request_point_cloud()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Request point_cloud(::robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Request::_point_cloud_type arg)
  {
    msg_.point_cloud = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Request>()
{
  return robot_swiss_knife_msgs::srv::builder::Init_CalculatePoseFromCloud_Request_point_cloud();
}

}  // namespace robot_swiss_knife_msgs


namespace robot_swiss_knife_msgs
{

namespace srv
{

namespace builder
{

class Init_CalculatePoseFromCloud_Response_calculation_successful
{
public:
  explicit Init_CalculatePoseFromCloud_Response_calculation_successful(::robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response & msg)
  : msg_(msg)
  {}
  ::robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response calculation_successful(::robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response::_calculation_successful_type arg)
  {
    msg_.calculation_successful = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response msg_;
};

class Init_CalculatePoseFromCloud_Response_pose
{
public:
  Init_CalculatePoseFromCloud_Response_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CalculatePoseFromCloud_Response_calculation_successful pose(::robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_CalculatePoseFromCloud_Response_calculation_successful(msg_);
  }

private:
  ::robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_swiss_knife_msgs::srv::CalculatePoseFromCloud_Response>()
{
  return robot_swiss_knife_msgs::srv::builder::Init_CalculatePoseFromCloud_Response_pose();
}

}  // namespace robot_swiss_knife_msgs

#endif  // ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__CALCULATE_POSE_FROM_CLOUD__BUILDER_HPP_
