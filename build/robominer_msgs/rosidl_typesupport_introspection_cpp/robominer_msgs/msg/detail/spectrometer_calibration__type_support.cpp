// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robominer_msgs:msg/SpectrometerCalibration.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robominer_msgs/msg/detail/spectrometer_calibration__struct.hpp"
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

void SpectrometerCalibration_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robominer_msgs::msg::SpectrometerCalibration(_init);
}

void SpectrometerCalibration_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robominer_msgs::msg::SpectrometerCalibration *>(message_memory);
  typed_message->~SpectrometerCalibration();
}

size_t size_function__SpectrometerCalibration__parameters(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__SpectrometerCalibration__parameters(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__SpectrometerCalibration__parameters(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 5> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SpectrometerCalibration_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs::msg::SpectrometerCalibration, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "parameters",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs::msg::SpectrometerCalibration, parameters),  // bytes offset in struct
    nullptr,  // default value
    size_function__SpectrometerCalibration__parameters,  // size() function pointer
    get_const_function__SpectrometerCalibration__parameters,  // get_const(index) function pointer
    get_function__SpectrometerCalibration__parameters,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SpectrometerCalibration_message_members = {
  "robominer_msgs::msg",  // message namespace
  "SpectrometerCalibration",  // message name
  2,  // number of fields
  sizeof(robominer_msgs::msg::SpectrometerCalibration),
  SpectrometerCalibration_message_member_array,  // message members
  SpectrometerCalibration_init_function,  // function to initialize message memory (memory has to be allocated)
  SpectrometerCalibration_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SpectrometerCalibration_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SpectrometerCalibration_message_members,
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
get_message_type_support_handle<robominer_msgs::msg::SpectrometerCalibration>()
{
  return &::robominer_msgs::msg::rosidl_typesupport_introspection_cpp::SpectrometerCalibration_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robominer_msgs, msg, SpectrometerCalibration)() {
  return &::robominer_msgs::msg::rosidl_typesupport_introspection_cpp::SpectrometerCalibration_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
