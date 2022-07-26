// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rtabmap_ros:srv/GetNodesInRadius.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rtabmap_ros/srv/detail/get_nodes_in_radius__rosidl_typesupport_introspection_c.h"
#include "rtabmap_ros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rtabmap_ros/srv/detail/get_nodes_in_radius__functions.h"
#include "rtabmap_ros/srv/detail/get_nodes_in_radius__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GetNodesInRadius_Request__rosidl_typesupport_introspection_c__GetNodesInRadius_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtabmap_ros__srv__GetNodesInRadius_Request__init(message_memory);
}

void GetNodesInRadius_Request__rosidl_typesupport_introspection_c__GetNodesInRadius_Request_fini_function(void * message_memory)
{
  rtabmap_ros__srv__GetNodesInRadius_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetNodesInRadius_Request__rosidl_typesupport_introspection_c__GetNodesInRadius_Request_message_member_array[6] = {
  {
    "node_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__srv__GetNodesInRadius_Request, node_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__srv__GetNodesInRadius_Request, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__srv__GetNodesInRadius_Request, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__srv__GetNodesInRadius_Request, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__srv__GetNodesInRadius_Request, radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "k",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__srv__GetNodesInRadius_Request, k),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetNodesInRadius_Request__rosidl_typesupport_introspection_c__GetNodesInRadius_Request_message_members = {
  "rtabmap_ros__srv",  // message namespace
  "GetNodesInRadius_Request",  // message name
  6,  // number of fields
  sizeof(rtabmap_ros__srv__GetNodesInRadius_Request),
  GetNodesInRadius_Request__rosidl_typesupport_introspection_c__GetNodesInRadius_Request_message_member_array,  // message members
  GetNodesInRadius_Request__rosidl_typesupport_introspection_c__GetNodesInRadius_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetNodesInRadius_Request__rosidl_typesupport_introspection_c__GetNodesInRadius_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetNodesInRadius_Request__rosidl_typesupport_introspection_c__GetNodesInRadius_Request_message_type_support_handle = {
  0,
  &GetNodesInRadius_Request__rosidl_typesupport_introspection_c__GetNodesInRadius_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_ros
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_ros, srv, GetNodesInRadius_Request)() {
  if (!GetNodesInRadius_Request__rosidl_typesupport_introspection_c__GetNodesInRadius_Request_message_type_support_handle.typesupport_identifier) {
    GetNodesInRadius_Request__rosidl_typesupport_introspection_c__GetNodesInRadius_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetNodesInRadius_Request__rosidl_typesupport_introspection_c__GetNodesInRadius_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rtabmap_ros/srv/detail/get_nodes_in_radius__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rtabmap_ros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rtabmap_ros/srv/detail/get_nodes_in_radius__functions.h"
// already included above
// #include "rtabmap_ros/srv/detail/get_nodes_in_radius__struct.h"


// Include directives for member types
// Member `ids`
// Member `dists_sqr`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `poses`
#include "geometry_msgs/msg/pose.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetNodesInRadius_Response__rosidl_typesupport_introspection_c__GetNodesInRadius_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtabmap_ros__srv__GetNodesInRadius_Response__init(message_memory);
}

void GetNodesInRadius_Response__rosidl_typesupport_introspection_c__GetNodesInRadius_Response_fini_function(void * message_memory)
{
  rtabmap_ros__srv__GetNodesInRadius_Response__fini(message_memory);
}

size_t GetNodesInRadius_Response__rosidl_typesupport_introspection_c__size_function__Pose__poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * GetNodesInRadius_Response__rosidl_typesupport_introspection_c__get_const_function__Pose__poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GetNodesInRadius_Response__rosidl_typesupport_introspection_c__get_function__Pose__poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GetNodesInRadius_Response__rosidl_typesupport_introspection_c__resize_function__Pose__poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember GetNodesInRadius_Response__rosidl_typesupport_introspection_c__GetNodesInRadius_Response_message_member_array[3] = {
  {
    "ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__srv__GetNodesInRadius_Response, ids),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__srv__GetNodesInRadius_Response, poses),  // bytes offset in struct
    NULL,  // default value
    GetNodesInRadius_Response__rosidl_typesupport_introspection_c__size_function__Pose__poses,  // size() function pointer
    GetNodesInRadius_Response__rosidl_typesupport_introspection_c__get_const_function__Pose__poses,  // get_const(index) function pointer
    GetNodesInRadius_Response__rosidl_typesupport_introspection_c__get_function__Pose__poses,  // get(index) function pointer
    GetNodesInRadius_Response__rosidl_typesupport_introspection_c__resize_function__Pose__poses  // resize(index) function pointer
  },
  {
    "dists_sqr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_ros__srv__GetNodesInRadius_Response, dists_sqr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetNodesInRadius_Response__rosidl_typesupport_introspection_c__GetNodesInRadius_Response_message_members = {
  "rtabmap_ros__srv",  // message namespace
  "GetNodesInRadius_Response",  // message name
  3,  // number of fields
  sizeof(rtabmap_ros__srv__GetNodesInRadius_Response),
  GetNodesInRadius_Response__rosidl_typesupport_introspection_c__GetNodesInRadius_Response_message_member_array,  // message members
  GetNodesInRadius_Response__rosidl_typesupport_introspection_c__GetNodesInRadius_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetNodesInRadius_Response__rosidl_typesupport_introspection_c__GetNodesInRadius_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetNodesInRadius_Response__rosidl_typesupport_introspection_c__GetNodesInRadius_Response_message_type_support_handle = {
  0,
  &GetNodesInRadius_Response__rosidl_typesupport_introspection_c__GetNodesInRadius_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_ros
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_ros, srv, GetNodesInRadius_Response)() {
  GetNodesInRadius_Response__rosidl_typesupport_introspection_c__GetNodesInRadius_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!GetNodesInRadius_Response__rosidl_typesupport_introspection_c__GetNodesInRadius_Response_message_type_support_handle.typesupport_identifier) {
    GetNodesInRadius_Response__rosidl_typesupport_introspection_c__GetNodesInRadius_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetNodesInRadius_Response__rosidl_typesupport_introspection_c__GetNodesInRadius_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rtabmap_ros/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rtabmap_ros/srv/detail/get_nodes_in_radius__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rtabmap_ros__srv__detail__get_nodes_in_radius__rosidl_typesupport_introspection_c__GetNodesInRadius_service_members = {
  "rtabmap_ros__srv",  // service namespace
  "GetNodesInRadius",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rtabmap_ros__srv__detail__get_nodes_in_radius__rosidl_typesupport_introspection_c__GetNodesInRadius_Request_message_type_support_handle,
  NULL  // response message
  // rtabmap_ros__srv__detail__get_nodes_in_radius__rosidl_typesupport_introspection_c__GetNodesInRadius_Response_message_type_support_handle
};

static rosidl_service_type_support_t rtabmap_ros__srv__detail__get_nodes_in_radius__rosidl_typesupport_introspection_c__GetNodesInRadius_service_type_support_handle = {
  0,
  &rtabmap_ros__srv__detail__get_nodes_in_radius__rosidl_typesupport_introspection_c__GetNodesInRadius_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_ros, srv, GetNodesInRadius_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_ros, srv, GetNodesInRadius_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_ros
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_ros, srv, GetNodesInRadius)() {
  if (!rtabmap_ros__srv__detail__get_nodes_in_radius__rosidl_typesupport_introspection_c__GetNodesInRadius_service_type_support_handle.typesupport_identifier) {
    rtabmap_ros__srv__detail__get_nodes_in_radius__rosidl_typesupport_introspection_c__GetNodesInRadius_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rtabmap_ros__srv__detail__get_nodes_in_radius__rosidl_typesupport_introspection_c__GetNodesInRadius_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_ros, srv, GetNodesInRadius_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_ros, srv, GetNodesInRadius_Response)()->data;
  }

  return &rtabmap_ros__srv__detail__get_nodes_in_radius__rosidl_typesupport_introspection_c__GetNodesInRadius_service_type_support_handle;
}
