// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtabmap_ros:msg/Link.idl
// generated code does not contain a copyright notice
#include "rtabmap_ros/msg/detail/link__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `transform`
#include "geometry_msgs/msg/detail/transform__functions.h"

bool
rtabmap_ros__msg__Link__init(rtabmap_ros__msg__Link * msg)
{
  if (!msg) {
    return false;
  }
  // from_id
  // to_id
  // type
  // transform
  if (!geometry_msgs__msg__Transform__init(&msg->transform)) {
    rtabmap_ros__msg__Link__fini(msg);
    return false;
  }
  // information
  return true;
}

void
rtabmap_ros__msg__Link__fini(rtabmap_ros__msg__Link * msg)
{
  if (!msg) {
    return;
  }
  // from_id
  // to_id
  // type
  // transform
  geometry_msgs__msg__Transform__fini(&msg->transform);
  // information
}

rtabmap_ros__msg__Link *
rtabmap_ros__msg__Link__create()
{
  rtabmap_ros__msg__Link * msg = (rtabmap_ros__msg__Link *)malloc(sizeof(rtabmap_ros__msg__Link));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_ros__msg__Link));
  bool success = rtabmap_ros__msg__Link__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rtabmap_ros__msg__Link__destroy(rtabmap_ros__msg__Link * msg)
{
  if (msg) {
    rtabmap_ros__msg__Link__fini(msg);
  }
  free(msg);
}


bool
rtabmap_ros__msg__Link__Sequence__init(rtabmap_ros__msg__Link__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rtabmap_ros__msg__Link * data = NULL;
  if (size) {
    data = (rtabmap_ros__msg__Link *)calloc(size, sizeof(rtabmap_ros__msg__Link));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_ros__msg__Link__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_ros__msg__Link__fini(&data[i - 1]);
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
rtabmap_ros__msg__Link__Sequence__fini(rtabmap_ros__msg__Link__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rtabmap_ros__msg__Link__fini(&array->data[i]);
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

rtabmap_ros__msg__Link__Sequence *
rtabmap_ros__msg__Link__Sequence__create(size_t size)
{
  rtabmap_ros__msg__Link__Sequence * array = (rtabmap_ros__msg__Link__Sequence *)malloc(sizeof(rtabmap_ros__msg__Link__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_ros__msg__Link__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rtabmap_ros__msg__Link__Sequence__destroy(rtabmap_ros__msg__Link__Sequence * array)
{
  if (array) {
    rtabmap_ros__msg__Link__Sequence__fini(array);
  }
  free(array);
}
