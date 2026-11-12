// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_swiss_knife_msgs:srv/GetObjectPose.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__GET_OBJECT_POSE__BUILDER_HPP_
#define ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__GET_OBJECT_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_swiss_knife_msgs/srv/detail/get_object_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_swiss_knife_msgs
{

namespace srv
{

namespace builder
{

class Init_GetObjectPose_Request_object_category
{
public:
  Init_GetObjectPose_Request_object_category()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_swiss_knife_msgs::srv::GetObjectPose_Request object_category(::robot_swiss_knife_msgs::srv::GetObjectPose_Request::_object_category_type arg)
  {
    msg_.object_category = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_swiss_knife_msgs::srv::GetObjectPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_swiss_knife_msgs::srv::GetObjectPose_Request>()
{
  return robot_swiss_knife_msgs::srv::builder::Init_GetObjectPose_Request_object_category();
}

}  // namespace robot_swiss_knife_msgs


namespace robot_swiss_knife_msgs
{

namespace srv
{

namespace builder
{

class Init_GetObjectPose_Response_success
{
public:
  explicit Init_GetObjectPose_Response_success(::robot_swiss_knife_msgs::srv::GetObjectPose_Response & msg)
  : msg_(msg)
  {}
  ::robot_swiss_knife_msgs::srv::GetObjectPose_Response success(::robot_swiss_knife_msgs::srv::GetObjectPose_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_swiss_knife_msgs::srv::GetObjectPose_Response msg_;
};

class Init_GetObjectPose_Response_tracking_state
{
public:
  explicit Init_GetObjectPose_Response_tracking_state(::robot_swiss_knife_msgs::srv::GetObjectPose_Response & msg)
  : msg_(msg)
  {}
  Init_GetObjectPose_Response_success tracking_state(::robot_swiss_knife_msgs::srv::GetObjectPose_Response::_tracking_state_type arg)
  {
    msg_.tracking_state = std::move(arg);
    return Init_GetObjectPose_Response_success(msg_);
  }

private:
  ::robot_swiss_knife_msgs::srv::GetObjectPose_Response msg_;
};

class Init_GetObjectPose_Response_pose
{
public:
  Init_GetObjectPose_Response_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetObjectPose_Response_tracking_state pose(::robot_swiss_knife_msgs::srv::GetObjectPose_Response::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_GetObjectPose_Response_tracking_state(msg_);
  }

private:
  ::robot_swiss_knife_msgs::srv::GetObjectPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_swiss_knife_msgs::srv::GetObjectPose_Response>()
{
  return robot_swiss_knife_msgs::srv::builder::Init_GetObjectPose_Response_pose();
}

}  // namespace robot_swiss_knife_msgs

#endif  // ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__GET_OBJECT_POSE__BUILDER_HPP_
