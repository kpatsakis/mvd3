bool ffiCall(unsigned exitIndex, const Call& call, MIRType returnType, MDefinition** def) if ( inDeadCode ( ) )  inline bool inDeadCode() const return curBlock_ == nullptr ; unsigned globalDataOffset = module ( ) . exitIndexToGlobalDataOffset ( exitIndex ) ; return * module_ . get ( ) ; const AsmJSModule& module() const MAsmJSLoadFFIFunc * ptrFun = MAsmJSLoadFFIFunc :: New ( alloc ( ) , globalDataOffset ) ; return * alloc_ ; TempAllocator &     alloc() const return callPrivate ( MAsmJSCall :: Callee ( ptrFun ) , call , returnType , def ) ; bool callPrivate(MAsmJSCall::Callee callee, const Call& call, MIRType returnType, MDefinition** def) if ( inDeadCode ( ) )  uint32_t line , column ; CallSiteDesc :: Kind kind = CallSiteDesc :: Kind ( - 1 ) ; switch ( callee . which ( ) )  kind = CallSiteDesc :: Relative; kind = CallSiteDesc :: Register; kind = CallSiteDesc :: Register; MAsmJSCall * ins = MAsmJSCall :: New ( alloc ( ) , CallSiteDesc ( line , column , kind ) , callee , call . regArgs_ , returnType , call . spIncrement_ ) ; if ( ! ins )  curBlock_ -> add ( ins ); * def = ins; 