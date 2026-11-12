#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Request__init(msg: *mut EstimateAnthropometricParameters_Request) -> bool;
    fn robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EstimateAnthropometricParameters_Request>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EstimateAnthropometricParameters_Request>);
    fn robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EstimateAnthropometricParameters_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<EstimateAnthropometricParameters_Request>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EstimateAnthropometricParameters_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub image: sensor_msgs::msg::rmw::Image,

}



impl Default for EstimateAnthropometricParameters_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EstimateAnthropometricParameters_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EstimateAnthropometricParameters_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EstimateAnthropometricParameters_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/srv/EstimateAnthropometricParameters_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Request() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Response__init(msg: *mut EstimateAnthropometricParameters_Response) -> bool;
    fn robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EstimateAnthropometricParameters_Response>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EstimateAnthropometricParameters_Response>);
    fn robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EstimateAnthropometricParameters_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<EstimateAnthropometricParameters_Response>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EstimateAnthropometricParameters_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub height_cm: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mass_kg: f32,

}



impl Default for EstimateAnthropometricParameters_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EstimateAnthropometricParameters_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EstimateAnthropometricParameters_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EstimateAnthropometricParameters_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/srv/EstimateAnthropometricParameters_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Response() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__SegmentObjects_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__srv__SegmentObjects_Request__init(msg: *mut SegmentObjects_Request) -> bool;
    fn robot_swiss_knife_msgs__srv__SegmentObjects_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SegmentObjects_Request>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__srv__SegmentObjects_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SegmentObjects_Request>);
    fn robot_swiss_knife_msgs__srv__SegmentObjects_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SegmentObjects_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SegmentObjects_Request>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__srv__SegmentObjects_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SegmentObjects_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub image: sensor_msgs::msg::rmw::Image,


    // This member is not documented.
    #[allow(missing_docs)]
    pub object_categories: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for SegmentObjects_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__srv__SegmentObjects_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__srv__SegmentObjects_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SegmentObjects_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__SegmentObjects_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__SegmentObjects_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__SegmentObjects_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SegmentObjects_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SegmentObjects_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/srv/SegmentObjects_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__SegmentObjects_Request() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__SegmentObjects_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__srv__SegmentObjects_Response__init(msg: *mut SegmentObjects_Response) -> bool;
    fn robot_swiss_knife_msgs__srv__SegmentObjects_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SegmentObjects_Response>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__srv__SegmentObjects_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SegmentObjects_Response>);
    fn robot_swiss_knife_msgs__srv__SegmentObjects_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SegmentObjects_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SegmentObjects_Response>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__srv__SegmentObjects_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SegmentObjects_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub objects: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Object>,

}



impl Default for SegmentObjects_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__srv__SegmentObjects_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__srv__SegmentObjects_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SegmentObjects_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__SegmentObjects_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__SegmentObjects_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__SegmentObjects_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SegmentObjects_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SegmentObjects_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/srv/SegmentObjects_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__SegmentObjects_Response() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__CheckObjectVisibility_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__srv__CheckObjectVisibility_Request__init(msg: *mut CheckObjectVisibility_Request) -> bool;
    fn robot_swiss_knife_msgs__srv__CheckObjectVisibility_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CheckObjectVisibility_Request>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__srv__CheckObjectVisibility_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CheckObjectVisibility_Request>);
    fn robot_swiss_knife_msgs__srv__CheckObjectVisibility_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CheckObjectVisibility_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CheckObjectVisibility_Request>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__srv__CheckObjectVisibility_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CheckObjectVisibility_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub image: sensor_msgs::msg::rmw::Image,


    // This member is not documented.
    #[allow(missing_docs)]
    pub object_categories: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for CheckObjectVisibility_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__srv__CheckObjectVisibility_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__srv__CheckObjectVisibility_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CheckObjectVisibility_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__CheckObjectVisibility_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__CheckObjectVisibility_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__CheckObjectVisibility_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CheckObjectVisibility_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CheckObjectVisibility_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/srv/CheckObjectVisibility_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__CheckObjectVisibility_Request() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__CheckObjectVisibility_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__srv__CheckObjectVisibility_Response__init(msg: *mut CheckObjectVisibility_Response) -> bool;
    fn robot_swiss_knife_msgs__srv__CheckObjectVisibility_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CheckObjectVisibility_Response>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__srv__CheckObjectVisibility_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CheckObjectVisibility_Response>);
    fn robot_swiss_knife_msgs__srv__CheckObjectVisibility_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CheckObjectVisibility_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CheckObjectVisibility_Response>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__srv__CheckObjectVisibility_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CheckObjectVisibility_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub objects_visible: rosidl_runtime_rs::Sequence<bool>,

}



