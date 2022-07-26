// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtabmap_ros:msg/NodeData.idl
// generated code does not contain a copyright notice
#include "rtabmap_ros/msg/detail/node_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `label`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
// Member `ground_truth_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `gps`
#include "rtabmap_ros/msg/detail/gps__functions.h"
// Member `image`
// Member `depth`
// Member `fx`
// Member `fy`
// Member `cx`
// Member `cy`
// Member `width`
// Member `height`
// Member `laser_scan`
// Member `user_data`
// Member `grid_ground`
// Member `grid_obstacles`
// Member `grid_empty_cells`
// Member `word_id_keys`
// Member `word_id_values`
// Member `word_descriptors`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `local_transform`
// Member `laser_scan_local_transform`
#include "geometry_msgs/msg/detail/transform__functions.h"
// Member `grid_view_point`
// Member `word_pts`
#include "rtabmap_ros/msg/detail/point3f__functions.h"
// Member `word_kpts`
#include "rtabmap_ros/msg/detail/key_point__functions.h"
// Member `global_descriptors`
#include "rtabmap_ros/msg/detail/global_descriptor__functions.h"
// Member `env_sensors`
#include "rtabmap_ros/msg/detail/env_sensor__functions.h"

bool
rtabmap_ros__msg__NodeData__init(rtabmap_ros__msg__NodeData * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // map_id
  // weight
  // stamp
  // label
  if (!rosidl_runtime_c__String__init(&msg->label)) {
    rtabmap_ros__msg__NodeData__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    rtabmap_ros__msg__NodeData__fini(msg);
    return false;
  }
  // ground_truth_pose
  if (!geometry_msgs__msg__Pose__init(&msg->ground_truth_pose)) {
    rtabmap_ros__msg__NodeData__fini(msg);
    return false;
  }
  // gps
  if (!rtabmap_ros__msg__GPS__init(&msg->gps)) {
    rtabmap_ros__msg__NodeData__fini(msg);
    return false;
  }
  // image
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->image, 0)) {
    rtabmap_ros__msg__NodeData__fini(msg);
    return false;
  }
  // depth
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->depth, 0)) {
    rtabmap_ros__msg__NodeData__fini(msg);
    return false;
  }
  // fx
  if (!rosidl_runtime_c__float__Sequence__init(&msg->fx, 0)) {
    rtabmap_ros__msg__NodeData__fini(msg);
    return false;
  }
  // fy
  if (!rosidl_runtime_c__float__Sequence__init(&msg->fy, 0)) {
    rtabmap_ros__msg__NodeData__fini(msg);
    return false;
  }
  // cx
  if (!rosidl_runtime_c__float__Sequence__init(&msg->cx, 0)) {
    rtabmap_ros__msg__NodeData__fini(msg);
    return false;
  }
  // cy
  if (!rosidl_runtime_c__float__Sequence__init(&msg->cy, 0)) {
    rtabmap_ros__msg__NodeData__fini(msg);
    return false;
  }
  // width
  if (!rosidl_runtime_c__float__Sequence__init(&msg->width, 0)) {
    rtabmap_ros__msg__NodeData__fini(msg);
    return false;
  }
  // height
  if (!rosidl_runtime_c__float__Sequence__init(&msg->height, 0)) {
    rtabmap_ros__msg__NodeData__fini(msg);
    return false;
  }
  // baseline
  // local_transform
  if (!geometry_msgs__msg__Transform__Sequence__init(&msg->local_transform, 0)) {
    rtabmap_ros__msg__NodeData__fini(msg);
    return false;
  }
  // laser_scan
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->laser_scan, 0)) {
    rtabmap_ros__msg__NodeData__fini(msg);
    return false;
  }
  // laser_scan_max_pts
  // laser_scan_max_range
  // laser_scan_format
  // laser_scan_local_transform
  if (!geometry_msgs__msg__Transform__init(&msg->laser_scan_local_transform)) {
    rtabmap_ros__msg__NodeData__fini(msg);
    return false;
  }
  // user_data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->user_data, 0)) {
    rtabmap_ros__msg__NodeData__fini(msg);
    return false;
  }
  // grid_ground
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->grid_ground, 0)) {
    rtabmap_ros__msg__NodeData__fini(msg);
    return false;
  }
  // grid_obstacles
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->grid_obstacles, 0)) {
    rtabmap_ros__msg__NodeData__fini(msg);
    return false;
  }
  // grid_empty_cells
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->grid_empty_cells, 0)) {
    rtabmap_ros__msg__NodeData__fini(msg);
    return false;
  }
  // grid_cell_size
  // grid_view_point
  if (!rtabmap_ros__msg__Point3f__init(&msg->grid_view_point)) {
    rtabmap_ros__msg__NodeData__fini(msg);
    return false;
  }
  // word_id_keys
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->word_id_keys, 0)) {
    rtabmap_ros__msg__NodeData__fini(msg);
    return false;
  }
  // word_id_values
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->word_id_values, 0)) {
    rtabmap_ros__msg__NodeData__fini(msg);
    return false;
  }
  // word_kpts
  if (!rtabmap_ros__msg__KeyPoint__Sequence__init(&msg->word_kpts, 0)) {
    rtabmap_ros__msg__NodeData__fini(msg);
    return false;
  }
  // word_pts
  if (!rtabmap_ros__msg__Point3f__Sequence__init(&msg->word_pts, 0)) {
    rtabmap_ros__msg__NodeData__fini(msg);
    return false;
  }
  // word_descriptors
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->word_descriptors, 0)) {
    rtabmap_ros__msg__NodeData__fini(msg);
    return false;
  }
  // global_descriptors
  if (!rtabmap_ros__msg__GlobalDescriptor__Sequence__init(&msg->global_descriptors, 0)) {
    rtabmap_ros__msg__NodeData__fini(msg);
    return false;
  }
  // env_sensors
  if (!rtabmap_ros__msg__EnvSensor__Sequence__init(&msg->env_sensors, 0)) {
    rtabmap_ros__msg__NodeData__fini(msg);
    return false;
  }
  return true;
}

