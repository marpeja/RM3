// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robominer_msgs:msg/Whisker.idl
// generated code does not contain a copyright notice

#ifndef ROBOMINER_MSGS__MSG__DETAIL__WHISKER__STRUCT_H_
#define ROBOMINER_MSGS__MSG__DETAIL__WHISKER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pos'
#include "robominer_msgs/msg/detail/whisker_pos_in_grid__struct.h"

// Struct defined in msg/Whisker in the package robominer_msgs.
typedef struct robominer_msgs__msg__Whisker
{
  robominer_msgs__msg__WhiskerPosInGrid pos;
  bool has_error;
  float x;
  float y;
  float z;
} robominer_msgs__msg__Whisker;

// Struct for a sequence of robominer_msgs__msg__Whisker.
typedef struct robominer_msgs__msg__Whisker__Sequence
{
  robominer_msgs__msg__Whisker * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robominer_msgs__msg__Whisker__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMINER_MSGS__MSG__DETAIL__WHISKER__STRUCT_H_
