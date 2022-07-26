// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rtabmap_ros:msg/Path.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_ROS__MSG__DETAIL__PATH__FUNCTIONS_H_
#define RTABMAP_ROS__MSG__DETAIL__PATH__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rtabmap_ros/msg/rosidl_generator_c__visibility_control.h"

#include "rtabmap_ros/msg/detail/path__struct.h"

/// Initialize msg/Path message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rtabmap_ros__msg__Path
 * )) before or use
 * rtabmap_ros__msg__Path__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_ros
bool
rtabmap_ros__msg__Path__init(rtabmap_ros__msg__Path * msg);

/// Finalize msg/Path message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_ros
void
rtabmap_ros__msg__Path__fini(rtabmap_ros__msg__Path * msg);

/// Create msg/Path message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rtabmap_ros__msg__Path__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_ros
rtabmap_ros__msg__Path *
rtabmap_ros__msg__Path__create();

/// Destroy msg/Path message.
/**
 * It calls
 * rtabmap_ros__msg__Path__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_ros
void
rtabmap_ros__msg__Path__destroy(rtabmap_ros__msg__Path * msg);


/// Initialize array of msg/Path messages.
/**
 * It allocates the memory for the number of elements and calls
 * rtabmap_ros__msg__Path__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_ros
bool
rtabmap_ros__msg__Path__Sequence__init(rtabmap_ros__msg__Path__Sequence * array, size_t size);

/// Finalize array of msg/Path messages.
/**
 * It calls
 * rtabmap_ros__msg__Path__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_ros
void
rtabmap_ros__msg__Path__Sequence__fini(rtabmap_ros__msg__Path__Sequence * array);

/// Create array of msg/Path messages.
/**
 * It allocates the memory for the array and calls
 * rtabmap_ros__msg__Path__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_ros
rtabmap_ros__msg__Path__Sequence *
rtabmap_ros__msg__Path__Sequence__create(size_t size);

/// Destroy array of msg/Path messages.
/**
 * It calls
 * rtabmap_ros__msg__Path__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rtabmap_ros
void
rtabmap_ros__msg__Path__Sequence__destroy(rtabmap_ros__msg__Path__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_ROS__MSG__DETAIL__PATH__FUNCTIONS_H_