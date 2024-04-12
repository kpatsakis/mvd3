 CClosure::Create(JSContext* HandleObject HandleObject HandleObject jsval PRFuncPtr* fnptr) RootedValue errVal ( cx , errVal_ ) ; RootedObject result ( cx , JS_NewObject ( cx , & sCClosureClass ) ) ; if ( ! result )  FunctionInfo * fninfo = FunctionType :: GetFunctionInfo ( typeObj ) ; RootedObject proto ( cx ) ; if ( ! JS_GetPrototype ( cx , typeObj , & proto ) )  mozilla :: UniquePtr < uint8_t [ ] , JS :: FreePolicy > errResult ; if ( ! errVal . isUndefined ( ) )  if ( CType :: GetTypeCode ( fninfo -> mReturnType ) == TYPE_void_t )  size_t rvSize = CType :: GetSize ( fninfo -> mReturnType ) ; errResult = result -> zone ( ) -> make_pod_array < uint8_t > ( rvSize ); if ( ! errResult )  if ( ! ImplicitConvert ( cx , errVal , fninfo -> mReturnType , errResult . get ( ) , false , nullptr ) )  static ImplicitConvert(JSContext* HandleValue JSObject* void* bool bool* freePointer) RootedObject targetType ( cx , targetType_ ) ; JSObject * sourceData = nullptr ; JSObject * sourceType = nullptr ; RootedObject valObj ( cx , nullptr ) ; if ( val . isObject ( ) )  valObj = & val . toObject ( ); if ( CData :: IsCData ( valObj ) )  sourceData = valObj; sourceType = CData :: GetCType ( sourceData ); if ( CType :: TypesEqual ( sourceType , targetType ) )  if ( CDataFinalizer :: IsCDataFinalizer ( valObj ) )  sourceData = valObj; sourceType = CDataFinalizer :: GetCType ( cx , sourceData ); CDataFinalizer :: Private * p = ( CDataFinalizer :: Private * ) JS_GetPrivate ( sourceData ) ; if ( ! p )  if ( CType :: TypesEqual ( sourceType , targetType ) )  TypeCode targetCode = CType :: GetTypeCode ( targetType ) ; switch ( targetCode )  if ( val . isNull ( ) )  JS :: Rooted < JSObject * > baseType ( cx , PointerType :: GetBaseType ( targetType ) ) ; if ( sourceData )  TypeCode sourceCode = CType :: GetTypeCode ( sourceType ) ; bool voidptrTarget = CType :: GetTypeCode ( baseType ) == TYPE_void_t ; if ( sourceCode == TYPE_pointer && voidptrTarget )  if ( sourceCode == TYPE_array )  JSObject * elementType = ArrayType :: GetBaseType ( sourceType ) ; if ( voidptrTarget || CType :: TypesEqual ( baseType , elementType ) )  * static_cast < void * * > ( buffer ) = sourceBuffer if ( isArgument && val . isString ( ) )  if ( val . isObject ( ) && JS_IsArrayBufferObject ( valObj ) )  if ( val . isObject ( ) && JS_IsArrayBufferViewObject ( valObj ) )  if ( ! CanConvertTypedArrayItemTo ( baseType , valObj , cx ) )  if ( ! isArgument )  void * ptr ; JS :: AutoCheckCannotGC nogc ; ptr = JS_GetArrayBufferViewData ( valObj , nogc ); if ( ! ptr )  * static_cast < void * * > ( buffer ) = ptr RootedObject baseType ( cx , ArrayType :: GetBaseType ( targetType ) ) ; size_t targetLength = ArrayType :: GetLength ( targetType ) ; if ( val . isString ( ) )  if ( val . isObject ( ) && JS_IsArrayObject ( cx , valObj ) )  uint32_t sourceLength ; if ( ! JS_GetArrayLength ( cx , valObj , & sourceLength ) || targetLength != size_t ( sourceLength ) )  size_t elementSize = CType :: GetSize ( baseType ) ;  CType::GetSize(JSObject* obj) jsval size = JS_GetReservedSlot ( obj , SLOT_SIZE ) ; if ( size . isInt32 ( ) )  return size . toInt32 ( ) ; return Convert < size_t > ( size . toDouble ( ) ) ; auto intermediate = cx -> make_pod_array < char > ( arraySize ) if ( ! intermediate )  for (uint32_t i = 0; i < sourceLength; ++i) RootedValue item ( cx ) ; if ( ! JS_GetElement ( cx , valObj , i , & item ) )  char * data = intermediate . get ( ) + elementSize * i ; if ( ! ImplicitConvert ( cx , item , baseType , data , false , nullptr ) )  static ImplicitConvert(JSContext* HandleValue JSObject* void* bool bool* freePointer) RootedObject targetType ( cx , targetType_ ) ; RootedObject valObj ( cx , nullptr ) ; if ( val . isObject ( ) )  valObj = & val . toObject ( ); if ( CData :: IsCData ( valObj ) )  sourceData = valObj; sourceType = CData :: GetCType ( sourceData ); if ( CType :: TypesEqual ( sourceType , targetType ) )  if ( CDataFinalizer :: IsCDataFinalizer ( valObj ) )  sourceData = valObj; sourceType = CDataFinalizer :: GetCType ( cx , sourceData ); CDataFinalizer :: Private * p = ( CDataFinalizer :: Private * ) JS_GetPrivate ( sourceData ) ; if ( ! p )  if ( CType :: TypesEqual ( sourceType , targetType ) )  TypeCode targetCode = CType :: GetTypeCode ( targetType ) ; switch ( targetCode )  if ( val . isNull ( ) )  JS :: Rooted < JSObject * > baseType ( cx , PointerType :: GetBaseType ( targetType ) ) ; RootedObject baseType ( cx , ArrayType :: GetBaseType ( targetType ) ) ; size_t targetLength = ArrayType :: GetLength ( targetType ) ; if ( val . isString ( ) )  if ( val . isObject ( ) && JS_IsArrayObject ( cx , valObj ) )  if ( val . isObject ( ) && JS_IsArrayBufferObject ( valObj ) )  if ( val . isObject ( ) && JS_IsTypedArrayObject ( valObj ) )  if ( ! CanConvertTypedArrayItemTo ( baseType , valObj , cx ) )  uint32_t sourceLength = JS_GetTypedArrayByteLength ( valObj ) ; size_t elementSize = CType :: GetSize ( baseType ) ; size_t arraySize = elementSize * targetLength ; if ( arraySize != size_t ( sourceLength ) )  JS :: AutoCheckCannotGC nogc ; memcpy ( buffer , JS_GetArrayBufferViewData ( valObj , nogc ) , sourceLength ); 