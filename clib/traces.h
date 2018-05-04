#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER Nit_Compiler

#undef TRACEPOINT_INCLUDE
#define TRACEPOINT_INCLUDE "/home/olivier/Bureau/nit/src/nit_compile/traces.h"

#if !defined(_HELLO_TP_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define _HELLO_TP_H

#include <lttng/tracepoint.h>

TRACEPOINT_EVENT(
    Nit_Compiler,
    Object_Instance,
    TP_ARGS(
        char*, object_class_arg,
        int, object_id_arg
    ),
    TP_FIELDS(
        ctf_string(object_class, object_class_arg)
        ctf_integer(int, object_id, object_id_arg)
    )
)

#endif /* _HELLO_TP_H */

#include <lttng/tracepoint-event.h>
