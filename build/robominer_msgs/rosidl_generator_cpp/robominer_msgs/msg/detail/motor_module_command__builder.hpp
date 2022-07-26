// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robominer_msgs:msg/MotorModuleCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOMINER_MSGS__MSG__DETAIL__MOTOR_MODULE_COMMAND__BUILDER_HPP_
#define ROBOMINER_MSGS__MSG__DETAIL__MOTOR_MODULE_COMMAND__BUILDER_HPP_

#include "robominer_msgs/msg/detail/motor_module_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robominer_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorModuleCommand_motor_rpm_goal
{
public:
  explicit Init_MotorModuleCommand_motor_rpm_goal(::robominer_msgs::msg::MotorModuleCommand & msg)
  : msg_(msg)
  {}
  ::robominer_msgs::msg::MotorModuleCommand motor_rpm_goal(::robominer_msgs::msg::MotorModuleCommand::_motor_rpm_goal_type arg)
  {
    msg_.motor_rpm_goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robominer_msgs::msg::MotorModuleCommand msg_;
};

class Init_MotorModuleCommand_motor_id
{
public:
  explicit Init_MotorModuleCommand_motor_id(::robominer_msgs::msg::MotorModuleCommand & msg)
  : msg_(msg)
  {}
  Init_MotorModuleCommand_motor_rpm_goal motor_id(::robominer_msgs::msg::MotorModuleCommand::_motor_id_type arg)
  {
    msg_.motor_id = std::move(arg);
    return Init_MotorModuleCommand_motor_rpm_goal(msg_);
  }

private:
  ::robominer_msgs::msg::MotorModuleCommand msg_;
};

class Init_MotorModuleCommand_header
{
public:
  Init_MotorModuleCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorModuleCommand_motor_id header(::robominer_msgs::msg::MotorModuleCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MotorModuleCommand_motor_id(msg_);
  }

private:
  ::robominer_msgs::msg::MotorModuleCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robominer_msgs::msg::MotorModuleCommand>()
{
  return robominer_msgs::msg::builder::Init_MotorModuleCommand_header();
}

}  // namespace robominer_msgs

#endif  // ROBOMINER_MSGS__MSG__DETAIL__MOTOR_MODULE_COMMAND__BUILDER_HPP_
