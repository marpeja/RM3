// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robominer_msgs:msg/MotorModuleFeedback.idl
// generated code does not contain a copyright notice

#ifndef ROBOMINER_MSGS__MSG__DETAIL__MOTOR_MODULE_FEEDBACK__BUILDER_HPP_
#define ROBOMINER_MSGS__MSG__DETAIL__MOTOR_MODULE_FEEDBACK__BUILDER_HPP_

#include "robominer_msgs/msg/detail/motor_module_feedback__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robominer_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorModuleFeedback_motor_voltage_v
{
public:
  explicit Init_MotorModuleFeedback_motor_voltage_v(::robominer_msgs::msg::MotorModuleFeedback & msg)
  : msg_(msg)
  {}
  ::robominer_msgs::msg::MotorModuleFeedback motor_voltage_v(::robominer_msgs::msg::MotorModuleFeedback::_motor_voltage_v_type arg)
  {
    msg_.motor_voltage_v = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robominer_msgs::msg::MotorModuleFeedback msg_;
};

class Init_MotorModuleFeedback_motor_current_ma
{
public:
  explicit Init_MotorModuleFeedback_motor_current_ma(::robominer_msgs::msg::MotorModuleFeedback & msg)
  : msg_(msg)
  {}
  Init_MotorModuleFeedback_motor_voltage_v motor_current_ma(::robominer_msgs::msg::MotorModuleFeedback::_motor_current_ma_type arg)
  {
    msg_.motor_current_ma = std::move(arg);
    return Init_MotorModuleFeedback_motor_voltage_v(msg_);
  }

private:
  ::robominer_msgs::msg::MotorModuleFeedback msg_;
};

class Init_MotorModuleFeedback_motor_rpm
{
public:
  explicit Init_MotorModuleFeedback_motor_rpm(::robominer_msgs::msg::MotorModuleFeedback & msg)
  : msg_(msg)
  {}
  Init_MotorModuleFeedback_motor_current_ma motor_rpm(::robominer_msgs::msg::MotorModuleFeedback::_motor_rpm_type arg)
  {
    msg_.motor_rpm = std::move(arg);
    return Init_MotorModuleFeedback_motor_current_ma(msg_);
  }

private:
  ::robominer_msgs::msg::MotorModuleFeedback msg_;
};

class Init_MotorModuleFeedback_motor_id
{
public:
  explicit Init_MotorModuleFeedback_motor_id(::robominer_msgs::msg::MotorModuleFeedback & msg)
  : msg_(msg)
  {}
  Init_MotorModuleFeedback_motor_rpm motor_id(::robominer_msgs::msg::MotorModuleFeedback::_motor_id_type arg)
  {
    msg_.motor_id = std::move(arg);
    return Init_MotorModuleFeedback_motor_rpm(msg_);
  }

private:
  ::robominer_msgs::msg::MotorModuleFeedback msg_;
};

class Init_MotorModuleFeedback_header
{
public:
  Init_MotorModuleFeedback_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorModuleFeedback_motor_id header(::robominer_msgs::msg::MotorModuleFeedback::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MotorModuleFeedback_motor_id(msg_);
  }

private:
  ::robominer_msgs::msg::MotorModuleFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robominer_msgs::msg::MotorModuleFeedback>()
{
  return robominer_msgs::msg::builder::Init_MotorModuleFeedback_header();
}

}  // namespace robominer_msgs

#endif  // ROBOMINER_MSGS__MSG__DETAIL__MOTOR_MODULE_FEEDBACK__BUILDER_HPP_
