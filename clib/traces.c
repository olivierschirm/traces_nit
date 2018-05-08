#define TRACEPOINT_CREATE_PROBES
#define TRACEPOINT_DEFINE

#include "traces.h"

void trace(void *obj, void *cd){
	tracepoint(Nit_Compiler, Object_Destruction, "destruction", (uintptr_t)obj);
}