void
rtabmap_ros__msg__NodeData__fini(rtabmap_ros__msg__NodeData * msg)
{
  if (!msg) {
    return;
  }
  // id
  // map_id
  // weight
  // stamp
  // label
  rosidl_runtime_c__String__fini(&msg->label);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // ground_truth_pose
  geometry_msgs__msg__Pose__fini(&msg->ground_truth_pose);
  // gps
  rtabmap_ros__msg__GPS__fini(&msg->gps);
  // image
  rosidl_runtime_c__uint8__Sequence__fini(&msg->image);
  // depth
  rosidl_runtime_c__uint8__Sequence__fini(&msg->depth);
  // fx
  rosidl_runtime_c__float__Sequence__fini(&msg->fx);
  // fy
  rosidl_runtime_c__float__Sequence__fini(&msg->fy);
  // cx
  rosidl_runtime_c__float__Sequence__fini(&msg->cx);
  // cy
  rosidl_runtime_c__float__Sequence__fini(&msg->cy);
  // width
  rosidl_runtime_c__float__Sequence__fini(&msg->width);
  // height
  rosidl_runtime_c__float__Sequence__fini(&msg->height);
  // baseline
  // local_transform
  geometry_msgs__msg__Transform__Sequence__fini(&msg->local_transform);
  // laser_scan
  rosidl_runtime_c__uint8__Sequence__fini(&msg->laser_scan);
  // laser_scan_max_pts
  // laser_scan_max_range
  // laser_scan_format
  // laser_scan_local_transform
  geometry_msgs__msg__Transform__fini(&msg->laser_scan_local_transform);
  // user_data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->user_data);
  // grid_ground
  rosidl_runtime_c__uint8__Sequence__fini(&msg->grid_ground);
  // grid_obstacles
  rosidl_runtime_c__uint8__Sequence__fini(&msg->grid_obstacles);
  // grid_empty_cells
  rosidl_runtime_c__uint8__Sequence__fini(&msg->grid_empty_cells);
  // grid_cell_size
  // grid_view_point
  rtabmap_ros__msg__Point3f__fini(&msg->grid_view_point);
  // word_id_keys
  rosidl_runtime_c__int32__Sequence__fini(&msg->word_id_keys);
  // word_id_values
  rosidl_runtime_c__int32__Sequence__fini(&msg->word_id_values);
  // word_kpts
  rtabmap_ros__msg__KeyPoint__Sequence__fini(&msg->word_kpts);
  // word_pts
  rtabmap_ros__msg__Point3f__Sequence__fini(&msg->word_pts);
  // word_descriptors
  rosidl_runtime_c__uint8__Sequence__fini(&msg->word_descriptors);
  // global_descriptors
  rtabmap_ros__msg__GlobalDescriptor__Sequence__fini(&msg->global_descriptors);
  // env_sensors
  rtabmap_ros__msg__EnvSensor__Sequence__fini(&msg->env_sensors);
}

rtabmap_ros__msg__NodeData *
rtabmap_ros__msg__NodeData__create()
{
  rtabmap_ros__msg__NodeData * msg = (rtabmap_ros__msg__NodeData *)malloc(sizeof(rtabmap_ros__msg__NodeData));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_ros__msg__NodeData));
  bool success = rtabmap_ros__msg__NodeData__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rtabmap_ros__msg__NodeData__destroy(rtabmap_ros__msg__NodeData * msg)
{
  if (msg) {
    rtabmap_ros__msg__NodeData__fini(msg);
  }
  free(msg);
}


bool
rtabmap_ros__msg__NodeData__Sequence__init(rtabmap_ros__msg__NodeData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rtabmap_ros__msg__NodeData * data = NULL;
  if (size) {
    data = (rtabmap_ros__msg__NodeData *)calloc(size, sizeof(rtabmap_ros__msg__NodeData));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_ros__msg__NodeData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_ros__msg__NodeData__fini(&data[i - 1]);
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
rtabmap_ros__msg__NodeData__Sequence__fini(rtabmap_ros__msg__NodeData__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rtabmap_ros__msg__NodeData__fini(&array->data[i]);
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

rtabmap_ros__msg__NodeData__Sequence *
rtabmap_ros__msg__NodeData__Sequence__create(size_t size)
{
  rtabmap_ros__msg__NodeData__Sequence * array = (rtabmap_ros__msg__NodeData__Sequence *)malloc(sizeof(rtabmap_ros__msg__NodeData__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_ros__msg__NodeData__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rtabmap_ros__msg__NodeData__Sequence__destroy(rtabmap_ros__msg__NodeData__Sequence * array)
{
  if (array) {
    rtabmap_ros__msg__NodeData__Sequence__fini(array);
  }
  free(array);
}
