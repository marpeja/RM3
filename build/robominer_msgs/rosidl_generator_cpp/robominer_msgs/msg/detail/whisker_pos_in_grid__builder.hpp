// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robominer_msgs:msg/WhiskerPosInGrid.idl
// generated code does not contain a copyright notice

#ifndef ROBOMINER_MSGS__MSG__DETAIL__WHISKER_POS_IN_GRID__BUILDER_HPP_
#define ROBOMINER_MSGS__MSG__DETAIL__WHISKER_POS_IN_GRID__BUILDER_HPP_

#include "robominer_msgs/msg/detail/whisker_pos_in_grid__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robominer_msgs
{

namespace msg
{

namespace builder
{

class Init_WhiskerPosInGrid_offset_y
{
public:
  explicit Init_WhiskerPosInGrid_offset_y(::robominer_msgs::msg::WhiskerPosInGrid & msg)
  : msg_(msg)
  {}
  ::robominer_msgs::msg::WhiskerPosInGrid offset_y(::robominer_msgs::msg::WhiskerPosInGrid::_offset_y_type arg)
  {
    msg_.offset_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robominer_msgs::msg::WhiskerPosInGrid msg_;
};

class Init_WhiskerPosInGrid_col_num
{
public:
  explicit Init_WhiskerPosInGrid_col_num(::robominer_msgs::msg::WhiskerPosInGrid & msg)
  : msg_(msg)
  {}
  Init_WhiskerPosInGrid_offset_y col_num(::robominer_msgs::msg::WhiskerPosInGrid::_col_num_type arg)
  {
    msg_.col_num = std::move(arg);
    return Init_WhiskerPosInGrid_offset_y(msg_);
  }

private:
  ::robominer_msgs::msg::WhiskerPosInGrid msg_;
};

class Init_WhiskerPosInGrid_row_num
{
public:
  Init_WhiskerPosInGrid_row_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WhiskerPosInGrid_col_num row_num(::robominer_msgs::msg::WhiskerPosInGrid::_row_num_type arg)
  {
    msg_.row_num = std::move(arg);
    return Init_WhiskerPosInGrid_col_num(msg_);
  }

private:
  ::robominer_msgs::msg::WhiskerPosInGrid msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robominer_msgs::msg::WhiskerPosInGrid>()
{
  return robominer_msgs::msg::builder::Init_WhiskerPosInGrid_row_num();
}

}  // namespace robominer_msgs

#endif  // ROBOMINER_MSGS__MSG__DETAIL__WHISKER_POS_IN_GRID__BUILDER_HPP_
