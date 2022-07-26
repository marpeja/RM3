// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robominer_msgs:msg/WhiskerPosInGrid.idl
// generated code does not contain a copyright notice

#ifndef ROBOMINER_MSGS__MSG__DETAIL__WHISKER_POS_IN_GRID__STRUCT_H_
#define ROBOMINER_MSGS__MSG__DETAIL__WHISKER_POS_IN_GRID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/WhiskerPosInGrid in the package robominer_msgs.
typedef struct robominer_msgs__msg__WhiskerPosInGrid
{
  uint8_t row_num;
  uint8_t col_num;
  float offset_y;
} robominer_msgs__msg__WhiskerPosInGrid;

// Struct for a sequence of robominer_msgs__msg__WhiskerPosInGrid.
typedef struct robominer_msgs__msg__WhiskerPosInGrid__Sequence
{
  robominer_msgs__msg__WhiskerPosInGrid * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robominer_msgs__msg__WhiskerPosInGrid__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOMINER_MSGS__MSG__DETAIL__WHISKER_POS_IN_GRID__STRUCT_H_
