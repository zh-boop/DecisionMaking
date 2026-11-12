#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__msg__KnowledgeItem() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__msg__KnowledgeItem__init(msg: *mut KnowledgeItem) -> bool;
    fn robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<KnowledgeItem>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<KnowledgeItem>);
    fn robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<KnowledgeItem>, out_seq: *mut rosidl_runtime_rs::Sequence<KnowledgeItem>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__msg__KnowledgeItem
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KnowledgeItem {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: rosidl_runtime_rs::String,

}



impl Default for KnowledgeItem {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__msg__KnowledgeItem__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__msg__KnowledgeItem__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for KnowledgeItem {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__msg__KnowledgeItem__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for KnowledgeItem {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for KnowledgeItem where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/msg/KnowledgeItem";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__msg__KnowledgeItem() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__msg__Fluent() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__msg__Fluent__init(msg: *mut Fluent) -> bool;
    fn robot_swiss_knife_msgs__msg__Fluent__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Fluent>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__msg__Fluent__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Fluent>);
    fn robot_swiss_knife_msgs__msg__Fluent__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Fluent>, out_seq: *mut rosidl_runtime_rs::Sequence<Fluent>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__msg__Fluent
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Fluent {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub params: rosidl_runtime_rs::Sequence<super::super::msg::rmw::KnowledgeItem>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: rosidl_runtime_rs::String,

}



impl Default for Fluent {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__msg__Fluent__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__msg__Fluent__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Fluent {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__msg__Fluent__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__msg__Fluent__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__msg__Fluent__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Fluent {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Fluent where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/msg/Fluent";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__msg__Fluent() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__msg__Action() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__msg__Action__init(msg: *mut Action) -> bool;
    fn robot_swiss_knife_msgs__msg__Action__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Action>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__msg__Action__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Action>);
    fn robot_swiss_knife_msgs__msg__Action__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Action>, out_seq: *mut rosidl_runtime_rs::Sequence<Action>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__msg__Action
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Action {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub params: rosidl_runtime_rs::Sequence<super::super::msg::rmw::KnowledgeItem>,

}



impl Default for Action {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__msg__Action__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__msg__Action__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Action {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__msg__Action__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__msg__Action__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__msg__Action__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Action {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Action where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/msg/Action";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__msg__Action() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__msg__ObjectView() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__msg__ObjectView__init(msg: *mut ObjectView) -> bool;
    fn robot_swiss_knife_msgs__msg__ObjectView__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ObjectView>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__msg__ObjectView__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ObjectView>);
    fn robot_swiss_knife_msgs__msg__ObjectView__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ObjectView>, out_seq: *mut rosidl_runtime_rs::Sequence<ObjectView>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__msg__ObjectView
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message definition adapted from https://github.com/b-it-bots/mas_perception_msgs/blob/noetic/msg/ObjectView.msg

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ObjectView {

    // This member is not documented.
    #[allow(missing_docs)]
    pub image: sensor_msgs::msg::rmw::Image,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mask: sensor_msgs::msg::rmw::Image,


    // This member is not documented.
    #[allow(missing_docs)]
    pub point_cloud: sensor_msgs::msg::rmw::PointCloud2,

}



impl Default for ObjectView {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__msg__ObjectView__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__msg__ObjectView__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ObjectView {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__msg__ObjectView__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__msg__ObjectView__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__msg__ObjectView__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ObjectView {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ObjectView where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/msg/ObjectView";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__msg__ObjectView() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__msg__Object() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__msg__Object__init(msg: *mut Object) -> bool;
    fn robot_swiss_knife_msgs__msg__Object__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Object>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__msg__Object__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Object>);
    fn robot_swiss_knife_msgs__msg__Object__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Object>, out_seq: *mut rosidl_runtime_rs::Sequence<Object>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__msg__Object
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message definition adapted from https://github.com/b-it-bots/mas_perception_msgs/blob/noetic/msg/Object.msg

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Object {
    /// The pose where the object can be found
    pub pose: geometry_msgs::msg::rmw::PoseStamped,

    /// The dimensions of the object
    pub dimensions: geometry_msgs::msg::rmw::Vector3Stamped,

    /// Unique name of the object determined e.g. by the recognition
    pub name: rosidl_runtime_rs::String,

    /// Categorization of this object
    pub category: rosidl_runtime_rs::String,

    /// The object's ID in a database
    pub database_id: i32,

    /// Probability
    pub probability: f32,

    /// View representation including an RGB image of the object and a point cloud
    pub view: super::super::msg::rmw::ObjectView,

    /// 2D bounding box in an image
    pub roi: sensor_msgs::msg::rmw::RegionOfInterest,

}



impl Default for Object {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__msg__Object__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__msg__Object__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Object {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__msg__Object__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__msg__Object__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__msg__Object__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Object {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Object where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/msg/Object";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__msg__Object() }
  }
}


