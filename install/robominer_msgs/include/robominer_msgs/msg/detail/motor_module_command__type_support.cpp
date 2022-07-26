// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robominer_msgs:msg/MotorModuleCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robominer_msgs/msg/detail/motor_module_command__struct.hpp"
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

void MotorModuleCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robominer_msgs::msg::MotorModuleCommand(_init);
}

void MotorModuleCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robominer_msgs::msg::MotorModuleCommand *>(message_memory);
  typed_message->~MotorModuleCommand();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotorModuleCommand_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs::msg::MotorModuleCommand, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "motor_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs::msg::MotorModuleCommand, motor_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "motor_rpm_goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robominer_msgs::msg::MotorModuleCommand, motor_rpm_goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotorModuleCommand_message_members = {
  "robominer_msgs::msg",  // message namespace
  "MotorModuleCommand",  // message name
  3,  // number of fields
  sizeof(robominer_msgs::msg::MotorModuleCommand),
  MotorModuleCommand_message_member_array,  // message members
  MotorModuleCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorModuleCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotorModuleCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotorModuleCommand_message_members,
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
get_message_type_support_handle<robominer_msgs::msg::MotorModuleCommand>()
{
  return &::robominer_msgs::msg::rosidl_typesupport_introspection_cpp::MotorModuleCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robominer_msgs, msg, MotorModuleCommand)() {
  return &::robominer_msgs::msg::rosidl_typesupport_introspection_cpp::MotorModuleCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
