#ifndef _LIBPROTOCOL_CONTEXT_H_
#define _LIBPROTOCOL_CONTEXT_H_
#include "Protocol.h"
#include <libcpp/libcpp.h>
EXTERN_C_BEGIN
namespaceBegin(foxintango)
class foxintangoAPI ProtocolContext{
protected:
    Buffer    buffer;
    Protocol* protocol;
public:
    ProtocolContext();
    virtual ~ProtocolContext();
public:
    int resizeBuffer(size_t size);
    void setProtocol(Protocol* protocol);
};
namespaceEnd
EXTERN_C_END
#endif
