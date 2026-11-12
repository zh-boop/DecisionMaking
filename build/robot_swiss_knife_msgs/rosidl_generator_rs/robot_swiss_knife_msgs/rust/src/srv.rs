#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EstimateAnthropometricParameters_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub image: sensor_msgs::msg::Image,

}



impl Default for EstimateAnthropometricParameters_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::EstimateAnthropometricParameters_Request::default())
  }
}

impl rosidl_runtime_rs::Message for EstimateAnthropometricParameters_Request {
  type RmwMsg = super::srv::rmw::EstimateAnthropometricParameters_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        image: sensor_msgs::msg::Image::into_rmw_message(std::borrow::Cow::Owned(msg.image)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        image: sensor_msgs::msg::Image::into_rmw_message(std::borrow::Cow::Borrowed(&msg.image)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      image: sensor_msgs::msg::Image::from_rmw_message(msg.image),
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::EstimateAnthropometricParameters_Response::default())
  }
}

impl rosidl_runtime_rs::Message for EstimateAnthropometricParameters_Response {
  type RmwMsg = super::srv::rmw::EstimateAnthropometricParameters_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        height_cm: msg.height_cm,
        mass_kg: msg.mass_kg,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      height_cm: msg.height_cm,
      mass_kg: msg.mass_kg,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      height_cm: msg.height_cm,
      mass_kg: msg.mass_kg,
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__srv__SegmentObjects_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SegmentObjects_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub image: sensor_msgs::msg::Image,


    // This member is not documented.
    #[allow(missing_docs)]
    pub object_categories: Vec<std::string::String>,

}



impl Default for SegmentObjects_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SegmentObjects_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SegmentObjects_Request {
  type RmwMsg = super::srv::rmw::SegmentObjects_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        image: sensor_msgs::msg::Image::into_rmw_message(std::borrow::Cow::Owned(msg.image)).into_owned(),
        object_categories: msg.object_categories
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        image: sensor_msgs::msg::Image::into_rmw_message(std::borrow::Cow::Borrowed(&msg.image)).into_owned(),
        object_categories: msg.object_categories
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      image: sensor_msgs::msg::Image::from_rmw_message(msg.image),
      object_categories: msg.object_categories
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__srv__SegmentObjects_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SegmentObjects_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub objects: Vec<super::msg::Object>,

}



