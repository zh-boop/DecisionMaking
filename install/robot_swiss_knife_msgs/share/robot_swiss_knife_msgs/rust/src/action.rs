
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to robot_swiss_knife_msgs__action__QueryVLM_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct QueryVLM_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub image: sensor_msgs::msg::Image,


    // This member is not documented.
    #[allow(missing_docs)]
    pub query: std::string::String,

}



impl Default for QueryVLM_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::QueryVLM_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for QueryVLM_Goal {
  type RmwMsg = super::action::rmw::QueryVLM_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        image: sensor_msgs::msg::Image::into_rmw_message(std::borrow::Cow::Owned(msg.image)).into_owned(),
        query: msg.query.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        image: sensor_msgs::msg::Image::into_rmw_message(std::borrow::Cow::Borrowed(&msg.image)).into_owned(),
        query: msg.query.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      image: sensor_msgs::msg::Image::from_rmw_message(msg.image),
      query: msg.query.to_string(),
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__action__QueryVLM_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct QueryVLM_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub query_status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub answer: std::string::String,

}

impl QueryVLM_Result {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const QUERY_SUCCESS: i8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const QUERY_FAILURE: i8 = 1;

}


impl Default for QueryVLM_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::QueryVLM_Result::default())
  }
}

impl rosidl_runtime_rs::Message for QueryVLM_Result {
  type RmwMsg = super::action::rmw::QueryVLM_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        query_status: msg.query_status,
        answer: msg.answer.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      query_status: msg.query_status,
        answer: msg.answer.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      query_status: msg.query_status,
      answer: msg.answer.to_string(),
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__action__QueryVLM_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct QueryVLM_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: std::string::String,

}



impl Default for QueryVLM_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::QueryVLM_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for QueryVLM_Feedback {
  type RmwMsg = super::action::rmw::QueryVLM_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        feedback: msg.feedback.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        feedback: msg.feedback.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      feedback: msg.feedback.to_string(),
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__action__QueryVLM_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct QueryVLM_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::QueryVLM_Feedback,

}



impl Default for QueryVLM_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::QueryVLM_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for QueryVLM_FeedbackMessage {
  type RmwMsg = super::action::rmw::QueryVLM_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::QueryVLM_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::QueryVLM_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::QueryVLM_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__action__GetTaskPlan_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTaskPlan_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetTaskPlan_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GetTaskPlan_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for GetTaskPlan_Goal {
  type RmwMsg = super::action::rmw::GetTaskPlan_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__action__GetTaskPlan_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTaskPlan_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub plan: Vec<super::msg::Action>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for GetTaskPlan_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GetTaskPlan_Result::default())
  }
}

impl rosidl_runtime_rs::Message for GetTaskPlan_Result {
  type RmwMsg = super::action::rmw::GetTaskPlan_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        plan: msg.plan
          .into_iter()
          .map(|elem| super::msg::Action::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        plan: msg.plan
          .iter()
          .map(|elem| super::msg::Action::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      plan: msg.plan
          .into_iter()
          .map(super::msg::Action::from_rmw_message)
          .collect(),
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__action__GetTaskPlan_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTaskPlan_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: std::string::String,

}



impl Default for GetTaskPlan_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GetTaskPlan_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for GetTaskPlan_Feedback {
  type RmwMsg = super::action::rmw::GetTaskPlan_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        feedback: msg.feedback.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        feedback: msg.feedback.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      feedback: msg.feedback.to_string(),
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__action__GetTaskPlan_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTaskPlan_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::GetTaskPlan_Feedback,

}



impl Default for GetTaskPlan_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GetTaskPlan_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for GetTaskPlan_FeedbackMessage {
  type RmwMsg = super::action::rmw::GetTaskPlan_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::GetTaskPlan_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::GetTaskPlan_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::GetTaskPlan_Feedback::from_rmw_message(msg.feedback),
    }
  }
}






// Corresponds to robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct QueryVLM_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::QueryVLM_Goal,

}



impl Default for QueryVLM_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::QueryVLM_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for QueryVLM_SendGoal_Request {
  type RmwMsg = super::action::rmw::QueryVLM_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::QueryVLM_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::QueryVLM_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::QueryVLM_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct QueryVLM_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for QueryVLM_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::QueryVLM_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for QueryVLM_SendGoal_Response {
  type RmwMsg = super::action::rmw::QueryVLM_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__action__QueryVLM_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct QueryVLM_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for QueryVLM_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::QueryVLM_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for QueryVLM_GetResult_Request {
  type RmwMsg = super::action::rmw::QueryVLM_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__action__QueryVLM_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct QueryVLM_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::QueryVLM_Result,

}



impl Default for QueryVLM_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::QueryVLM_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for QueryVLM_GetResult_Response {
  type RmwMsg = super::action::rmw::QueryVLM_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::QueryVLM_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::QueryVLM_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::QueryVLM_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTaskPlan_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::GetTaskPlan_Goal,

}



impl Default for GetTaskPlan_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GetTaskPlan_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetTaskPlan_SendGoal_Request {
  type RmwMsg = super::action::rmw::GetTaskPlan_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::GetTaskPlan_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::GetTaskPlan_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::GetTaskPlan_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTaskPlan_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for GetTaskPlan_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GetTaskPlan_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetTaskPlan_SendGoal_Response {
  type RmwMsg = super::action::rmw::GetTaskPlan_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTaskPlan_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for GetTaskPlan_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GetTaskPlan_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetTaskPlan_GetResult_Request {
  type RmwMsg = super::action::rmw::GetTaskPlan_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTaskPlan_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::GetTaskPlan_Result,

}



impl Default for GetTaskPlan_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GetTaskPlan_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetTaskPlan_GetResult_Response {
  type RmwMsg = super::action::rmw::GetTaskPlan_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::GetTaskPlan_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::GetTaskPlan_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::GetTaskPlan_Result::from_rmw_message(msg.result),
    }
  }
}






#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_swiss_knife_msgs__action__QueryVLM_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to robot_swiss_knife_msgs__action__QueryVLM_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct QueryVLM_SendGoal;

impl rosidl_runtime_rs::Service for QueryVLM_SendGoal {
    type Request = QueryVLM_SendGoal_Request;
    type Response = QueryVLM_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_swiss_knife_msgs__action__QueryVLM_SendGoal() }
    }
}




