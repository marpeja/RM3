// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robominer_msgs:msg/FiducialTransformArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robominer_msgs/msg/detail/fiducial_transform_array__rosidl_typesupport_introspection_c.h"
#include "robominer_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robominer_msgs/msg/detail/fiducial_transform_array__functions.h"
#include "robominer_msgs/msg/detail/fiducial_transform_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `transforms`
#include "robominer_msgs/msg/fiducial_transform.h"
// Member `transforms`
#include "robominer_msgs/msg/detail/fiducial_transform__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FiducialTransformArray__rosidl_typesupport_introspection_c__FiducialTransformArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robominer_msgs__msg__FiducialTransformArray__init(message_memory);
}

void FiducialTransformArray__rosidl_typesupport_introspection_c__FiducialTransformArray_fini_function(void * message_memory)
{
  robominer_msgs__msg__FiducialTransformArray__fini(message_memory);
}

size_t FiducialTransformArray__rosidl_typesupport_introspection_c__size_function__FiducialTransform__transforms(
  const void * untyped_member)
{
  const robominer_msgs__msg__FiducialTransform__Sequence * member =
    (const robominer_msgs__msg__FiducialTransform__Sequence *)(untyped_member);
  return member->size;
}

const void * FiducialTransformArray__rosidl_typesupport_introspection_c__get_const_function__FiducialTransform__transforms(
  const void * untyped_member, size_t index)
{
  const robominer_msgs__msg__FiducialTransform__Sequence * member =
    (const robominer_msgs__msg__FiducialTransform__Sequence *)(untyped_member);
  return &member->data[index];
}

void * FiducialTransformArray__rosidl_typesupport_introspection_c__get_function__FiducialTransform__transforms(
  void * untyped_member, size_t index)
{
  robominer_msgs__msg__FiducialTransform__Sequence * member =
    (robominer_msgs__msg__FiducialTransform__Sequence *)(untyped_member);
  return &member->data[index];
}

bool FiducialTransformArray__rosidl_typesupport_introspection_c__resize_function__FiducialTransform__transforms(
  void * untyped_member, size_t size)
{
  robominer_msgs__msg__FiducialTransform__Sequence * member =
    (robominer_msgs__msg__FiducialTransform__Sequence *)(untyped_member);
  robominer_msgs__msg__FiducialTransform__Sequence__fini(member);
  return robominer_msgs__msg__FiducialTransform__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember FiducialTransformArray__rosidl_typesupport_introspection_c__FiducialTransformArray_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs__msg__FiducialTransformArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image_seq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs__msg__FiducialTransformArray, image_seq),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transforms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs__msg__FiducialTransformArray, transforms),  // bytes offset in struct
    NULL,  // default value
    FiducialTransformArray__rosidl_typesupport_introspection_c__size_function__FiducialTransform__transforms,  // size() function pointer
    FiducialTransformArray__rosidl_typesupport_introspection_c__get_const_function__FiducialTransform__transforms,  // get_const(index) function pointer
    FiducialTransformArray__rosidl_typesupport_introspection_c__get_function__FiducialTransform__transforms,  // get(index) function pointer
    FiducialTransformArray__rosidl_typesupport_introspection_c__resize_function__FiducialTransform__transforms  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FiducialTransformArray__rosidl_typesupport_introspection_c__FiducialTransformArray_message_members = {
  "robominer_msgs__msg",  // message namespace
  "FiducialTransformArray",  // message name
  3,  // number of fields
  sizeof(robominer_msgs__msg__FiducialTransformArray),
  FiducialTransformArray__rosidl_typesupport_introspection_c__FiducialTransformArray_message_member_array,  // message members
  FiducialTransformArray__rosidl_typesupport_introspection_c__FiducialTransformArray_init_function,  // function to initialize message memory (memory has to be allocated)
  FiducialTransformArray__rosidl_typesupport_introspection_c__FiducialTransformArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FiducialTransformArray__rosidl_typesupport_introspection_c__FiducialTransformArray_message_type_support_handle = {
  0,
  &FiducialTransformArray__rosidl_typesupport_introspection_c__FiducialTransformArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robominer_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robominer_msgs, msg, FiducialTransformArray)() {
  FiducialTransformArray__rosidl_typesupport_introspection_c__FiducialTransformArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  FiducialTransformArray__rosidl_typesupport_introspection_c__FiducialTransformArray_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robominer_msgs, msg, FiducialTransform)();
  if (!FiducialTransformArray__rosidl_typesupport_introspection_c__FiducialTransformArray_message_type_support_handle.typesupport_identifier) {
    FiducialTransformArray__rosidl_typesupport_introspection_c__FiducialTransformArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FiducialTransformArray__rosidl_typesupport_introspection_c__FiducialTransformArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
