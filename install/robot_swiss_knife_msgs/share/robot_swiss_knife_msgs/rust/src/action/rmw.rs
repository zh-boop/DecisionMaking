
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__QueryVLM_Goal() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__action__QueryVLM_Goal__init(msg: *mut QueryVLM_Goal) -> bool;
    fn robot_swiss_knife_msgs__action__QueryVLM_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<QueryVLM_Goal>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__action__QueryVLM_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<QueryVLM_Goal>);
    fn robot_swiss_knife_msgs__action__QueryVLM_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<QueryVLM_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<QueryVLM_Goal>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__action__QueryVLM_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct QueryVLM_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub image: sensor_msgs::msg::rmw::Image,


    // This member is not documented.
    #[allow(missing_docs)]
    pub query: rosidl_runtime_rs::String,

}



impl Default for QueryVLM_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__action__QueryVLM_Goal__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__action__QueryVLM_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for QueryVLM_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__QueryVLM_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__QueryVLM_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__QueryVLM_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for QueryVLM_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for QueryVLM_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/action/QueryVLM_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__QueryVLM_Goal() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__QueryVLM_Result() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__action__QueryVLM_Result__init(msg: *mut QueryVLM_Result) -> bool;
    fn robot_swiss_knife_msgs__action__QueryVLM_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<QueryVLM_Result>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__action__QueryVLM_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<QueryVLM_Result>);
    fn robot_swiss_knife_msgs__action__QueryVLM_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<QueryVLM_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<QueryVLM_Result>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__action__QueryVLM_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct QueryVLM_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub query_status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub answer: rosidl_runtime_rs::String,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__action__QueryVLM_Result__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__action__QueryVLM_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for QueryVLM_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__QueryVLM_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__QueryVLM_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__QueryVLM_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for QueryVLM_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for QueryVLM_Result where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/action/QueryVLM_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__QueryVLM_Result() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__QueryVLM_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__action__QueryVLM_Feedback__init(msg: *mut QueryVLM_Feedback) -> bool;
    fn robot_swiss_knife_msgs__action__QueryVLM_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<QueryVLM_Feedback>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__action__QueryVLM_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<QueryVLM_Feedback>);
    fn robot_swiss_knife_msgs__action__QueryVLM_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<QueryVLM_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<QueryVLM_Feedback>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__action__QueryVLM_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct QueryVLM_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: rosidl_runtime_rs::String,

}



impl Default for QueryVLM_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__action__QueryVLM_Feedback__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__action__QueryVLM_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for QueryVLM_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__QueryVLM_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__QueryVLM_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__QueryVLM_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for QueryVLM_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for QueryVLM_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/action/QueryVLM_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__QueryVLM_Feedback() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__QueryVLM_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__action__QueryVLM_FeedbackMessage__init(msg: *mut QueryVLM_FeedbackMessage) -> bool;
    fn robot_swiss_knife_msgs__action__QueryVLM_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<QueryVLM_FeedbackMessage>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__action__QueryVLM_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<QueryVLM_FeedbackMessage>);
    fn robot_swiss_knife_msgs__action__QueryVLM_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<QueryVLM_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<QueryVLM_FeedbackMessage>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__action__QueryVLM_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct QueryVLM_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::QueryVLM_Feedback,

}



impl Default for QueryVLM_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__action__QueryVLM_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__action__QueryVLM_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for QueryVLM_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__QueryVLM_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__QueryVLM_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__QueryVLM_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for QueryVLM_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for QueryVLM_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/action/QueryVLM_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__QueryVLM_FeedbackMessage() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__GetTaskPlan_Goal() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__action__GetTaskPlan_Goal__init(msg: *mut GetTaskPlan_Goal) -> bool;
    fn robot_swiss_knife_msgs__action__GetTaskPlan_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetTaskPlan_Goal>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__action__GetTaskPlan_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetTaskPlan_Goal>);
    fn robot_swiss_knife_msgs__action__GetTaskPlan_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetTaskPlan_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<GetTaskPlan_Goal>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__action__GetTaskPlan_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTaskPlan_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetTaskPlan_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__action__GetTaskPlan_Goal__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__action__GetTaskPlan_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetTaskPlan_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__GetTaskPlan_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__GetTaskPlan_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__GetTaskPlan_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetTaskPlan_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetTaskPlan_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/action/GetTaskPlan_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__GetTaskPlan_Goal() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__GetTaskPlan_Result() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__action__GetTaskPlan_Result__init(msg: *mut GetTaskPlan_Result) -> bool;
    fn robot_swiss_knife_msgs__action__GetTaskPlan_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetTaskPlan_Result>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__action__GetTaskPlan_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetTaskPlan_Result>);
    fn robot_swiss_knife_msgs__action__GetTaskPlan_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetTaskPlan_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<GetTaskPlan_Result>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__action__GetTaskPlan_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTaskPlan_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub plan: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Action>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for GetTaskPlan_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__action__GetTaskPlan_Result__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__action__GetTaskPlan_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetTaskPlan_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__GetTaskPlan_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__GetTaskPlan_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__GetTaskPlan_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetTaskPlan_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetTaskPlan_Result where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/action/GetTaskPlan_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__GetTaskPlan_Result() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__GetTaskPlan_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__action__GetTaskPlan_Feedback__init(msg: *mut GetTaskPlan_Feedback) -> bool;
    fn robot_swiss_knife_msgs__action__GetTaskPlan_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetTaskPlan_Feedback>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__action__GetTaskPlan_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetTaskPlan_Feedback>);
    fn robot_swiss_knife_msgs__action__GetTaskPlan_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetTaskPlan_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<GetTaskPlan_Feedback>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__action__GetTaskPlan_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTaskPlan_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: rosidl_runtime_rs::String,

}



