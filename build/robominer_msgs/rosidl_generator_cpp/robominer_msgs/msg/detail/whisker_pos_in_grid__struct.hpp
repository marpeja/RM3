// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robominer_msgs:msg/WhiskerPosInGrid.idl
// generated code does not contain a copyright notice

#ifndef ROBOMINER_MSGS__MSG__DETAIL__WHISKER_POS_IN_GRID__STRUCT_HPP_
#define ROBOMINER_MSGS__MSG__DETAIL__WHISKER_POS_IN_GRID__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__robominer_msgs__msg__WhiskerPosInGrid __attribute__((deprecated))
#else
# define DEPRECATED__robominer_msgs__msg__WhiskerPosInGrid __declspec(deprecated)
#endif

namespace robominer_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WhiskerPosInGrid_
{
  using Type = WhiskerPosInGrid_<ContainerAllocator>;

  explicit WhiskerPosInGrid_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->row_num = 0;
      this->col_num = 0;
      this->offset_y = 0.0f;
    }
  }

  explicit WhiskerPosInGrid_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->row_num = 0;
      this->col_num = 0;
      this->offset_y = 0.0f;
    }
  }

  // field types and members
  using _row_num_type =
    uint8_t;
  _row_num_type row_num;
  using _col_num_type =
    uint8_t;
  _col_num_type col_num;
  using _offset_y_type =
    float;
  _offset_y_type offset_y;

  // setters for named parameter idiom
  Type & set__row_num(
    const uint8_t & _arg)
  {
    this->row_num = _arg;
    return *this;
  }
  Type & set__col_num(
    const uint8_t & _arg)
  {
    this->col_num = _arg;
    return *this;
  }
  Type & set__offset_y(
    const float & _arg)
  {
    this->offset_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robominer_msgs::msg::WhiskerPosInGrid_<ContainerAllocator> *;
  using ConstRawPtr =
    const robominer_msgs::msg::WhiskerPosInGrid_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robominer_msgs::msg::WhiskerPosInGrid_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robominer_msgs::msg::WhiskerPosInGrid_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robominer_msgs::msg::WhiskerPosInGrid_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robominer_msgs::msg::WhiskerPosInGrid_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robominer_msgs::msg::WhiskerPosInGrid_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robominer_msgs::msg::WhiskerPosInGrid_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robominer_msgs::msg::WhiskerPosInGrid_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robominer_msgs::msg::WhiskerPosInGrid_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robominer_msgs__msg__WhiskerPosInGrid
    std::shared_ptr<robominer_msgs::msg::WhiskerPosInGrid_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robominer_msgs__msg__WhiskerPosInGrid
    std::shared_ptr<robominer_msgs::msg::WhiskerPosInGrid_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WhiskerPosInGrid_ & other) const
  {
    if (this->row_num != other.row_num) {
      return false;
    }
    if (this->col_num != other.col_num) {
      return false;
    }
    if (this->offset_y != other.offset_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const WhiskerPosInGrid_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WhiskerPosInGrid_

// alias to use template instance with default allocator
using WhiskerPosInGrid =
  robominer_msgs::msg::WhiskerPosInGrid_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robominer_msgs

#endif  // ROBOMINER_MSGS__MSG__DETAIL__WHISKER_POS_IN_GRID__STRUCT_HPP_
