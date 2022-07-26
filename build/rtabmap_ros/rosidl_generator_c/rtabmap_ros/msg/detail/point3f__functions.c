// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtabmap_ros:msg/Point3f.idl
// generated code does not contain a copyright notice
#include "rtabmap_ros/msg/detail/point3f__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
rtabmap_ros__msg__Point3f__init(rtabmap_ros__msg__Point3f * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  return true;
}

void
rtabmap_ros__msg__Point3f__fini(rtabmap_ros__msg__Point3f * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
}

rtabmap_ros__msg__Point3f *
rtabmap_ros__msg__Point3f__create()
{
  rtabmap_ros__msg__Point3f * msg = (rtabmap_ros__msg__Point3f *)malloc(sizeof(rtabmap_ros__msg__Point3f));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_ros__msg__Point3f));
  bool success = rtabmap_ros__msg__Point3f__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rtabmap_ros__msg__Point3f__destroy(rtabmap_ros__msg__Point3f * msg)
{
  if (msg) {
    rtabmap_ros__msg__Point3f__fini(msg);
  }
  free(msg);
}


bool
rtabmap_ros__msg__Point3f__Sequence__init(rtabmap_ros__msg__Point3f__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rtabmap_ros__msg__Point3f * data = NULL;
  if (size) {
    data = (rtabmap_ros__msg__Point3f *)calloc(size, sizeof(rtabmap_ros__msg__Point3f));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_ros__msg__Point3f__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_ros__msg__Point3f__fini(&data[i - 1]);
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
rtabmap_ros__msg__Point3f__Sequence__fini(rtabmap_ros__msg__Point3f__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rtabmap_ros__msg__Point3f__fini(&array->data[i]);
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

rtabmap_ros__msg__Point3f__Sequence *
rtabmap_ros__msg__Point3f__Sequence__create(size_t size)
{
  rtabmap_ros__msg__Point3f__Sequence * array = (rtabmap_ros__msg__Point3f__Sequence *)malloc(sizeof(rtabmap_ros__msg__Point3f__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_ros__msg__Point3f__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rtabmap_ros__msg__Point3f__Sequence__destroy(rtabmap_ros__msg__Point3f__Sequence * array)
{
  if (array) {
    rtabmap_ros__msg__Point3f__Sequence__fini(array);
  }
  free(array);
}