impl Default for GetTaskPlan_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__action__GetTaskPlan_Feedback__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__action__GetTaskPlan_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetTaskPlan_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__GetTaskPlan_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__GetTaskPlan_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__GetTaskPlan_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetTaskPlan_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetTaskPlan_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/action/GetTaskPlan_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__GetTaskPlan_Feedback() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__GetTaskPlan_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__action__GetTaskPlan_FeedbackMessage__init(msg: *mut GetTaskPlan_FeedbackMessage) -> bool;
    fn robot_swiss_knife_msgs__action__GetTaskPlan_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetTaskPlan_FeedbackMessage>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__action__GetTaskPlan_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetTaskPlan_FeedbackMessage>);
    fn robot_swiss_knife_msgs__action__GetTaskPlan_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetTaskPlan_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<GetTaskPlan_FeedbackMessage>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__action__GetTaskPlan_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTaskPlan_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::GetTaskPlan_Feedback,

}



impl Default for GetTaskPlan_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__action__GetTaskPlan_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__action__GetTaskPlan_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetTaskPlan_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__GetTaskPlan_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__GetTaskPlan_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__GetTaskPlan_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetTaskPlan_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetTaskPlan_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/action/GetTaskPlan_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__GetTaskPlan_FeedbackMessage() }
  }
}




#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Request__init(msg: *mut QueryVLM_SendGoal_Request) -> bool;
    fn robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<QueryVLM_SendGoal_Request>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<QueryVLM_SendGoal_Request>);
    fn robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<QueryVLM_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<QueryVLM_SendGoal_Request>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct QueryVLM_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::QueryVLM_Goal,

}



impl Default for QueryVLM_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for QueryVLM_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for QueryVLM_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for QueryVLM_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/action/QueryVLM_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Request() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Response__init(msg: *mut QueryVLM_SendGoal_Response) -> bool;
    fn robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<QueryVLM_SendGoal_Response>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<QueryVLM_SendGoal_Response>);
    fn robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<QueryVLM_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<QueryVLM_SendGoal_Response>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct QueryVLM_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for QueryVLM_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for QueryVLM_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for QueryVLM_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for QueryVLM_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/action/QueryVLM_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__QueryVLM_SendGoal_Response() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__QueryVLM_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__action__QueryVLM_GetResult_Request__init(msg: *mut QueryVLM_GetResult_Request) -> bool;
    fn robot_swiss_knife_msgs__action__QueryVLM_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<QueryVLM_GetResult_Request>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__action__QueryVLM_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<QueryVLM_GetResult_Request>);
    fn robot_swiss_knife_msgs__action__QueryVLM_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<QueryVLM_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<QueryVLM_GetResult_Request>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__action__QueryVLM_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct QueryVLM_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for QueryVLM_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__action__QueryVLM_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__action__QueryVLM_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for QueryVLM_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__QueryVLM_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__QueryVLM_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__QueryVLM_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for QueryVLM_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for QueryVLM_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/action/QueryVLM_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__QueryVLM_GetResult_Request() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__QueryVLM_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__action__QueryVLM_GetResult_Response__init(msg: *mut QueryVLM_GetResult_Response) -> bool;
    fn robot_swiss_knife_msgs__action__QueryVLM_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<QueryVLM_GetResult_Response>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__action__QueryVLM_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<QueryVLM_GetResult_Response>);
    fn robot_swiss_knife_msgs__action__QueryVLM_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<QueryVLM_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<QueryVLM_GetResult_Response>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__action__QueryVLM_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct QueryVLM_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::QueryVLM_Result,

}



impl Default for QueryVLM_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__action__QueryVLM_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__action__QueryVLM_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for QueryVLM_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__QueryVLM_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__QueryVLM_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__QueryVLM_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for QueryVLM_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for QueryVLM_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/action/QueryVLM_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__QueryVLM_GetResult_Response() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Request__init(msg: *mut GetTaskPlan_SendGoal_Request) -> bool;
    fn robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetTaskPlan_SendGoal_Request>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetTaskPlan_SendGoal_Request>);
    fn robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetTaskPlan_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetTaskPlan_SendGoal_Request>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTaskPlan_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::GetTaskPlan_Goal,

}



impl Default for GetTaskPlan_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetTaskPlan_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetTaskPlan_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetTaskPlan_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/action/GetTaskPlan_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Request() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Response__init(msg: *mut GetTaskPlan_SendGoal_Response) -> bool;
    fn robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetTaskPlan_SendGoal_Response>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetTaskPlan_SendGoal_Response>);
    fn robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetTaskPlan_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetTaskPlan_SendGoal_Response>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTaskPlan_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for GetTaskPlan_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetTaskPlan_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetTaskPlan_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetTaskPlan_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/action/GetTaskPlan_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__GetTaskPlan_SendGoal_Response() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Request__init(msg: *mut GetTaskPlan_GetResult_Request) -> bool;
    fn robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetTaskPlan_GetResult_Request>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetTaskPlan_GetResult_Request>);
    fn robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetTaskPlan_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetTaskPlan_GetResult_Request>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTaskPlan_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for GetTaskPlan_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetTaskPlan_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetTaskPlan_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetTaskPlan_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/action/GetTaskPlan_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Request() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Response__init(msg: *mut GetTaskPlan_GetResult_Response) -> bool;
    fn robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetTaskPlan_GetResult_Response>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetTaskPlan_GetResult_Response>);
    fn robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetTaskPlan_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetTaskPlan_GetResult_Response>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTaskPlan_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::GetTaskPlan_Result,

}



impl Default for GetTaskPlan_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetTaskPlan_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetTaskPlan_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetTaskPlan_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/action/GetTaskPlan_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__action__GetTaskPlan_GetResult_Response() }
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


