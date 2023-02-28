// Generated by gencpp from file hdl_global_localization/SetGlobalMapResponse.msg
// DO NOT EDIT!


#ifndef HDL_GLOBAL_LOCALIZATION_MESSAGE_SETGLOBALMAPRESPONSE_H
#define HDL_GLOBAL_LOCALIZATION_MESSAGE_SETGLOBALMAPRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace hdl_global_localization
{
template <class ContainerAllocator>
struct SetGlobalMapResponse_
{
  typedef SetGlobalMapResponse_<ContainerAllocator> Type;

  SetGlobalMapResponse_()
    {
    }
  SetGlobalMapResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::hdl_global_localization::SetGlobalMapResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hdl_global_localization::SetGlobalMapResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetGlobalMapResponse_

typedef ::hdl_global_localization::SetGlobalMapResponse_<std::allocator<void> > SetGlobalMapResponse;

typedef boost::shared_ptr< ::hdl_global_localization::SetGlobalMapResponse > SetGlobalMapResponsePtr;
typedef boost::shared_ptr< ::hdl_global_localization::SetGlobalMapResponse const> SetGlobalMapResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hdl_global_localization::SetGlobalMapResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hdl_global_localization::SetGlobalMapResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace hdl_global_localization

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::hdl_global_localization::SetGlobalMapResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hdl_global_localization::SetGlobalMapResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hdl_global_localization::SetGlobalMapResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hdl_global_localization::SetGlobalMapResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hdl_global_localization::SetGlobalMapResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hdl_global_localization::SetGlobalMapResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hdl_global_localization::SetGlobalMapResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::hdl_global_localization::SetGlobalMapResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::hdl_global_localization::SetGlobalMapResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hdl_global_localization/SetGlobalMapResponse";
  }

  static const char* value(const ::hdl_global_localization::SetGlobalMapResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hdl_global_localization::SetGlobalMapResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::hdl_global_localization::SetGlobalMapResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hdl_global_localization::SetGlobalMapResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetGlobalMapResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hdl_global_localization::SetGlobalMapResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::hdl_global_localization::SetGlobalMapResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // HDL_GLOBAL_LOCALIZATION_MESSAGE_SETGLOBALMAPRESPONSE_H
