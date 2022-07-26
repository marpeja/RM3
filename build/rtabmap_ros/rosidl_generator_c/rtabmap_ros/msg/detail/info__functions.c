// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtabmap_ros:msg/Info.idl
// generated code does not contain a copyright notice
#include "rtabmap_ros/msg/detail/info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `loop_closure_transform`
#include "geometry_msgs/msg/detail/transform__functions.h"
// Member `wm_state`
// Member `posterior_keys`
// Member `posterior_values`
// Member `likelihood_keys`
// Member `likelihood_values`
// Member `raw_likelihood_keys`
// Member `raw_likelihood_values`
// Member `weights_keys`
// Member `weights_values`
// Member `labels_keys`
// Member `stats_values`
// Member `local_path`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `labels_values`
// Member `stats_keys`
#include "rosidl_runtime_c/string_functions.h"
// Member `odom_cache`
#include "rtabmap_ros/msg/detail/map_graph__functions.h"

bool
rtabmap_ros__msg__Info__init(rtabmap_ros__msg__Info * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rtabmap_ros__msg__Info__fini(msg);
    return false;
  }
  // ref_id
  // loop_closure_id
  // proximity_detection_id
  // landmark_id
  // loop_closure_transform
  if (!geometry_msgs__msg__Transform__init(&msg->loop_closure_transform)) {
    rtabmap_ros__msg__Info__fini(msg);
    return false;
  }
  // wm_state
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->wm_state, 0)) {
    rtabmap_ros__msg__Info__fini(msg);
    return false;
  }
  // posterior_keys
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->posterior_keys, 0)) {
    rtabmap_ros__msg__Info__fini(msg);
    return false;
  }
  // posterior_values
  if (!rosidl_runtime_c__float__Sequence__init(&msg->posterior_values, 0)) {
    rtabmap_ros__msg__Info__fini(msg);
    return false;
  }
  // likelihood_keys
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->likelihood_keys, 0)) {
    rtabmap_ros__msg__Info__fini(msg);
    return false;
  }
  // likelihood_values
  if (!rosidl_runtime_c__float__Sequence__init(&msg->likelihood_values, 0)) {
    rtabmap_ros__msg__Info__fini(msg);
    return false;
  }
  // raw_likelihood_keys
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->raw_likelihood_keys, 0)) {
    rtabmap_ros__msg__Info__fini(msg);
    return false;
  }
  // raw_likelihood_values
  if (!rosidl_runtime_c__float__Sequence__init(&msg->raw_likelihood_values, 0)) {
    rtabmap_ros__msg__Info__fini(msg);
    return false;
  }
  // weights_keys
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->weights_keys, 0)) {
    rtabmap_ros__msg__Info__fini(msg);
    return false;
  }
  // weights_values
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->weights_values, 0)) {
    rtabmap_ros__msg__Info__fini(msg);
    return false;
  }
  // labels_keys
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->labels_keys, 0)) {
    rtabmap_ros__msg__Info__fini(msg);
    return false;
  }
  // labels_values
  if (!rosidl_runtime_c__String__Sequence__init(&msg->labels_values, 0)) {
    rtabmap_ros__msg__Info__fini(msg);
    return false;
  }
  // stats_keys
  if (!rosidl_runtime_c__String__Sequence__init(&msg->stats_keys, 0)) {
    rtabmap_ros__msg__Info__fini(msg);
    return false;
  }
  // stats_values
  if (!rosidl_runtime_c__float__Sequence__init(&msg->stats_values, 0)) {
    rtabmap_ros__msg__Info__fini(msg);
    return false;
  }
  // local_path
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->local_path, 0)) {
    rtabmap_ros__msg__Info__fini(msg);
    return false;
  }
  // current_goal_id
  // odom_cache
  if (!rtabmap_ros__msg__MapGraph__init(&msg->odom_cache)) {
    rtabmap_ros__msg__Info__fini(msg);
    return false;
  }
  return true;
}

void
rtabmap_ros__msg__Info__fini(rtabmap_ros__msg__Info * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ref_id
  // loop_closure_id
  // proximity_detection_id
  // landmark_id
  // loop_closure_transform
  geometry_msgs__msg__Transform__fini(&msg->loop_closure_transform);
  // wm_state
  rosidl_runtime_c__int32__Sequence__fini(&msg->wm_state);
  // posterior_keys
  rosidl_runtime_c__int32__Sequence__fini(&msg->posterior_keys);
  // posterior_values
  rosidl_runtime_c__float__Sequence__fini(&msg->posterior_values);
  // likelihood_keys
  rosidl_runtime_c__int32__Sequence__fini(&msg->likelihood_keys);
  // likelihood_values
  rosidl_runtime_c__float__Sequence__fini(&msg->likelihood_values);
  // raw_likelihood_keys
  rosidl_runtime_c__int32__Sequence__fini(&msg->raw_likelihood_keys);
  // raw_likelihood_values
  rosidl_runtime_c__float__Sequence__fini(&msg->raw_likelihood_values);
  // weights_keys
  rosidl_runtime_c__int32__Sequence__fini(&msg->weights_keys);
  // weights_values
  rosidl_runtime_c__int32__Sequence__fini(&msg->weights_values);
  // labels_keys
  rosidl_runtime_c__int32__Sequence__fini(&msg->labels_keys);
  // labels_values
  rosidl_runtime_c__String__Sequence__fini(&msg->labels_values);
  // stats_keys
  rosidl_runtime_c__String__Sequence__fini(&msg->stats_keys);
  // stats_values
  rosidl_runtime_c__float__Sequence__fini(&msg->stats_values);
  // local_path
  rosidl_runtime_c__int32__Sequence__fini(&msg->local_path);
  // current_goal_id
  // odom_cache
  rtabmap_ros__msg__MapGraph__fini(&msg->odom_cache);
}

rtabmap_ros__msg__Info *
rtabmap_ros__msg__Info__create()
{
  rtabmap_ros__msg__Info * msg = (rtabmap_ros__msg__Info *)malloc(sizeof(rtabmap_ros__msg__Info));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_ros__msg__Info));
  bool success = rtabmap_ros__msg__Info__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rtabmap_ros__msg__Info__destroy(rtabmap_ros__msg__Info * msg)
{
  if (msg) {
    rtabmap_ros__msg__Info__fini(msg);
  }
  free(msg);
}


bool
rtabmap_ros__msg__Info__Sequence__init(rtabmap_ros__msg__Info__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rtabmap_ros__msg__Info * data = NULL;
  if (size) {
    data = (rtabmap_ros__msg__Info *)calloc(size, sizeof(rtabmap_ros__msg__Info));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_ros__msg__Info__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_ros__msg__Info__fini(&data[i - 1]);
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
rtabmap_ros__msg__Info__Sequence__fini(rtabmap_ros__msg__Info__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rtabmap_ros__msg__Info__fini(&array->data[i]);
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

rtabmap_ros__msg__Info__Sequence *
rtabmap_ros__msg__Info__Sequence__create(size_t size)
{
  rtabmap_ros__msg__Info__Sequence * array = (rtabmap_ros__msg__Info__Sequence *)malloc(sizeof(rtabmap_ros__msg__Info__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_ros__msg__Info__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rtabmap_ros__msg__Info__Sequence__destroy(rtabmap_ros__msg__Info__Sequence * array)
{
  if (array) {
    rtabmap_ros__msg__Info__Sequence__fini(array);
  }
  free(array);
}