impl Default for SegmentObjects_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SegmentObjects_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SegmentObjects_Response {
  type RmwMsg = super::srv::rmw::SegmentObjects_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        objects: msg.objects
          .into_iter()
          .map(|elem| super::msg::Object::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        objects: msg.objects
          .iter()
          .map(|elem| super::msg::Object::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      objects: msg.objects
          .into_iter()
          .map(super::msg::Object::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__srv__CheckObjectVisibility_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CheckObjectVisibility_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub image: sensor_msgs::msg::Image,


    // This member is not documented.
    #[allow(missing_docs)]
    pub object_categories: Vec<std::string::String>,

}



impl Default for CheckObjectVisibility_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CheckObjectVisibility_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CheckObjectVisibility_Request {
  type RmwMsg = super::srv::rmw::CheckObjectVisibility_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        image: sensor_msgs::msg::Image::into_rmw_message(std::borrow::Cow::Owned(msg.image)).into_owned(),
        object_categories: msg.object_categories
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        image: sensor_msgs::msg::Image::into_rmw_message(std::borrow::Cow::Borrowed(&msg.image)).into_owned(),
        object_categories: msg.object_categories
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      image: sensor_msgs::msg::Image::from_rmw_message(msg.image),
      object_categories: msg.object_categories
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__srv__CheckObjectVisibility_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CheckObjectVisibility_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub objects_visible: Vec<bool>,

}



impl Default for CheckObjectVisibility_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CheckObjectVisibility_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CheckObjectVisibility_Response {
  type RmwMsg = super::srv::rmw::CheckObjectVisibility_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        objects_visible: msg.objects_visible.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        objects_visible: msg.objects_visible.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      objects_visible: msg.objects_visible.into(),
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExtractROI3DPoints_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub point_cloud: sensor_msgs::msg::PointCloud2,


    // This member is not documented.
    #[allow(missing_docs)]
    pub objects: Vec<super::msg::Object>,

}



impl Default for ExtractROI3DPoints_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ExtractROI3DPoints_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ExtractROI3DPoints_Request {
  type RmwMsg = super::srv::rmw::ExtractROI3DPoints_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        point_cloud: sensor_msgs::msg::PointCloud2::into_rmw_message(std::borrow::Cow::Owned(msg.point_cloud)).into_owned(),
        objects: msg.objects
          .into_iter()
          .map(|elem| super::msg::Object::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        point_cloud: sensor_msgs::msg::PointCloud2::into_rmw_message(std::borrow::Cow::Borrowed(&msg.point_cloud)).into_owned(),
        objects: msg.objects
          .iter()
          .map(|elem| super::msg::Object::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      point_cloud: sensor_msgs::msg::PointCloud2::from_rmw_message(msg.point_cloud),
      objects: msg.objects
          .into_iter()
          .map(super::msg::Object::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__srv__ExtractROI3DPoints_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExtractROI3DPoints_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub objects: Vec<super::msg::Object>,

}



impl Default for ExtractROI3DPoints_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ExtractROI3DPoints_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ExtractROI3DPoints_Response {
  type RmwMsg = super::srv::rmw::ExtractROI3DPoints_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        objects: msg.objects
          .into_iter()
          .map(|elem| super::msg::Object::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        objects: msg.objects
          .iter()
          .map(|elem| super::msg::Object::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      objects: msg.objects
          .into_iter()
          .map(super::msg::Object::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CalculatePoseFromCloud_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub point_cloud: sensor_msgs::msg::PointCloud2,

}



impl Default for CalculatePoseFromCloud_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CalculatePoseFromCloud_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CalculatePoseFromCloud_Request {
  type RmwMsg = super::srv::rmw::CalculatePoseFromCloud_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        point_cloud: sensor_msgs::msg::PointCloud2::into_rmw_message(std::borrow::Cow::Owned(msg.point_cloud)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        point_cloud: sensor_msgs::msg::PointCloud2::into_rmw_message(std::borrow::Cow::Borrowed(&msg.point_cloud)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      point_cloud: sensor_msgs::msg::PointCloud2::from_rmw_message(msg.point_cloud),
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__srv__CalculatePoseFromCloud_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CalculatePoseFromCloud_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub calculation_successful: bool,

}



impl Default for CalculatePoseFromCloud_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CalculatePoseFromCloud_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CalculatePoseFromCloud_Response {
  type RmwMsg = super::srv::rmw::CalculatePoseFromCloud_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
        calculation_successful: msg.calculation_successful,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
      calculation_successful: msg.calculation_successful,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      pose: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.pose),
      calculation_successful: msg.calculation_successful,
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__srv__GetObjectPose_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetObjectPose_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub object_category: std::string::String,

}



impl Default for GetObjectPose_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetObjectPose_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetObjectPose_Request {
  type RmwMsg = super::srv::rmw::GetObjectPose_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        object_category: msg.object_category.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        object_category: msg.object_category.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      object_category: msg.object_category.to_string(),
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__srv__GetObjectPose_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetObjectPose_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::PoseStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tracking_state: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for GetObjectPose_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetObjectPose_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetObjectPose_Response {
  type RmwMsg = super::srv::rmw::GetObjectPose_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
        tracking_state: msg.tracking_state.as_str().into(),
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
        tracking_state: msg.tracking_state.as_str().into(),
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      pose: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.pose),
      tracking_state: msg.tracking_state.to_string(),
      success: msg.success,
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__srv__GetFluentAssertions_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFluentAssertions_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,

}



impl Default for GetFluentAssertions_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetFluentAssertions_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetFluentAssertions_Request {
  type RmwMsg = super::srv::rmw::GetFluentAssertions_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__srv__GetFluentAssertions_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFluentAssertions_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fluents: Vec<super::msg::Fluent>,

}



impl Default for GetFluentAssertions_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetFluentAssertions_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetFluentAssertions_Response {
  type RmwMsg = super::srv::rmw::GetFluentAssertions_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fluents: msg.fluents
          .into_iter()
          .map(|elem| super::msg::Fluent::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fluents: msg.fluents
          .iter()
          .map(|elem| super::msg::Fluent::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      fluents: msg.fluents
          .into_iter()
          .map(super::msg::Fluent::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__srv__UpdateKB_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UpdateKB_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub operation: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fluents: Vec<super::msg::Fluent>,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::UpdateKB_Request::default())
  }
}

impl rosidl_runtime_rs::Message for UpdateKB_Request {
  type RmwMsg = super::srv::rmw::UpdateKB_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        operation: msg.operation,
        fluents: msg.fluents
          .into_iter()
          .map(|elem| super::msg::Fluent::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      operation: msg.operation,
        fluents: msg.fluents
          .iter()
          .map(|elem| super::msg::Fluent::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      operation: msg.operation,
      fluents: msg.fluents
          .into_iter()
          .map(super::msg::Fluent::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__srv__UpdateKB_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UpdateKB_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for UpdateKB_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::UpdateKB_Response::default())
  }
}

impl rosidl_runtime_rs::Message for UpdateKB_Response {
  type RmwMsg = super::srv::rmw::UpdateKB_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
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


