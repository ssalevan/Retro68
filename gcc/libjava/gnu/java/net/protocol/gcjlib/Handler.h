
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_net_protocol_gcjlib_Handler__
#define __gnu_java_net_protocol_gcjlib_Handler__

#pragma interface

#include <java/net/URLStreamHandler.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace net
      {
        namespace protocol
        {
          namespace gcjlib
          {
              class Handler;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace net
    {
        class URL;
        class URLConnection;
    }
  }
}

class gnu::java::net::protocol::gcjlib::Handler : public ::java::net::URLStreamHandler
{

public:
  Handler();
public: // actually protected
  virtual ::java::net::URLConnection * openConnection(::java::net::URL *);
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_net_protocol_gcjlib_Handler__