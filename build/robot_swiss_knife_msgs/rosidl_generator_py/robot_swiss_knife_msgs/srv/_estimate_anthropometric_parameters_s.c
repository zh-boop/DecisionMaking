// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from robot_swiss_knife_msgs:srv/EstimateAnthropometricParameters.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "robot_swiss_knife_msgs/srv/detail/estimate_anthropometric_parameters__struct.h"
#include "robot_swiss_knife_msgs/srv/detail/estimate_anthropometric_parameters__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__image__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__image__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool robot_swiss_knife_msgs__srv__estimate_anthropometric_parameters__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[104];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("robot_swiss_knife_msgs.srv._estimate_anthropometric_parameters.EstimateAnthropometricParameters_Request", full_classname_dest, 103) == 0);
  }
  robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Request * ros_message = _ros_message;
  {  // image
    PyObject * field = PyObject_GetAttrString(_pymsg, "image");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__image__convert_from_py(field, &ros_message->image)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robot_swiss_knife_msgs__srv__estimate_anthropometric_parameters__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EstimateAnthropometricParameters_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robot_swiss_knife_msgs.srv._estimate_anthropometric_parameters");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EstimateAnthropometricParameters_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Request * ros_message = (robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Request *)raw_ros_message;
  {  // image
    PyObject * field = NULL;
    field = sensor_msgs__msg__image__convert_to_py(&ros_message->image);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "image", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "robot_swiss_knife_msgs/srv/detail/estimate_anthropometric_parameters__struct.h"
// already included above
// #include "robot_swiss_knife_msgs/srv/detail/estimate_anthropometric_parameters__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool robot_swiss_knife_msgs__srv__estimate_anthropometric_parameters__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[105];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("robot_swiss_knife_msgs.srv._estimate_anthropometric_parameters.EstimateAnthropometricParameters_Response", full_classname_dest, 104) == 0);
  }
  robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Response * ros_message = _ros_message;
  {  // height_cm
    PyObject * field = PyObject_GetAttrString(_pymsg, "height_cm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height_cm = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mass_kg
    PyObject * field = PyObject_GetAttrString(_pymsg, "mass_kg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mass_kg = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robot_swiss_knife_msgs__srv__estimate_anthropometric_parameters__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EstimateAnthropometricParameters_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robot_swiss_knife_msgs.srv._estimate_anthropometric_parameters");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EstimateAnthropometricParameters_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Response * ros_message = (robot_swiss_knife_msgs__srv__EstimateAnthropometricParameters_Response *)raw_ros_message;
  {  // height_cm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height_cm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height_cm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mass_kg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mass_kg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mass_kg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
