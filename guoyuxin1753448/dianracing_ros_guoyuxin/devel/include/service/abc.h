// Generated by gencpp from file service/abc.msg
// DO NOT EDIT!


#ifndef SERVICE_MESSAGE_ABC_H
#define SERVICE_MESSAGE_ABC_H

#include <ros/service_traits.h>


#include <service/abcRequest.h>
#include <service/abcResponse.h>


namespace service
{

struct abc
{

typedef abcRequest Request;
typedef abcResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct abc
} // namespace service


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::service::abc > {
  static const char* value()
  {
    return "c9caccfcada3b6a45d8528a23bccaf1a";
  }

  static const char* value(const ::service::abc&) { return value(); }
};

template<>
struct DataType< ::service::abc > {
  static const char* value()
  {
    return "service/abc";
  }

  static const char* value(const ::service::abc&) { return value(); }
};


// service_traits::MD5Sum< ::service::abcRequest> should match 
// service_traits::MD5Sum< ::service::abc > 
template<>
struct MD5Sum< ::service::abcRequest>
{
  static const char* value()
  {
    return MD5Sum< ::service::abc >::value();
  }
  static const char* value(const ::service::abcRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::service::abcRequest> should match 
// service_traits::DataType< ::service::abc > 
template<>
struct DataType< ::service::abcRequest>
{
  static const char* value()
  {
    return DataType< ::service::abc >::value();
  }
  static const char* value(const ::service::abcRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::service::abcResponse> should match 
// service_traits::MD5Sum< ::service::abc > 
template<>
struct MD5Sum< ::service::abcResponse>
{
  static const char* value()
  {
    return MD5Sum< ::service::abc >::value();
  }
  static const char* value(const ::service::abcResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::service::abcResponse> should match 
// service_traits::DataType< ::service::abc > 
template<>
struct DataType< ::service::abcResponse>
{
  static const char* value()
  {
    return DataType< ::service::abc >::value();
  }
  static const char* value(const ::service::abcResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SERVICE_MESSAGE_ABC_H
