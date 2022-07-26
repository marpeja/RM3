// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtabmap_ros:msg/KeyPoint.idl
// generated code does not contain a copyright notice
#include "rtabmap_ros/msg/detail/key_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `pt`
#include "rtabmap_ros/msg/detail/point2f__functions.h"

bool
rtabmap_ros__msg__KeyPoint__init(rtabmap_ros__msg__KeyPoint * msg)
{
  if (!msg) {
    return false;
  }
  // pt
  if (!rtabmap_ros__msg__Point2f__init(&msg->pt)) {
    rtabmap_ros__msg__KeyPoint__fini(msg);
    return false;
  }
  // size
  // angle
  // response
  // octave
  // class_id
  return true;
}

void
rtabmap_ros__msg__KeyPoint__fini(rtabmap_ros__msg__KeyPoint * msg)
{
  if (!msg) {
    return;
  }
  // pt
  rtabmap_ros__msg__Point2f__fini(&msg->pt);
  // size
  // angle
  // response
  // octave
  // class_id
}

rtabmap_ros__msg__KeyPoint *
rtabmap_ros__msg__KeyPoint__create()
{
  rtabmap_ros__msg__KeyPoint * msg = (rtabmap_ros__msg__KeyPoint *)malloc(sizeof(rtabmap_ros__msg__KeyPoint));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_ros__msg__KeyPoint));
  bool success = rtabmap_ros__msg__KeyPoint__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rtabmap_ros__msg__KeyPoint__destroy(rtabmap_ros__msg__KeyPoint * msg)
{
  if (msg) {
    rtabmap_ros__msg__KeyPoint__fini(msg);
  }
  free(msg);
}


bool
rtabmap_ros__msg__KeyPoint__Sequence__init(rtabmap_ros__msg__KeyPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rtabmap_ros__msg__KeyPoint * data = NULL;
  if (size) {
    data = (rtabmap_ros__msg__KeyPoint *)calloc(size, sizeof(rtabmap_ros__msg__KeyPoint));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_ros__msg__KeyPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_ros__msg__KeyPoint__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rtabmap_ros__msg__KeyPoint__Sequence__fini(rtabmap_ros__msg__KeyPoint__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rtabmap_ros__msg__KeyPoint__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rtabmap_ros__msg__KeyPoint__Sequence *
rtabmap_ros__msg__KeyPoint__Sequence__create(size_t size)
{
  rtabmap_ros__msg__KeyPoint__Sequence * array = (rtabmap_ros__msg__KeyPoint__Sequence *)malloc(sizeof(rtabmap_ros__msg__KeyPoint__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_ros__msg__KeyPoint__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rtabmap_ros__msg__KeyPoint__Sequence__destroy(rtabmap_ros__msg__KeyPoint__Sequence * array)
{
  if (array) {
    rtabmap_ros__msg__KeyPoint__Sequence__fini(array);
  }
  free(array);
}
