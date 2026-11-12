#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to robot_swiss_knife_msgs__msg__KnowledgeItem

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KnowledgeItem {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: std::string::String,

}



impl Default for KnowledgeItem {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::KnowledgeItem::default())
  }
}

impl rosidl_runtime_rs::Message for KnowledgeItem {
  type RmwMsg = super::msg::rmw::KnowledgeItem;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        value: msg.value.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        value: msg.value.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      value: msg.value.to_string(),
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__msg__Fluent

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Fluent {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub params: Vec<super::msg::KnowledgeItem>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: std::string::String,

}



impl Default for Fluent {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Fluent::default())
  }
}

impl rosidl_runtime_rs::Message for Fluent {
  type RmwMsg = super::msg::rmw::Fluent;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        params: msg.params
          .into_iter()
          .map(|elem| super::msg::KnowledgeItem::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        value: msg.value.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        params: msg.params
          .iter()
          .map(|elem| super::msg::KnowledgeItem::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        value: msg.value.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      params: msg.params
          .into_iter()
          .map(super::msg::KnowledgeItem::from_rmw_message)
          .collect(),
      value: msg.value.to_string(),
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__msg__Action

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Action {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub params: Vec<super::msg::KnowledgeItem>,

}



impl Default for Action {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Action::default())
  }
}

impl rosidl_runtime_rs::Message for Action {
  type RmwMsg = super::msg::rmw::Action;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        params: msg.params
          .into_iter()
          .map(|elem| super::msg::KnowledgeItem::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        params: msg.params
          .iter()
          .map(|elem| super::msg::KnowledgeItem::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      params: msg.params
          .into_iter()
          .map(super::msg::KnowledgeItem::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__msg__ObjectView
/// Message definition adapted from https://github.com/b-it-bots/mas_perception_msgs/blob/noetic/msg/ObjectView.msg

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ObjectView {

    // This member is not documented.
    #[allow(missing_docs)]
    pub image: sensor_msgs::msg::Image,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mask: sensor_msgs::msg::Image,


    // This member is not documented.
    #[allow(missing_docs)]
    pub point_cloud: sensor_msgs::msg::PointCloud2,

}



impl Default for ObjectView {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ObjectView::default())
  }
}

impl rosidl_runtime_rs::Message for ObjectView {
  type RmwMsg = super::msg::rmw::ObjectView;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        image: sensor_msgs::msg::Image::into_rmw_message(std::borrow::Cow::Owned(msg.image)).into_owned(),
        mask: sensor_msgs::msg::Image::into_rmw_message(std::borrow::Cow::Owned(msg.mask)).into_owned(),
        point_cloud: sensor_msgs::msg::PointCloud2::into_rmw_message(std::borrow::Cow::Owned(msg.point_cloud)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        image: sensor_msgs::msg::Image::into_rmw_message(std::borrow::Cow::Borrowed(&msg.image)).into_owned(),
        mask: sensor_msgs::msg::Image::into_rmw_message(std::borrow::Cow::Borrowed(&msg.mask)).into_owned(),
        point_cloud: sensor_msgs::msg::PointCloud2::into_rmw_message(std::borrow::Cow::Borrowed(&msg.point_cloud)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      image: sensor_msgs::msg::Image::from_rmw_message(msg.image),
      mask: sensor_msgs::msg::Image::from_rmw_message(msg.mask),
      point_cloud: sensor_msgs::msg::PointCloud2::from_rmw_message(msg.point_cloud),
    }
  }
}


// Corresponds to robot_swiss_knife_msgs__msg__Object
/// Message definition adapted from https://github.com/b-it-bots/mas_perception_msgs/blob/noetic/msg/Object.msg

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Object {
    /// The pose where the object can be found
    pub pose: geometry_msgs::msg::PoseStamped,

    /// The dimensions of the object
    pub dimensions: geometry_msgs::msg::Vector3Stamped,

    /// Unique name of the object determined e.g. by the recognition
    pub name: std::string::String,

    /// Categorization of this object
    pub category: std::string::String,

    /// The object's ID in a database
    pub database_id: i32,

    /// Probability
    pub probability: f32,

    /// View representation including an RGB image of the object and a point cloud
    pub view: super::msg::ObjectView,

    /// 2D bounding box in an image
    pub roi: sensor_msgs::msg::RegionOfInterest,

}



impl Default for Object {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Object::default())
  }
}

impl rosidl_runtime_rs::Message for Object {
  type RmwMsg = super::msg::rmw::Object;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
        dimensions: geometry_msgs::msg::Vector3Stamped::into_rmw_message(std::borrow::Cow::Owned(msg.dimensions)).into_owned(),
        name: msg.name.as_str().into(),
        category: msg.category.as_str().into(),
        database_id: msg.database_id,
        probability: msg.probability,
        view: super::msg::ObjectView::into_rmw_message(std::borrow::Cow::Owned(msg.view)).into_owned(),
        roi: sensor_msgs::msg::RegionOfInterest::into_rmw_message(std::borrow::Cow::Owned(msg.roi)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
        dimensions: geometry_msgs::msg::Vector3Stamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.dimensions)).into_owned(),
        name: msg.name.as_str().into(),
        category: msg.category.as_str().into(),
      database_id: msg.database_id,
      probability: msg.probability,
        view: super::msg::ObjectView::into_rmw_message(std::borrow::Cow::Borrowed(&msg.view)).into_owned(),
        roi: sensor_msgs::msg::RegionOfInterest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.roi)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      pose: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.pose),
      dimensions: geometry_msgs::msg::Vector3Stamped::from_rmw_message(msg.dimensions),
      name: msg.name.to_string(),
      category: msg.category.to_string(),
      database_id: msg.database_id,
      probability: msg.probability,
      view: super::msg::ObjectView::from_rmw_message(msg.view),
      roi: sensor_msgs::msg::RegionOfInterest::from_rmw_message(msg.roi),
    }
  }
}