#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_swiss_knife_msgs__action__QueryVLM_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to robot_swiss_knife_msgs__action__QueryVLM_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct QueryVLM_GetResult;

impl rosidl_runtime_rs::Service for QueryVLM_GetResult {
    type Request = QueryVLM_GetResult_Request;
    type Response = QueryVLM_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_swiss_knife_msgs__action__QueryVLM_GetResult() }
    }
}




#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct GetTaskPlan_SendGoal;

impl rosidl_runtime_rs::Service for GetTaskPlan_SendGoal {
    type Request = GetTaskPlan_SendGoal_Request;
    type Response = GetTaskPlan_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal() }
    }
}




#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_swiss_knife_msgs__action__GetTaskPlan_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to robot_swiss_knife_msgs__action__GetTaskPlan_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct GetTaskPlan_GetResult;

impl rosidl_runtime_rs::Service for GetTaskPlan_GetResult {
    type Request = GetTaskPlan_GetResult_Request;
    type Response = GetTaskPlan_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_swiss_knife_msgs__action__GetTaskPlan_GetResult() }
    }
}






#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__robot_swiss_knife_msgs__action__QueryVLM() -> *const std::ffi::c_void;
}

// Corresponds to robot_swiss_knife_msgs__action__QueryVLM
#[allow(missing_docs, non_camel_case_types)]
pub struct QueryVLM;

impl rosidl_runtime_rs::Action for QueryVLM {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = QueryVLM_Goal;

  /// The result message defined in the action definition.
  type Result = QueryVLM_Result;

  /// The feedback message defined in the action definition.
  type Feedback = QueryVLM_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::QueryVLM_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::QueryVLM_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::QueryVLM_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__robot_swiss_knife_msgs__action__QueryVLM() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::QueryVLM_Goal,
  ) -> super::action::rmw::QueryVLM_SendGoal_Request {
   super::action::rmw::QueryVLM_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::QueryVLM_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::QueryVLM_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::QueryVLM_SendGoal_Response {
   super::action::rmw::QueryVLM_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::QueryVLM_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::QueryVLM_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::QueryVLM_Feedback,
  ) -> super::action::rmw::QueryVLM_FeedbackMessage {
    let mut message = super::action::rmw::QueryVLM_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::QueryVLM_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::QueryVLM_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::QueryVLM_GetResult_Request {
   super::action::rmw::QueryVLM_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::QueryVLM_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::QueryVLM_Result,
  ) -> super::action::rmw::QueryVLM_GetResult_Response {
   super::action::rmw::QueryVLM_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::QueryVLM_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::QueryVLM_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__robot_swiss_knife_msgs__action__GetTaskPlan() -> *const std::ffi::c_void;
}

// Corresponds to robot_swiss_knife_msgs__action__GetTaskPlan
#[allow(missing_docs, non_camel_case_types)]
pub struct GetTaskPlan;

impl rosidl_runtime_rs::Action for GetTaskPlan {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = GetTaskPlan_Goal;

  /// The result message defined in the action definition.
  type Result = GetTaskPlan_Result;

  /// The feedback message defined in the action definition.
  type Feedback = GetTaskPlan_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::GetTaskPlan_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::GetTaskPlan_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::GetTaskPlan_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__robot_swiss_knife_msgs__action__GetTaskPlan() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::GetTaskPlan_Goal,
  ) -> super::action::rmw::GetTaskPlan_SendGoal_Request {
   super::action::rmw::GetTaskPlan_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::GetTaskPlan_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::GetTaskPlan_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::GetTaskPlan_SendGoal_Response {
   super::action::rmw::GetTaskPlan_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::GetTaskPlan_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::GetTaskPlan_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::GetTaskPlan_Feedback,
  ) -> super::action::rmw::GetTaskPlan_FeedbackMessage {
    let mut message = super::action::rmw::GetTaskPlan_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::GetTaskPlan_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::GetTaskPlan_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::GetTaskPlan_GetResult_Request {
   super::action::rmw::GetTaskPlan_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::GetTaskPlan_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::GetTaskPlan_Result,
  ) -> super::action::rmw::GetTaskPlan_GetResult_Response {
   super::action::rmw::GetTaskPlan_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::GetTaskPlan_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::GetTaskPlan_Result,
  ) {
    (response.status, response.result)
  }
}


