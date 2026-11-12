// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_swiss_knife_msgs:srv/EstimateAnthropometricParameters.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__ESTIMATE_ANTHROPOMETRIC_PARAMETERS__BUILDER_HPP_
#define ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__ESTIMATE_ANTHROPOMETRIC_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_swiss_knife_msgs/srv/detail/estimate_anthropometric_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_swiss_knife_msgs
{

namespace srv
{

namespace builder
{

class Init_EstimateAnthropometricParameters_Request_image
{
public:
  Init_EstimateAnthropometricParameters_Request_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Request image(::robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Request::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Request>()
{
  return robot_swiss_knife_msgs::srv::builder::Init_EstimateAnthropometricParameters_Request_image();
}

}  // namespace robot_swiss_knife_msgs


namespace robot_swiss_knife_msgs
{

namespace srv
{

namespace builder
{

class Init_EstimateAnthropometricParameters_Response_mass_kg
{
public:
  explicit Init_EstimateAnthropometricParameters_Response_mass_kg(::robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response & msg)
  : msg_(msg)
  {}
  ::robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response mass_kg(::robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response::_mass_kg_type arg)
  {
    msg_.mass_kg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response msg_;
};

class Init_EstimateAnthropometricParameters_Response_height_cm
{
public:
  Init_EstimateAnthropometricParameters_Response_height_cm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstimateAnthropometricParameters_Response_mass_kg height_cm(::robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response::_height_cm_type arg)
  {
    msg_.height_cm = std::move(arg);
    return Init_EstimateAnthropometricParameters_Response_mass_kg(msg_);
  }

private:
  ::robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_swiss_knife_msgs::srv::EstimateAnthropometricParameters_Response>()
{
  return robot_swiss_knife_msgs::srv::builder::Init_EstimateAnthropometricParameters_Response_height_cm();
}

}  // namespace robot_swiss_knife_msgs

#endif  // ROBOT_SWISS_KNIFE_MSGS__SRV__DETAIL__ESTIMATE_ANTHROPOMETRIC_PARAMETERS__BUILDER_HPP_
