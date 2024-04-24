// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from dms_interfaces:srv/GetBatteryLevel.idl
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
#include "dms_interfaces/srv/detail/get_battery_level__struct.h"
#include "dms_interfaces/srv/detail/get_battery_level__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__empty__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__empty__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool dms_interfaces__srv__get_battery_level__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("dms_interfaces.srv._get_battery_level.GetBatteryLevel_Request", full_classname_dest, 61) == 0);
  }
  dms_interfaces__srv__GetBatteryLevel_Request * ros_message = _ros_message;
  {  // empty_request
    PyObject * field = PyObject_GetAttrString(_pymsg, "empty_request");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__empty__convert_from_py(field, &ros_message->empty_request)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dms_interfaces__srv__get_battery_level__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetBatteryLevel_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dms_interfaces.srv._get_battery_level");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetBatteryLevel_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dms_interfaces__srv__GetBatteryLevel_Request * ros_message = (dms_interfaces__srv__GetBatteryLevel_Request *)raw_ros_message;
  {  // empty_request
    PyObject * field = NULL;
    field = std_msgs__msg__empty__convert_to_py(&ros_message->empty_request);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "empty_request", field);
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
// #include "dms_interfaces/srv/detail/get_battery_level__struct.h"
// already included above
// #include "dms_interfaces/srv/detail/get_battery_level__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool dms_interfaces__srv__get_battery_level__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("dms_interfaces.srv._get_battery_level.GetBatteryLevel_Response", full_classname_dest, 62) == 0);
  }
  dms_interfaces__srv__GetBatteryLevel_Response * ros_message = _ros_message;
  {  // battery_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_level");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_level = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // idle_consumption
    PyObject * field = PyObject_GetAttrString(_pymsg, "idle_consumption");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->idle_consumption = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // drive_consumption
    PyObject * field = PyObject_GetAttrString(_pymsg, "drive_consumption");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->drive_consumption = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dms_interfaces__srv__get_battery_level__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetBatteryLevel_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dms_interfaces.srv._get_battery_level");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetBatteryLevel_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dms_interfaces__srv__GetBatteryLevel_Response * ros_message = (dms_interfaces__srv__GetBatteryLevel_Response *)raw_ros_message;
  {  // battery_level
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // idle_consumption
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->idle_consumption);
    {
      int rc = PyObject_SetAttrString(_pymessage, "idle_consumption", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drive_consumption
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->drive_consumption);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drive_consumption", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
