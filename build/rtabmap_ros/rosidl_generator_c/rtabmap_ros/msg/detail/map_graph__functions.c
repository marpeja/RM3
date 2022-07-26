// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtabmap_ros:msg/MapGraph.idl
// generated code does not contain a copyright notice
#include "rtabmap_ros/msg/detail/map_graph__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `map_to_odom`
#include "geometry_msgs/msg/detail/transform__functions.h"
// Member `poses_id`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `links`
#include "rtabmap_ros/msg/detail/link__functions.h"

bool
rtabmap_ros__msg__MapGraph__init(rtabmap_ros__msg__MapGraph * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rtabmap_ros__msg__MapGraph__fini(msg);
    return false;
  }
  // map_to_odom
  if (!geometry_msgs__msg__Transform__init(&msg->map_to_odom)) {
    rtabmap_ros__msg__MapGraph__fini(msg);
    return false;
  }
  // poses_id
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->poses_id, 0)) {
    rtabmap_ros__msg__MapGraph__fini(msg);
    return false;
  }
  // poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->poses, 0)) {
    rtabmap_ros__msg__MapGraph__fini(msg);
    return false;
  }
  // links
  if (!rtabmap_ros__msg__Link__Sequence__init(&msg->links, 0)) {
    rtabmap_ros__msg__MapGraph__fini(msg);
    return false;
  }
  return true;
}

void
rtabmap_ros__msg__MapGraph__fini(rtabmap_ros__msg__MapGraph * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // map_to_odom
  geometry_msgs__msg__Transform__fini(&msg->map_to_odom);
  // poses_id
  rosidl_runtime_c__int32__Sequence__fini(&msg->poses_id);
  // poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->poses);
  // links
  rtabmap_ros__msg__Link__Sequence__fini(&msg->links);
}

rtabmap_ros__msg__MapGraph *
rtabmap_ros__msg__MapGraph__create()
{
  rtabmap_ros__msg__MapGraph * msg = (rtabmap_ros__msg__MapGraph *)malloc(sizeof(rtabmap_ros__msg__MapGraph));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_ros__msg__MapGraph));
  bool success = rtabmap_ros__msg__MapGraph__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rtabmap_ros__msg__MapGraph__destroy(rtabmap_ros__msg__MapGraph * msg)
{
  if (msg) {
    rtabmap_ros__msg__MapGraph__fini(msg);
  }
  free(msg);
}


bool
rtabmap_ros__msg__MapGraph__Sequence__init(rtabmap_ros__msg__MapGraph__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rtabmap_ros__msg__MapGraph * data = NULL;
  if (size) {
    data = (rtabmap_ros__msg__MapGraph *)calloc(size, sizeof(rtabmap_ros__msg__MapGraph));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_ros__msg__MapGraph__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_ros__msg__MapGraph__fini(&data[i - 1]);
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
rtabmap_ros__msg__MapGraph__Sequence__fini(rtabmap_ros__msg__MapGraph__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rtabmap_ros__msg__MapGraph__fini(&array->data[i]);
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

rtabmap_ros__msg__MapGraph__Sequence *
rtabmap_ros__msg__MapGraph__Sequence__create(size_t size)
{
  rtabmap_ros__msg__MapGraph__Sequence * array = (rtabmap_ros__msg__MapGraph__Sequence *)malloc(sizeof(rtabmap_ros__msg__MapGraph__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_ros__msg__MapGraph__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rtabmap_ros__msg__MapGraph__Sequence__destroy(rtabmap_ros__msg__MapGraph__Sequence * array)
{
  if (array) {
    rtabmap_ros__msg__MapGraph__Sequence__fini(array);
  }
  free(array);
}