impl Default for CheckObjectVisibility_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__srv__CheckObjectVisibility_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__srv__CheckObjectVisibility_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CheckObjectVisibility_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__CheckObjectVisibility_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__CheckObjectVisibility_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__CheckObjectVisibility_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CheckObjectVisibility_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CheckObjectVisibility_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/srv/CheckObjectVisibility_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__CheckObjectVisibility_Response() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Request__init(msg: *mut ExtractROI3DPoints_Request) -> bool;
    fn robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExtractROI3DPoints_Request>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExtractROI3DPoints_Request>);
    fn robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExtractROI3DPoints_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ExtractROI3DPoints_Request>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExtractROI3DPoints_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub point_cloud: sensor_msgs::msg::rmw::PointCloud2,


    // This member is not documented.
    #[allow(missing_docs)]
    pub objects: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Object>,

}



impl Default for ExtractROI3DPoints_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExtractROI3DPoints_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExtractROI3DPoints_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExtractROI3DPoints_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/srv/ExtractROI3DPoints_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Request() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Response__init(msg: *mut ExtractROI3DPoints_Response) -> bool;
    fn robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExtractROI3DPoints_Response>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExtractROI3DPoints_Response>);
    fn robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExtractROI3DPoints_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ExtractROI3DPoints_Response>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExtractROI3DPoints_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub objects: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Object>,

}



impl Default for ExtractROI3DPoints_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExtractROI3DPoints_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExtractROI3DPoints_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExtractROI3DPoints_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/srv/ExtractROI3DPoints_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Response() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Request__init(msg: *mut CalculatePoseFromCloud_Request) -> bool;
    fn robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CalculatePoseFromCloud_Request>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CalculatePoseFromCloud_Request>);
    fn robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CalculatePoseFromCloud_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CalculatePoseFromCloud_Request>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CalculatePoseFromCloud_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub point_cloud: sensor_msgs::msg::rmw::PointCloud2,

}



impl Default for CalculatePoseFromCloud_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CalculatePoseFromCloud_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CalculatePoseFromCloud_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CalculatePoseFromCloud_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/srv/CalculatePoseFromCloud_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Request() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Response__init(msg: *mut CalculatePoseFromCloud_Response) -> bool;
    fn robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CalculatePoseFromCloud_Response>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CalculatePoseFromCloud_Response>);
    fn robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CalculatePoseFromCloud_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CalculatePoseFromCloud_Response>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CalculatePoseFromCloud_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub calculation_successful: bool,

}



impl Default for CalculatePoseFromCloud_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CalculatePoseFromCloud_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CalculatePoseFromCloud_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CalculatePoseFromCloud_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/srv/CalculatePoseFromCloud_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Response() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__GetObjectPose_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__srv__GetObjectPose_Request__init(msg: *mut GetObjectPose_Request) -> bool;
    fn robot_swiss_knife_msgs__srv__GetObjectPose_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetObjectPose_Request>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__srv__GetObjectPose_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetObjectPose_Request>);
    fn robot_swiss_knife_msgs__srv__GetObjectPose_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetObjectPose_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetObjectPose_Request>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__srv__GetObjectPose_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetObjectPose_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub object_category: rosidl_runtime_rs::String,

}



