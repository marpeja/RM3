// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtabmap_ros:srv/GetNodesInRadius.idl
// generated code does not contain a copyright notice
#include "rtabmap_ros/srv/detail/get_nodes_in_radius__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
rtabmap_ros__srv__GetNodesInRadius_Request__init(rtabmap_ros__srv__GetNodesInRadius_Request * msg)
{
  if (!msg) {
    return false;
  }
  // node_id
  // x
  // y
  // z
  // radius
  // k
  return true;
}

void
rtabmap_ros__srv__GetNodesInRadius_Request__fini(rtabmap_ros__srv__GetNodesInRadius_Request * msg)
{
  if (!msg) {
    return;
  }
  // node_id
  // x
  // y
  // z
  // radius
  // k
}

rtabmap_ros__srv__GetNodesInRadius_Request *
rtabmap_ros__srv__GetNodesInRadius_Request__create()
{
  rtabmap_ros__srv__GetNodesInRadius_Request * msg = (rtabmap_ros__srv__GetNodesInRadius_Request *)malloc(sizeof(rtabmap_ros__srv__GetNodesInRadius_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_ros__srv__GetNodesInRadius_Request));
  bool success = rtabmap_ros__srv__GetNodesInRadius_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rtabmap_ros__srv__GetNodesInRadius_Request__destroy(rtabmap_ros__srv__GetNodesInRadius_Request * msg)
{
  if (msg) {
    rtabmap_ros__srv__GetNodesInRadius_Request__fini(msg);
  }
  free(msg);
}


bool
rtabmap_ros__srv__GetNodesInRadius_Request__Sequence__init(rtabmap_ros__srv__GetNodesInRadius_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rtabmap_ros__srv__GetNodesInRadius_Request * data = NULL;
  if (size) {
    data = (rtabmap_ros__srv__GetNodesInRadius_Request *)calloc(size, sizeof(rtabmap_ros__srv__GetNodesInRadius_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_ros__srv__GetNodesInRadius_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_ros__srv__GetNodesInRadius_Request__fini(&data[i - 1]);
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
rtabmap_ros__srv__GetNodesInRadius_Request__Sequence__fini(rtabmap_ros__srv__GetNodesInRadius_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rtabmap_ros__srv__GetNodesInRadius_Request__fini(&array->data[i]);
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

rtabmap_ros__srv__GetNodesInRadius_Request__Sequence *
rtabmap_ros__srv__GetNodesInRadius_Request__Sequence__create(size_t size)
{
  rtabmap_ros__srv__GetNodesInRadius_Request__Sequence * array = (rtabmap_ros__srv__GetNodesInRadius_Request__Sequence *)malloc(sizeof(rtabmap_ros__srv__GetNodesInRadius_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_ros__srv__GetNodesInRadius_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rtabmap_ros__srv__GetNodesInRadius_Request__Sequence__destroy(rtabmap_ros__srv__GetNodesInRadius_Request__Sequence * array)
{
  if (array) {
    rtabmap_ros__srv__GetNodesInRadius_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `ids`
// Member `dists_sqr`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
rtabmap_ros__srv__GetNodesInRadius_Response__init(rtabmap_ros__srv__GetNodesInRadius_Response * msg)
{
  if (!msg) {
    return false;
  }
  // ids
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->ids, 0)) {
    rtabmap_ros__srv__GetNodesInRadius_Response__fini(msg);
    return false;
  }
  // poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->poses, 0)) {
    rtabmap_ros__srv__GetNodesInRadius_Response__fini(msg);
    return false;
  }
  // dists_sqr
  if (!rosidl_runtime_c__float__Sequence__init(&msg->dists_sqr, 0)) {
    rtabmap_ros__srv__GetNodesInRadius_Response__fini(msg);
    return false;
  }
  return true;
}

void
rtabmap_ros__srv__GetNodesInRadius_Response__fini(rtabmap_ros__srv__GetNodesInRadius_Response * msg)
{
  if (!msg) {
    return;
  }
  // ids
  rosidl_runtime_c__int32__Sequence__fini(&msg->ids);
  // poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->poses);
  // dists_sqr
  rosidl_runtime_c__float__Sequence__fini(&msg->dists_sqr);
}

rtabmap_ros__srv__GetNodesInRadius_Response *
rtabmap_ros__srv__GetNodesInRadius_Response__create()
{
  rtabmap_ros__srv__GetNodesInRadius_Response * msg = (rtabmap_ros__srv__GetNodesInRadius_Response *)malloc(sizeof(rtabmap_ros__srv__GetNodesInRadius_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_ros__srv__GetNodesInRadius_Response));
  bool success = rtabmap_ros__srv__GetNodesInRadius_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rtabmap_ros__srv__GetNodesInRadius_Response__destroy(rtabmap_ros__srv__GetNodesInRadius_Response * msg)
{
  if (msg) {
    rtabmap_ros__srv__GetNodesInRadius_Response__fini(msg);
  }
  free(msg);
}


bool
rtabmap_ros__srv__GetNodesInRadius_Response__Sequence__init(rtabmap_ros__srv__GetNodesInRadius_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rtabmap_ros__srv__GetNodesInRadius_Response * data = NULL;
  if (size) {
    data = (rtabmap_ros__srv__GetNodesInRadius_Response *)calloc(size, sizeof(rtabmap_ros__srv__GetNodesInRadius_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_ros__srv__GetNodesInRadius_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_ros__srv__GetNodesInRadius_Response__fini(&data[i - 1]);
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
rtabmap_ros__srv__GetNodesInRadius_Response__Sequence__fini(rtabmap_ros__srv__GetNodesInRadius_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rtabmap_ros__srv__GetNodesInRadius_Response__fini(&array->data[i]);
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

rtabmap_ros__srv__GetNodesInRadius_Response__Sequence *
rtabmap_ros__srv__GetNodesInRadius_Response__Sequence__create(size_t size)
{
  rtabmap_ros__srv__GetNodesInRadius_Response__Sequence * array = (rtabmap_ros__srv__GetNodesInRadius_Response__Sequence *)malloc(sizeof(rtabmap_ros__srv__GetNodesInRadius_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_ros__srv__GetNodesInRadius_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rtabmap_ros__srv__GetNodesInRadius_Response__Sequence__destroy(rtabmap_ros__srv__GetNodesInRadius_Response__Sequence * array)
{
  if (array) {
    rtabmap_ros__srv__GetNodesInRadius_Response__Sequence__fini(array);
  }
  free(array);
}
