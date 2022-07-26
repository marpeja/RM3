// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtabmap_ros:msg/GPS.idl
// generated code does not contain a copyright notice
#include "rtabmap_ros/msg/detail/gps__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
rtabmap_ros__msg__GPS__init(rtabmap_ros__msg__GPS * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  // longitude
  // latitude
  // altitude
  // error
  // bearing
  return true;
}

void
rtabmap_ros__msg__GPS__fini(rtabmap_ros__msg__GPS * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  // longitude
  // latitude
  // altitude
  // error
  // bearing
}

rtabmap_ros__msg__GPS *
rtabmap_ros__msg__GPS__create()
{
  rtabmap_ros__msg__GPS * msg = (rtabmap_ros__msg__GPS *)malloc(sizeof(rtabmap_ros__msg__GPS));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_ros__msg__GPS));
  bool success = rtabmap_ros__msg__GPS__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rtabmap_ros__msg__GPS__destroy(rtabmap_ros__msg__GPS * msg)
{
  if (msg) {
    rtabmap_ros__msg__GPS__fini(msg);
  }
  free(msg);
}


bool
rtabmap_ros__msg__GPS__Sequence__init(rtabmap_ros__msg__GPS__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rtabmap_ros__msg__GPS * data = NULL;
  if (size) {
    data = (rtabmap_ros__msg__GPS *)calloc(size, sizeof(rtabmap_ros__msg__GPS));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_ros__msg__GPS__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_ros__msg__GPS__fini(&data[i - 1]);
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
rtabmap_ros__msg__GPS__Sequence__fini(rtabmap_ros__msg__GPS__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rtabmap_ros__msg__GPS__fini(&array->data[i]);
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

rtabmap_ros__msg__GPS__Sequence *
rtabmap_ros__msg__GPS__Sequence__create(size_t size)
{
  rtabmap_ros__msg__GPS__Sequence * array = (rtabmap_ros__msg__GPS__Sequence *)malloc(sizeof(rtabmap_ros__msg__GPS__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_ros__msg__GPS__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rtabmap_ros__msg__GPS__Sequence__destroy(rtabmap_ros__msg__GPS__Sequence * array)
{
  if (array) {
    rtabmap_ros__msg__GPS__Sequence__fini(array);
  }
  free(array);
}
