// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robominer_msgs:msg/MotorModuleFeedback.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robominer_msgs/msg/detail/motor_module_feedback__rosidl_typesupport_introspection_c.h"
#include "robominer_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robominer_msgs/msg/detail/motor_module_feedback__functions.h"
#include "robominer_msgs/msg/detail/motor_module_feedback__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `motor_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MotorModuleFeedback__rosidl_typesupport_introspection_c__MotorModuleFeedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robominer_msgs__msg__MotorModuleFeedback__init(message_memory);
}

void MotorModuleFeedback__rosidl_typesupport_introspection_c__MotorModuleFeedback_fini_function(void * message_memory)
{
  robominer_msgs__msg__MotorModuleFeedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MotorModuleFeedback__rosidl_typesupport_introspection_c__MotorModuleFeedback_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs__msg__MotorModuleFeedback, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs__msg__MotorModuleFeedback, motor_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_rpm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs__msg__MotorModuleFeedback, motor_rpm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_current_ma",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs__msg__MotorModuleFeedback, motor_current_ma),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_voltage_v",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs__msg__MotorModuleFeedback, motor_voltage_v),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MotorModuleFeedback__rosidl_typesupport_introspection_c__MotorModuleFeedback_message_members = {
  "robominer_msgs__msg",  // message namespace
  "MotorModuleFeedback",  // message name
  5,  // number of fields
  sizeof(robominer_msgs__msg__MotorModuleFeedback),
  MotorModuleFeedback__rosidl_typesupport_introspection_c__MotorModuleFeedback_message_member_array,  // message members
  MotorModuleFeedback__rosidl_typesupport_introspection_c__MotorModuleFeedback_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorModuleFeedback__rosidl_typesupport_introspection_c__MotorModuleFeedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MotorModuleFeedback__rosidl_typesupport_introspection_c__MotorModuleFeedback_message_type_support_handle = {
  0,
  &MotorModuleFeedback__rosidl_typesupport_introspection_c__MotorModuleFeedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robominer_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robominer_msgs, msg, MotorModuleFeedback)() {
  MotorModuleFeedback__rosidl_typesupport_introspection_c__MotorModuleFeedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!MotorModuleFeedback__rosidl_typesupport_introspection_c__MotorModuleFeedback_message_type_support_handle.typesupport_identifier) {
    MotorModuleFeedback__rosidl_typesupport_introspection_c__MotorModuleFeedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MotorModuleFeedback__rosidl_typesupport_introspection_c__MotorModuleFeedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
