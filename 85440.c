static DoGetPropFallback(JSContext* cx, void* payload, ICGetProp_Fallback* MutableHandleValue val, MutableHandleValue res) SharedStubInfo info ( cx , payload , stub_ -> icEntry ( ) ) ; DebugModeOSRVolatileStub < ICGetProp_Fallback * > stub ( engine , info . maybeFrame ( ) , stub_ ) ; jsbytecode * pc = info . pc ( ) ; JSOp op = JSOp ( * pc ) ; FallbackICSpew ( cx , stub , "GetProp(%s)" , CodeName [ op ] );  FallbackICSpew(JSContext* cx, ICFallbackStub* stub, const char* fmt, ...) if ( JitSpewEnabled ( JitSpew_BaselineICFallback ) )  char fmtbuf [ 100 ] ; va_list args ; vsnprintf ( fmtbuf , 100 , fmt , args ); JitSpew ( JitSpew_BaselineICFallback "Fallback hit for (%s:%" PRIuSIZE ") (pc=%" PRIuSIZE ",line=%d,uses=%d,stubs=%" PRIuSIZE "): %s" script -> filename ( ) script -> lineno ( ) script -> pcToOffset ( pc ) PCToLineNumber ( script , pc ) script -> getWarmUpCount ( ) stub -> numOptimizedStubs ( ) fmtbuf ) 