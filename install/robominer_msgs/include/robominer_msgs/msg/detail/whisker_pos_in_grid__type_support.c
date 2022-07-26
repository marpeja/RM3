// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robominer_msgs:msg/WhiskerPosInGrid.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robominer_msgs/msg/detail/whisker_pos_in_grid__rosidl_typesupport_introspection_c.h"
#include "robominer_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robominer_msgs/msg/detail/whisker_pos_in_grid__functions.h"
#include "robominer_msgs/msg/detail/whisker_pos_in_grid__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void WhiskerPosInGrid__rosidl_typesupport_introspection_c__WhiskerPosInGrid_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robominer_msgs__msg__WhiskerPosInGrid__init(message_memory);
}

void WhiskerPosInGrid__rosidl_typesupport_introspection_c__WhiskerPosInGrid_fini_function(void * message_memory)
{
  robominer_msgs__msg__WhiskerPosInGrid__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember WhiskerPosInGrid__rosidl_typesupport_introspection_c__WhiskerPosInGrid_message_member_array[3] = {
  {
    "row_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs__msg__WhiskerPosInGrid, row_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "col_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs__msg__WhiskerPosInGrid, col_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offset_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs__msg__WhiskerPosInGrid, offset_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WhiskerPosInGrid__rosidl_typesupport_introspection_c__WhiskerPosInGrid_message_members = {
  "robominer_msgs__msg",  // message namespace
  "WhiskerPosInGrid",  // message name
  3,  // number of fields
  sizeof(robominer_msgs__msg__WhiskerPosInGrid),
  WhiskerPosInGrid__rosidl_typesupport_introspection_c__WhiskerPosInGrid_message_member_array,  // message members
  WhiskerPosInGrid__rosidl_typesupport_introspection_c__WhiskerPosInGrid_init_function,  // function to initialize message memory (memory has to be allocated)
  WhiskerPosInGrid__rosidl_typesupport_introspection_c__WhiskerPosInGrid_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WhiskerPosInGrid__rosidl_typesupport_introspection_c__WhiskerPosInGrid_message_type_support_handle = {
  0,
  &WhiskerPosInGrid__rosidl_typesupport_introspection_c__WhiskerPosInGrid_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robominer_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robominer_msgs, msg, WhiskerPosInGrid)() {
  if (!WhiskerPosInGrid__rosidl_typesupport_introspection_c__WhiskerPosInGrid_message_type_support_handle.typesupport_identifier) {
    WhiskerPosInGrid__rosidl_typesupport_introspection_c__WhiskerPosInGrid_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WhiskerPosInGrid__rosidl_typesupport_introspection_c__WhiskerPosInGrid_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