impl Default for GetObjectPose_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__srv__GetObjectPose_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__srv__GetObjectPose_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetObjectPose_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__GetObjectPose_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__GetObjectPose_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__GetObjectPose_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetObjectPose_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetObjectPose_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/srv/GetObjectPose_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__GetObjectPose_Request() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__GetObjectPose_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__srv__GetObjectPose_Response__init(msg: *mut GetObjectPose_Response) -> bool;
    fn robot_swiss_knife_msgs__srv__GetObjectPose_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetObjectPose_Response>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__srv__GetObjectPose_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetObjectPose_Response>);
    fn robot_swiss_knife_msgs__srv__GetObjectPose_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetObjectPose_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetObjectPose_Response>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__srv__GetObjectPose_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetObjectPose_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tracking_state: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for GetObjectPose_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__srv__GetObjectPose_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__srv__GetObjectPose_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetObjectPose_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__GetObjectPose_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__GetObjectPose_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__GetObjectPose_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetObjectPose_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetObjectPose_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/srv/GetObjectPose_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__GetObjectPose_Response() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__GetFluentAssertions_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__init(msg: *mut GetFluentAssertions_Request) -> bool;
    fn robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetFluentAssertions_Request>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetFluentAssertions_Request>);
    fn robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetFluentAssertions_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetFluentAssertions_Request>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__srv__GetFluentAssertions_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFluentAssertions_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,

}



impl Default for GetFluentAssertions_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetFluentAssertions_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__GetFluentAssertions_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetFluentAssertions_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetFluentAssertions_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/srv/GetFluentAssertions_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__GetFluentAssertions_Request() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__GetFluentAssertions_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__init(msg: *mut GetFluentAssertions_Response) -> bool;
    fn robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetFluentAssertions_Response>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetFluentAssertions_Response>);
    fn robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetFluentAssertions_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetFluentAssertions_Response>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__srv__GetFluentAssertions_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFluentAssertions_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fluents: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Fluent>,

}



impl Default for GetFluentAssertions_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetFluentAssertions_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__GetFluentAssertions_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetFluentAssertions_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetFluentAssertions_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/srv/GetFluentAssertions_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__GetFluentAssertions_Response() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__UpdateKB_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__srv__UpdateKB_Request__init(msg: *mut UpdateKB_Request) -> bool;
    fn robot_swiss_knife_msgs__srv__UpdateKB_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UpdateKB_Request>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__srv__UpdateKB_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UpdateKB_Request>);
    fn robot_swiss_knife_msgs__srv__UpdateKB_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UpdateKB_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<UpdateKB_Request>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__srv__UpdateKB_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UpdateKB_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub operation: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fluents: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Fluent>,

}

impl UpdateKB_Request {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const INSERT: i8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REMOVE: i8 = 1;

}


impl Default for UpdateKB_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__srv__UpdateKB_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__srv__UpdateKB_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UpdateKB_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__UpdateKB_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__UpdateKB_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__UpdateKB_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UpdateKB_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UpdateKB_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/srv/UpdateKB_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__UpdateKB_Request() }
  }
}


#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__UpdateKB_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_swiss_knife_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_swiss_knife_msgs__srv__UpdateKB_Response__init(msg: *mut UpdateKB_Response) -> bool;
    fn robot_swiss_knife_msgs__srv__UpdateKB_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UpdateKB_Response>, size: usize) -> bool;
    fn robot_swiss_knife_msgs__srv__UpdateKB_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UpdateKB_Response>);
    fn robot_swiss_knife_msgs__srv__UpdateKB_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UpdateKB_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<UpdateKB_Response>) -> bool;
}

// Corresponds to robot_swiss_knife_msgs__srv__UpdateKB_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UpdateKB_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for UpdateKB_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_swiss_knife_msgs__srv__UpdateKB_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_swiss_knife_msgs__srv__UpdateKB_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UpdateKB_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__UpdateKB_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__UpdateKB_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_swiss_knife_msgs__srv__UpdateKB_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UpdateKB_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UpdateKB_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_swiss_knife_msgs/srv/UpdateKB_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_swiss_knife_msgs__srv__UpdateKB_Response() }
  }
}






#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters() -> *const std::ffi::c_void;
}

