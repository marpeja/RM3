// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robominer_msgs:msg/SpectrometerMeasurement.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robominer_msgs/msg/detail/spectrometer_measurement__rosidl_typesupport_introspection_c.h"
#include "robominer_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robominer_msgs/msg/detail/spectrometer_measurement__functions.h"
#include "robominer_msgs/msg/detail/spectrometer_measurement__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `orientation`
#include "geometry_msgs/msg/vector3.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SpectrometerMeasurement__rosidl_typesupport_introspection_c__SpectrometerMeasurement_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robominer_msgs__msg__SpectrometerMeasurement__init(message_memory);
}

void SpectrometerMeasurement__rosidl_typesupport_introspection_c__SpectrometerMeasurement_fini_function(void * message_memory)
{
  robominer_msgs__msg__SpectrometerMeasurement__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SpectrometerMeasurement__rosidl_typesupport_introspection_c__SpectrometerMeasurement_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs__msg__SpectrometerMeasurement, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs__msg__SpectrometerMeasurement, orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "exposure_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs__msg__SpectrometerMeasurement, exposure_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "spectrum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    288,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs__msg__SpectrometerMeasurement, spectrum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SpectrometerMeasurement__rosidl_typesupport_introspection_c__SpectrometerMeasurement_message_members = {
  "robominer_msgs__msg",  // message namespace
  "SpectrometerMeasurement",  // message name
  4,  // number of fields
  sizeof(robominer_msgs__msg__SpectrometerMeasurement),
  SpectrometerMeasurement__rosidl_typesupport_introspection_c__SpectrometerMeasurement_message_member_array,  // message members
  SpectrometerMeasurement__rosidl_typesupport_introspection_c__SpectrometerMeasurement_init_function,  // function to initialize message memory (memory has to be allocated)
  SpectrometerMeasurement__rosidl_typesupport_introspection_c__SpectrometerMeasurement_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SpectrometerMeasurement__rosidl_typesupport_introspection_c__SpectrometerMeasurement_message_type_support_handle = {
  0,
  &SpectrometerMeasurement__rosidl_typesupport_introspection_c__SpectrometerMeasurement_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robominer_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robominer_msgs, msg, SpectrometerMeasurement)() {
  SpectrometerMeasurement__rosidl_typesupport_introspection_c__SpectrometerMeasurement_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  SpectrometerMeasurement__rosidl_typesupport_introspection_c__SpectrometerMeasurement_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!SpectrometerMeasurement__rosidl_typesupport_introspection_c__SpectrometerMeasurement_message_type_support_handle.typesupport_identifier) {
    SpectrometerMeasurement__rosidl_typesupport_introspection_c__SpectrometerMeasurement_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SpectrometerMeasurement__rosidl_typesupport_introspection_c__SpectrometerMeasurement_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
