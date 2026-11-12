// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_swiss_knife_msgs:msg/KnowledgeItem.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__KNOWLEDGE_ITEM__BUILDER_HPP_
#define ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__KNOWLEDGE_ITEM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_swiss_knife_msgs/msg/detail/knowledge_item__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_swiss_knife_msgs
{

namespace msg
{

namespace builder
{

class Init_KnowledgeItem_value
{
public:
  explicit Init_KnowledgeItem_value(::robot_swiss_knife_msgs::msg::KnowledgeItem & msg)
  : msg_(msg)
  {}
  ::robot_swiss_knife_msgs::msg::KnowledgeItem value(::robot_swiss_knife_msgs::msg::KnowledgeItem::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_swiss_knife_msgs::msg::KnowledgeItem msg_;
};

class Init_KnowledgeItem_name
{
public:
  Init_KnowledgeItem_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KnowledgeItem_value name(::robot_swiss_knife_msgs::msg::KnowledgeItem::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_KnowledgeItem_value(msg_);
  }

private:
  ::robot_swiss_knife_msgs::msg::KnowledgeItem msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_swiss_knife_msgs::msg::KnowledgeItem>()
{
  return robot_swiss_knife_msgs::msg::builder::Init_KnowledgeItem_name();
}

}  // namespace robot_swiss_knife_msgs

#endif  // ROBOT_SWISS_KNIFE_MSGS__MSG__DETAIL__KNOWLEDGE_ITEM__BUILDER_HPP_
