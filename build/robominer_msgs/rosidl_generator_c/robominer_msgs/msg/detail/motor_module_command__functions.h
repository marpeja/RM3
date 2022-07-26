// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robominer_msgs:msg/MotorModuleCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOMINER_MSGS__MSG__DETAIL__MOTOR_MODULE_COMMAND__FUNCTIONS_H_
#define ROBOMINER_MSGS__MSG__DETAIL__MOTOR_MODULE_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robominer_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "robominer_msgs/msg/detail/motor_module_command__struct.h"

/// Initialize msg/MotorModuleCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robominer_msgs__msg__MotorModuleCommand
 * )) before or use
 * robominer_msgs__msg__MotorModuleCommand__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robominer_msgs
bool
robominer_msgs__msg__MotorModuleCommand__init(robominer_msgs__msg__MotorModuleCommand * msg);

/// Finalize msg/MotorModuleCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robominer_msgs
void
robominer_msgs__msg__MotorModuleCommand__fini(robominer_msgs__msg__MotorModuleCommand * msg);

/// Create msg/MotorModuleCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robominer_msgs__msg__MotorModuleCommand__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robominer_msgs
robominer_msgs__msg__MotorModuleCommand *
robominer_msgs__msg__MotorModuleCommand__create();

/// Destroy msg/MotorModuleCommand message.
/**
 * It calls
 * robominer_msgs__msg__MotorModuleCommand__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robominer_msgs
void
robominer_msgs__msg__MotorModuleCommand__destroy(robominer_msgs__msg__MotorModuleCommand * msg);


/// Initialize array of msg/MotorModuleCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * robominer_msgs__msg__MotorModuleCommand__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robominer_msgs
bool
robominer_msgs__msg__MotorModuleCommand__Sequence__init(robominer_msgs__msg__MotorModuleCommand__Sequence * array, size_t size);

/// Finalize array of msg/MotorModuleCommand messages.
/**
 * It calls
 * robominer_msgs__msg__MotorModuleCommand__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robominer_msgs
void
robominer_msgs__msg__MotorModuleCommand__Sequence__fini(robominer_msgs__msg__MotorModuleCommand__Sequence * array);

/// Create array of msg/MotorModuleCommand messages.
/**
 * It allocates the memory for the array and calls
 * robominer_msgs__msg__MotorModuleCommand__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robominer_msgs
robominer_msgs__msg__MotorModuleCommand__Sequence *
robominer_msgs__msg__MotorModuleCommand__Sequence__create(size_t size);

/// Destroy array of msg/MotorModuleCommand messages.
/**
 * It calls
 * robominer_msgs__msg__MotorModuleCommand__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robominer_msgs
void
robominer_msgs__msg__MotorModuleCommand__Sequence__destroy(robominer_msgs__msg__MotorModuleCommand__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ROBOMINER_MSGS__MSG__DETAIL__MOTOR_MODULE_COMMAND__FUNCTIONS_H_
