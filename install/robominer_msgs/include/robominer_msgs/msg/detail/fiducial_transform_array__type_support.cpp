// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robominer_msgs:msg/FiducialTransformArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robominer_msgs/msg/detail/fiducial_transform_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robominer_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void FiducialTransformArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robominer_msgs::msg::FiducialTransformArray(_init);
}

void FiducialTransformArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robominer_msgs::msg::FiducialTransformArray *>(message_memory);
  typed_message->~FiducialTransformArray();
}

size_t size_function__FiducialTransformArray__transforms(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<robominer_msgs::msg::FiducialTransform> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FiducialTransformArray__transforms(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<robominer_msgs::msg::FiducialTransform> *>(untyped_member);
  return &member[index];
}

void * get_function__FiducialTransformArray__transforms(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<robominer_msgs::msg::FiducialTransform> *>(untyped_member);
  return &member[index];
}

void resize_function__FiducialTransformArray__transforms(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<robominer_msgs::msg::FiducialTransform> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FiducialTransformArray_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs::msg::FiducialTransformArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "image_seq",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs::msg::FiducialTransformArray, image_seq),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "transforms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robominer_msgs::msg::FiducialTransform>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs::msg::FiducialTransformArray, transforms),  // bytes offset in struct
    nullptr,  // default value
    size_function__FiducialTransformArray__transforms,  // size() function pointer
    get_const_function__FiducialTransformArray__transforms,  // get_const(index) function pointer
    get_function__FiducialTransformArray__transforms,  // get(index) function pointer
    resize_function__FiducialTransformArray__transforms  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FiducialTransformArray_message_members = {
  "robominer_msgs::msg",  // message namespace
  "FiducialTransformArray",  // message name
  3,  // number of fields
  sizeof(robominer_msgs::msg::FiducialTransformArray),
  FiducialTransformArray_message_member_array,  // message members
  FiducialTransformArray_init_function,  // function to initialize message memory (memory has to be allocated)
  FiducialTransformArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FiducialTransformArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FiducialTransformArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robominer_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robominer_msgs::msg::FiducialTransformArray>()
{
  return &::robominer_msgs::msg::rosidl_typesupport_introspection_cpp::FiducialTransformArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robominer_msgs, msg, FiducialTransformArray)() {
  return &::robominer_msgs::msg::rosidl_typesupport_introspection_cpp::FiducialTransformArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
