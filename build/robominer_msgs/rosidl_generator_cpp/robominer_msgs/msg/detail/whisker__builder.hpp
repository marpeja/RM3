// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robominer_msgs:msg/Whisker.idl
// generated code does not contain a copyright notice

#ifndef ROBOMINER_MSGS__MSG__DETAIL__WHISKER__BUILDER_HPP_
#define ROBOMINER_MSGS__MSG__DETAIL__WHISKER__BUILDER_HPP_

#include "robominer_msgs/msg/detail/whisker__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robominer_msgs
{

namespace msg
{

namespace builder
{

class Init_Whisker_z
{
public:
  explicit Init_Whisker_z(::robominer_msgs::msg::Whisker & msg)
  : msg_(msg)
  {}
  ::robominer_msgs::msg::Whisker z(::robominer_msgs::msg::Whisker::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robominer_msgs::msg::Whisker msg_;
};

class Init_Whisker_y
{
public:
  explicit Init_Whisker_y(::robominer_msgs::msg::Whisker & msg)
  : msg_(msg)
  {}
  Init_Whisker_z y(::robominer_msgs::msg::Whisker::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Whisker_z(msg_);
  }

private:
  ::robominer_msgs::msg::Whisker msg_;
};

class Init_Whisker_x
{
public:
  explicit Init_Whisker_x(::robominer_msgs::msg::Whisker & msg)
  : msg_(msg)
  {}
  Init_Whisker_y x(::robominer_msgs::msg::Whisker::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Whisker_y(msg_);
  }

private:
  ::robominer_msgs::msg::Whisker msg_;
};

class Init_Whisker_has_error
{
public:
  explicit Init_Whisker_has_error(::robominer_msgs::msg::Whisker & msg)
  : msg_(msg)
  {}
  Init_Whisker_x has_error(::robominer_msgs::msg::Whisker::_has_error_type arg)
  {
    msg_.has_error = std::move(arg);
    return Init_Whisker_x(msg_);
  }

private:
  ::robominer_msgs::msg::Whisker msg_;
};

class Init_Whisker_pos
{
public:
  Init_Whisker_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Whisker_has_error pos(::robominer_msgs::msg::Whisker::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_Whisker_has_error(msg_);
  }

private:
  ::robominer_msgs::msg::Whisker msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robominer_msgs::msg::Whisker>()
{
  return robominer_msgs::msg::builder::Init_Whisker_pos();
}

}  // namespace robominer_msgs

#endif  // ROBOMINER_MSGS__MSG__DETAIL__WHISKER__BUILDER_HPP_
