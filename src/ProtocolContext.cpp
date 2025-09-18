#include "ProtocolContext.h"
using namespace foxintango;
ProtocolContext::ProtocolContext(){}
ProtocolContext::~ProtocolContext(){}
int  ProtocolContext::resizeBuffer(size_t size)        { return buffer.resize(size);  }
void ProtocolContext::setProtocol(Protocol* _protocol) { protocol = _protocol;        }
