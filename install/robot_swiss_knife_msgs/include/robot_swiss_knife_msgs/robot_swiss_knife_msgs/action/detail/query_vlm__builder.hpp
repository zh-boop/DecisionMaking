// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_swiss_knife_msgs:action/QueryVLM.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_SWISS_KNIFE_MSGS__ACTION__DETAIL__QUERY_VLM__BUILDER_HPP_
#define ROBOT_SWISS_KNIFE_MSGS__ACTION__DETAIL__QUERY_VLM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_swiss_knife_msgs/action/detail/query_vlm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_swiss_knife_msgs
{

namespace action
{

namespace builder
{

class Init_QueryVLM_Goal_query
{
public:
  explicit Init_QueryVLM_Goal_query(::robot_swiss_knife_msgs::action::QueryVLM_Goal & msg)
  : msg_(msg)
  {}
  ::robot_swiss_knife_msgs::action::QueryVLM_Goal query(::robot_swiss_knife_msgs::action::QueryVLM_Goal::_query_type arg)
  {
    msg_.query = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_swiss_knife_msgs::action::QueryVLM_Goal msg_;
};

class Init_QueryVLM_Goal_image
{
public:
  Init_QueryVLM_Goal_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QueryVLM_Goal_query image(::robot_swiss_knife_msgs::action::QueryVLM_Goal::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_QueryVLM_Goal_query(msg_);
  }

private:
  ::robot_swiss_knife_msgs::action::QueryVLM_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_swiss_knife_msgs::action::QueryVLM_Goal>()
{
  return robot_swiss_knife_msgs::action::builder::Init_QueryVLM_Goal_image();
}

}  // namespace robot_swiss_knife_msgs


namespace robot_swiss_knife_msgs
{

namespace action
{

namespace builder
{

class Init_QueryVLM_Result_answer
{
public:
  explicit Init_QueryVLM_Result_answer(::robot_swiss_knife_msgs::action::QueryVLM_Result & msg)
  : msg_(msg)
  {}
  ::robot_swiss_knife_msgs::action::QueryVLM_Result answer(::robot_swiss_knife_msgs::action::QueryVLM_Result::_answer_type arg)
  {
    msg_.answer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_swiss_knife_msgs::action::QueryVLM_Result msg_;
};

class Init_QueryVLM_Result_query_status
{
public:
  Init_QueryVLM_Result_query_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QueryVLM_Result_answer query_status(::robot_swiss_knife_msgs::action::QueryVLM_Result::_query_status_type arg)
  {
    msg_.query_status = std::move(arg);
    return Init_QueryVLM_Result_answer(msg_);
  }

private:
  ::robot_swiss_knife_msgs::action::QueryVLM_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_swiss_knife_msgs::action::QueryVLM_Result>()
{
  return robot_swiss_knife_msgs::action::builder::Init_QueryVLM_Result_query_status();
}

}  // namespace robot_swiss_knife_msgs


namespace robot_swiss_knife_msgs
{

namespace action
{

namespace builder
{

class Init_QueryVLM_Feedback_feedback
{
public:
  Init_QueryVLM_Feedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_swiss_knife_msgs::action::QueryVLM_Feedback feedback(::robot_swiss_knife_msgs::action::QueryVLM_Feedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_swiss_knife_msgs::action::QueryVLM_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_swiss_knife_msgs::action::QueryVLM_Feedback>()
{
  return robot_swiss_knife_msgs::action::builder::Init_QueryVLM_Feedback_feedback();
}

}  // namespace robot_swiss_knife_msgs


namespace robot_swiss_knife_msgs
{

namespace action
{

namespace builder
{

class Init_QueryVLM_SendGoal_Request_goal
{
public:
  explicit Init_QueryVLM_SendGoal_Request_goal(::robot_swiss_knife_msgs::action::QueryVLM_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::robot_swiss_knife_msgs::action::QueryVLM_SendGoal_Request goal(::robot_swiss_knife_msgs::action::QueryVLM_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_swiss_knife_msgs::action::QueryVLM_SendGoal_Request msg_;
};

class Init_QueryVLM_SendGoal_Request_goal_id
{
public:
  Init_QueryVLM_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QueryVLM_SendGoal_Request_goal goal_id(::robot_swiss_knife_msgs::action::QueryVLM_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_QueryVLM_SendGoal_Request_goal(msg_);
  }

private:
  ::robot_swiss_knife_msgs::action::QueryVLM_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_swiss_knife_msgs::action::QueryVLM_SendGoal_Request>()
{
  return robot_swiss_knife_msgs::action::builder::Init_QueryVLM_SendGoal_Request_goal_id();
}

}  // namespace robot_swiss_knife_msgs


namespace robot_swiss_knife_msgs
{

namespace action
{

namespace builder
{

class Init_QueryVLM_SendGoal_Response_stamp
{
public:
  explicit Init_QueryVLM_SendGoal_Response_stamp(::robot_swiss_knife_msgs::action::QueryVLM_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::robot_swiss_knife_msgs::action::QueryVLM_SendGoal_Response stamp(::robot_swiss_knife_msgs::action::QueryVLM_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_swiss_knife_msgs::action::QueryVLM_SendGoal_Response msg_;
};

class Init_QueryVLM_SendGoal_Response_accepted
{
public:
  Init_QueryVLM_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QueryVLM_SendGoal_Response_stamp accepted(::robot_swiss_knife_msgs::action::QueryVLM_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_QueryVLM_SendGoal_Response_stamp(msg_);
  }

private:
  ::robot_swiss_knife_msgs::action::QueryVLM_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_swiss_knife_msgs::action::QueryVLM_SendGoal_Response>()
{
  return robot_swiss_knife_msgs::action::builder::Init_QueryVLM_SendGoal_Response_accepted();
}

}  // namespace robot_swiss_knife_msgs


namespace robot_swiss_knife_msgs
{

namespace action
{

namespace builder
{

class Init_QueryVLM_GetResult_Request_goal_id
{
public:
  Init_QueryVLM_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_swiss_knife_msgs::action::QueryVLM_GetResult_Request goal_id(::robot_swiss_knife_msgs::action::QueryVLM_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_swiss_knife_msgs::action::QueryVLM_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_swiss_knife_msgs::action::QueryVLM_GetResult_Request>()
{
  return robot_swiss_knife_msgs::action::builder::Init_QueryVLM_GetResult_Request_goal_id();
}

}  // namespace robot_swiss_knife_msgs


namespace robot_swiss_knife_msgs
{

namespace action
{

namespace builder
{

class Init_QueryVLM_GetResult_Response_result
{
public:
  explicit Init_QueryVLM_GetResult_Response_result(::robot_swiss_knife_msgs::action::QueryVLM_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::robot_swiss_knife_msgs::action::QueryVLM_GetResult_Response result(::robot_swiss_knife_msgs::action::QueryVLM_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_swiss_knife_msgs::action::QueryVLM_GetResult_Response msg_;
};

class Init_QueryVLM_GetResult_Response_status
{
public:
  Init_QueryVLM_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QueryVLM_GetResult_Response_result status(::robot_swiss_knife_msgs::action::QueryVLM_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_QueryVLM_GetResult_Response_result(msg_);
  }

private:
  ::robot_swiss_knife_msgs::action::QueryVLM_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_swiss_knife_msgs::action::QueryVLM_GetResult_Response>()
{
  return robot_swiss_knife_msgs::action::builder::Init_QueryVLM_GetResult_Response_status();
}

}  // namespace robot_swiss_knife_msgs


namespace robot_swiss_knife_msgs
{

namespace action
{

namespace builder
{

class Init_QueryVLM_FeedbackMessage_feedback
{
public:
  explicit Init_QueryVLM_FeedbackMessage_feedback(::robot_swiss_knife_msgs::action::QueryVLM_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::robot_swiss_knife_msgs::action::QueryVLM_FeedbackMessage feedback(::robot_swiss_knife_msgs::action::QueryVLM_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_swiss_knife_msgs::action::QueryVLM_FeedbackMessage msg_;
};

class Init_QueryVLM_FeedbackMessage_goal_id
{
public:
  Init_QueryVLM_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QueryVLM_FeedbackMessage_feedback goal_id(::robot_swiss_knife_msgs::action::QueryVLM_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_QueryVLM_FeedbackMessage_feedback(msg_);
  }

private:
  ::robot_swiss_knife_msgs::action::QueryVLM_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_swiss_knife_msgs::action::QueryVLM_FeedbackMessage>()
{
  return robot_swiss_knife_msgs::action::builder::Init_QueryVLM_FeedbackMessage_goal_id();
}

}  // namespace robot_swiss_knife_msgs

#endif  // ROBOT_SWISS_KNIFE_MSGS__ACTION__DETAIL__QUERY_VLM__BUILDER_HPP_
