// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robominer_msgs:msg/WhiskerArray.idl
// generated code does not contain a copyright notice

#ifndef ROBOMINER_MSGS__MSG__DETAIL__WHISKER_ARRAY__STRUCT_H_
#define ROBOMINER_MSGS__MSG__DETAIL__WHISKER_ARRAY__STRUCT_H_

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
// Member 'representation'
#include "rosidl_runtime_c/string.h"
// Member 'whiskers'
#include "robominer_msgs/msg/detail/whisker__struct.h"

// Struct defined in msg/WhiskerArray in the package robominer_msgs.
typedef struct robominer_msgs__msg__WhiskerArray
{
  std_msgs__msg__Header header;
  uint8_t num_mux;
  uint8_t num_sensors;
  rosidl_runtime_c__String representation;
  robominer_msgs__msg__Whisker__Sequence whiskers;
} robominer_msgs__msg__WhiskerArray;

// Struct for a sequence of robominer_msgs__msg__WhiskerArray.
typedef struct robominer_msgs__msg__WhiskerArray__Sequence
{
  robominer_msgs__msg__WhiskerArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robominer_msgs__msg__WhiskerArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMINER_MSGS__MSG__DETAIL__WHISKER_ARRAY__STRUCT_H_
