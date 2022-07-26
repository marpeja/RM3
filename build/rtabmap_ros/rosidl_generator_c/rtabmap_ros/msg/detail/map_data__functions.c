// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtabmap_ros:msg/MapData.idl
// generated code does not contain a copyright notice
#include "rtabmap_ros/msg/detail/map_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `graph`
#include "rtabmap_ros/msg/detail/map_graph__functions.h"
// Member `nodes`
#include "rtabmap_ros/msg/detail/node_data__functions.h"

bool
rtabmap_ros__msg__MapData__init(rtabmap_ros__msg__MapData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rtabmap_ros__msg__MapData__fini(msg);
    return false;
  }
  // graph
  if (!rtabmap_ros__msg__MapGraph__init(&msg->graph)) {
    rtabmap_ros__msg__MapData__fini(msg);
    return false;
  }
  // nodes
  if (!rtabmap_ros__msg__NodeData__Sequence__init(&msg->nodes, 0)) {
    rtabmap_ros__msg__MapData__fini(msg);
    return false;
  }
  return true;
}

void
rtabmap_ros__msg__MapData__fini(rtabmap_ros__msg__MapData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // graph
  rtabmap_ros__msg__MapGraph__fini(&msg->graph);
  // nodes
  rtabmap_ros__msg__NodeData__Sequence__fini(&msg->nodes);
}

rtabmap_ros__msg__MapData *
rtabmap_ros__msg__MapData__create()
{
  rtabmap_ros__msg__MapData * msg = (rtabmap_ros__msg__MapData *)malloc(sizeof(rtabmap_ros__msg__MapData));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_ros__msg__MapData));
  bool success = rtabmap_ros__msg__MapData__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rtabmap_ros__msg__MapData__destroy(rtabmap_ros__msg__MapData * msg)
{
  if (msg) {
    rtabmap_ros__msg__MapData__fini(msg);
  }
  free(msg);
}


bool
rtabmap_ros__msg__MapData__Sequence__init(rtabmap_ros__msg__MapData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rtabmap_ros__msg__MapData * data = NULL;
  if (size) {
    data = (rtabmap_ros__msg__MapData *)calloc(size, sizeof(rtabmap_ros__msg__MapData));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_ros__msg__MapData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_ros__msg__MapData__fini(&data[i - 1]);
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
rtabmap_ros__msg__MapData__Sequence__fini(rtabmap_ros__msg__MapData__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rtabmap_ros__msg__MapData__fini(&array->data[i]);
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

rtabmap_ros__msg__MapData__Sequence *
rtabmap_ros__msg__MapData__Sequence__create(size_t size)
{
  rtabmap_ros__msg__MapData__Sequence * array = (rtabmap_ros__msg__MapData__Sequence *)malloc(sizeof(rtabmap_ros__msg__MapData__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_ros__msg__MapData__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rtabmap_ros__msg__MapData__Sequence__destroy(rtabmap_ros__msg__MapData__Sequence * array)
{
  if (array) {
    rtabmap_ros__msg__MapData__Sequence__fini(array);
  }
  free(array);
}
