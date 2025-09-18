#ifndef _LIBPROTOCOL_PROTOCOL_
#define _LIBPROTOCOL_PROTOCOL_
#include <libcpp/libcpp.h>
EXTERN_C_BEGIN
namespaceBegin(foxintango)
class foxintangoAPI Protocol{
public:
    class Response{
    public:
        enum Action{
             RESPOND,
             WAIT,
	     CLOSE
        };
    public:
        Buffer* data;
    public:
        Response();
       ~Response();
    };
public:
    Protocol();
    virtual ~Protocol();
public:
    virtual Response* handleData(const char* const data,size_t size);
};
namespaceEnd
EXTERN_C_END
#endif
