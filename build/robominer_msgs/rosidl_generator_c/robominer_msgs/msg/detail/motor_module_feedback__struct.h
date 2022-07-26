// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robominer_msgs:msg/MotorModuleFeedback.idl
// generated code does not contain a copyright notice

#ifndef ROBOMINER_MSGS__MSG__DETAIL__MOTOR_MODULE_FEEDBACK__STRUCT_H_
#define ROBOMINER_MSGS__MSG__DETAIL__MOTOR_MODULE_FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'motor_id'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/MotorModuleFeedback in the package robominer_msgs.
typedef struct robominer_msgs__msg__MotorModuleFeedback
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String motor_id;
  float motor_rpm;
  float motor_current_ma;
  float motor_voltage_v;
} robominer_msgs__msg__MotorModuleFeedback;

// Struct for a sequence of robominer_msgs__msg__MotorModuleFeedback.
typedef struct robominer_msgs__msg__MotorModuleFeedback__Sequence
{
  robominer_msgs__msg__MotorModuleFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robominer_msgs__msg__MotorModuleFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMINER_MSGS__MSG__DETAIL__MOTOR_MODULE_FEEDBACK__STRUCT_H_
