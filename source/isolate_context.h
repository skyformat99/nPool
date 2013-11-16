#ifndef _ISOLATE_CONTEXT_H_
#define _ISOLATE_CONTEXT_H_

// node
#include <node.h>
#include <v8.h>
using namespace v8;

// Custom
#include "utilities.h"

class IsolateContext
{
    public:
        
        // global context (per thread)
        static void             CreateGlobalContext(Handle<Object> globalContext);
        static void             CloneGlobalContextObject(Handle<Object> sourceObject, Handle<Object> cloneObject);

        // context per module
        static void             CreateModuleContext(Handle<Object> contextObject, const FILE_INFO* fileInfo);
        static void             UpdateContextFileProperties(Handle<Object> contextObject, const FILE_INFO* fileInfo);
};

#endif /* _ISOLATE_CONTEXT_H_ */