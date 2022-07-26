// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robominer_msgs:msg/WhiskerArray.idl
// generated code does not contain a copyright notice

#ifndef ROBOMINER_MSGS__MSG__DETAIL__WHISKER_ARRAY__STRUCT_HPP_
#define ROBOMINER_MSGS__MSG__DETAIL__WHISKER_ARRAY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'whiskers'
#include "robominer_msgs/msg/detail/whisker__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robominer_msgs__msg__WhiskerArray __attribute__((deprecated))
#else
# define DEPRECATED__robominer_msgs__msg__WhiskerArray __declspec(deprecated)
#endif

namespace robominer_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WhiskerArray_
{
  using Type = WhiskerArray_<ContainerAllocator>;

  explicit WhiskerArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_mux = 0;
      this->num_sensors = 0;
      this->representation = "";
    }
  }

  explicit WhiskerArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    representation(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_mux = 0;
      this->num_sensors = 0;
      this->representation = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _num_mux_type =
    uint8_t;
  _num_mux_type num_mux;
  using _num_sensors_type =
    uint8_t;
  _num_sensors_type num_sensors;
  using _representation_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _representation_type representation;
  using _whiskers_type =
    std::vector<robominer_msgs::msg::Whisker_<ContainerAllocator>, typename ContainerAllocator::template rebind<robominer_msgs::msg::Whisker_<ContainerAllocator>>::other>;
  _whiskers_type whiskers;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__num_mux(
    const uint8_t & _arg)
  {
    this->num_mux = _arg;
    return *this;
  }
  Type & set__num_sensors(
    const uint8_t & _arg)
  {
    this->num_sensors = _arg;
    return *this;
  }
  Type & set__representation(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->representation = _arg;
    return *this;
  }
  Type & set__whiskers(
    const std::vector<robominer_msgs::msg::Whisker_<ContainerAllocator>, typename ContainerAllocator::template rebind<robominer_msgs::msg::Whisker_<ContainerAllocator>>::other> & _arg)
  {
    this->whiskers = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robominer_msgs::msg::WhiskerArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const robominer_msgs::msg::WhiskerArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robominer_msgs::msg::WhiskerArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robominer_msgs::msg::WhiskerArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robominer_msgs::msg::WhiskerArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robominer_msgs::msg::WhiskerArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robominer_msgs::msg::WhiskerArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robominer_msgs::msg::WhiskerArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robominer_msgs::msg::WhiskerArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robominer_msgs::msg::WhiskerArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robominer_msgs__msg__WhiskerArray
    std::shared_ptr<robominer_msgs::msg::WhiskerArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robominer_msgs__msg__WhiskerArray
    std::shared_ptr<robominer_msgs::msg::WhiskerArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WhiskerArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->num_mux != other.num_mux) {
      return false;
    }
    if (this->num_sensors != other.num_sensors) {
      return false;
    }
    if (this->representation != other.representation) {
      return false;
    }
    if (this->whiskers != other.whiskers) {
      return false;
    }
    return true;
  }
  bool operator!=(const WhiskerArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WhiskerArray_

// alias to use template instance with default allocator
using WhiskerArray =
  robominer_msgs::msg::WhiskerArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robominer_msgs

#endif  // ROBOMINER_MSGS__MSG__DETAIL__WHISKER_ARRAY__STRUCT_HPP_
