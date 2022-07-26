// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robominer_msgs:msg/WhiskerArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robominer_msgs/msg/detail/whisker_array__rosidl_typesupport_introspection_c.h"
#include "robominer_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robominer_msgs/msg/detail/whisker_array__functions.h"
#include "robominer_msgs/msg/detail/whisker_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `representation`
#include "rosidl_runtime_c/string_functions.h"
// Member `whiskers`
#include "robominer_msgs/msg/whisker.h"
// Member `whiskers`
#include "robominer_msgs/msg/detail/whisker__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void WhiskerArray__rosidl_typesupport_introspection_c__WhiskerArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robominer_msgs__msg__WhiskerArray__init(message_memory);
}

void WhiskerArray__rosidl_typesupport_introspection_c__WhiskerArray_fini_function(void * message_memory)
{
  robominer_msgs__msg__WhiskerArray__fini(message_memory);
}

size_t WhiskerArray__rosidl_typesupport_introspection_c__size_function__Whisker__whiskers(
  const void * untyped_member)
{
  const robominer_msgs__msg__Whisker__Sequence * member =
    (const robominer_msgs__msg__Whisker__Sequence *)(untyped_member);
  return member->size;
}

const void * WhiskerArray__rosidl_typesupport_introspection_c__get_const_function__Whisker__whiskers(
  const void * untyped_member, size_t index)
{
  const robominer_msgs__msg__Whisker__Sequence * member =
    (const robominer_msgs__msg__Whisker__Sequence *)(untyped_member);
  return &member->data[index];
}

void * WhiskerArray__rosidl_typesupport_introspection_c__get_function__Whisker__whiskers(
  void * untyped_member, size_t index)
{
  robominer_msgs__msg__Whisker__Sequence * member =
    (robominer_msgs__msg__Whisker__Sequence *)(untyped_member);
  return &member->data[index];
}

bool WhiskerArray__rosidl_typesupport_introspection_c__resize_function__Whisker__whiskers(
  void * untyped_member, size_t size)
{
  robominer_msgs__msg__Whisker__Sequence * member =
    (robominer_msgs__msg__Whisker__Sequence *)(untyped_member);
  robominer_msgs__msg__Whisker__Sequence__fini(member);
  return robominer_msgs__msg__Whisker__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember WhiskerArray__rosidl_typesupport_introspection_c__WhiskerArray_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs__msg__WhiskerArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_mux",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs__msg__WhiskerArray, num_mux),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_sensors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs__msg__WhiskerArray, num_sensors),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "representation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs__msg__WhiskerArray, representation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "whiskers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs__msg__WhiskerArray, whiskers),  // bytes offset in struct
    NULL,  // default value
    WhiskerArray__rosidl_typesupport_introspection_c__size_function__Whisker__whiskers,  // size() function pointer
    WhiskerArray__rosidl_typesupport_introspection_c__get_const_function__Whisker__whiskers,  // get_const(index) function pointer
    WhiskerArray__rosidl_typesupport_introspection_c__get_function__Whisker__whiskers,  // get(index) function pointer
    WhiskerArray__rosidl_typesupport_introspection_c__resize_function__Whisker__whiskers  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WhiskerArray__rosidl_typesupport_introspection_c__WhiskerArray_message_members = {
  "robominer_msgs__msg",  // message namespace
  "WhiskerArray",  // message name
  5,  // number of fields
  sizeof(robominer_msgs__msg__WhiskerArray),
  WhiskerArray__rosidl_typesupport_introspection_c__WhiskerArray_message_member_array,  // message members
  WhiskerArray__rosidl_typesupport_introspection_c__WhiskerArray_init_function,  // function to initialize message memory (memory has to be allocated)
  WhiskerArray__rosidl_typesupport_introspection_c__WhiskerArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WhiskerArray__rosidl_typesupport_introspection_c__WhiskerArray_message_type_support_handle = {
  0,
  &WhiskerArray__rosidl_typesupport_introspection_c__WhiskerArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robominer_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robominer_msgs, msg, WhiskerArray)() {
  WhiskerArray__rosidl_typesupport_introspection_c__WhiskerArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  WhiskerArray__rosidl_typesupport_introspection_c__WhiskerArray_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robominer_msgs, msg, Whisker)();
  if (!WhiskerArray__rosidl_typesupport_introspection_c__WhiskerArray_message_type_support_handle.typesupport_identifier) {
    WhiskerArray__rosidl_typesupport_introspection_c__WhiskerArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WhiskerArray__rosidl_typesupport_introspection_c__WhiskerArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