// Corresponds to robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters
#[allow(missing_docs, non_camel_case_types)]
pub struct EstimateAnthropometricParameters;

impl rosidl_runtime_rs::Service for EstimateAnthropometricParameters {
    type Request = EstimateAnthropometricParameters_Request;
    type Response = EstimateAnthropometricParameters_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters() }
    }
}




#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_swiss_knife_msgs__srv__SegmentObjects() -> *const std::ffi::c_void;
}

// Corresponds to robot_swiss_knife_msgs__srv__SegmentObjects
#[allow(missing_docs, non_camel_case_types)]
pub struct SegmentObjects;

impl rosidl_runtime_rs::Service for SegmentObjects {
    type Request = SegmentObjects_Request;
    type Response = SegmentObjects_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_swiss_knife_msgs__srv__SegmentObjects() }
    }
}




#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_swiss_knife_msgs__srv__CheckObjectVisibility() -> *const std::ffi::c_void;
}

// Corresponds to robot_swiss_knife_msgs__srv__CheckObjectVisibility
#[allow(missing_docs, non_camel_case_types)]
pub struct CheckObjectVisibility;

impl rosidl_runtime_rs::Service for CheckObjectVisibility {
    type Request = CheckObjectVisibility_Request;
    type Response = CheckObjectVisibility_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_swiss_knife_msgs__srv__CheckObjectVisibility() }
    }
}




#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_swiss_knife_msgs__srv__ExtractROI3DPoints() -> *const std::ffi::c_void;
}

// Corresponds to robot_swiss_knife_msgs__srv__ExtractROI3DPoints
#[allow(missing_docs, non_camel_case_types)]
pub struct ExtractROI3DPoints;

impl rosidl_runtime_rs::Service for ExtractROI3DPoints {
    type Request = ExtractROI3DPoints_Request;
    type Response = ExtractROI3DPoints_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_swiss_knife_msgs__srv__ExtractROI3DPoints() }
    }
}




#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_swiss_knife_msgs__srv__CalculatePoseFromCloud() -> *const std::ffi::c_void;
}

// Corresponds to robot_swiss_knife_msgs__srv__CalculatePoseFromCloud
#[allow(missing_docs, non_camel_case_types)]
pub struct CalculatePoseFromCloud;

impl rosidl_runtime_rs::Service for CalculatePoseFromCloud {
    type Request = CalculatePoseFromCloud_Request;
    type Response = CalculatePoseFromCloud_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_swiss_knife_msgs__srv__CalculatePoseFromCloud() }
    }
}




#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_swiss_knife_msgs__srv__GetObjectPose() -> *const std::ffi::c_void;
}

// Corresponds to robot_swiss_knife_msgs__srv__GetObjectPose
#[allow(missing_docs, non_camel_case_types)]
pub struct GetObjectPose;

impl rosidl_runtime_rs::Service for GetObjectPose {
    type Request = GetObjectPose_Request;
    type Response = GetObjectPose_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_swiss_knife_msgs__srv__GetObjectPose() }
    }
}




#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_swiss_knife_msgs__srv__GetFluentAssertions() -> *const std::ffi::c_void;
}

// Corresponds to robot_swiss_knife_msgs__srv__GetFluentAssertions
#[allow(missing_docs, non_camel_case_types)]
pub struct GetFluentAssertions;

impl rosidl_runtime_rs::Service for GetFluentAssertions {
    type Request = GetFluentAssertions_Request;
    type Response = GetFluentAssertions_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_swiss_knife_msgs__srv__GetFluentAssertions() }
    }
}




#[link(name = "robot_swiss_knife_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_swiss_knife_msgs__srv__UpdateKB() -> *const std::ffi::c_void;
}

// Corresponds to robot_swiss_knife_msgs__srv__UpdateKB
#[allow(missing_docs, non_camel_case_types)]
pub struct UpdateKB;

impl rosidl_runtime_rs::Service for UpdateKB {
    type Request = UpdateKB_Request;
    type Response = UpdateKB_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_swiss_knife_msgs__srv__UpdateKB() }
    }
}


