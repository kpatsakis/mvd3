static void goodB2G() void * data ; map < int , void * > dataMap ; data = NULL; wchar_t * dataBadBuffer = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ) ; wmemset ( dataBadBuffer , L 'A' , 50 - 1 dataBadBuffer [ 50 - 1 ] = L '\0' data = ( void * ) dataBadBuffer; dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; goodB2GSink ( dataMap ); void goodB2GSink(map<int, void *> dataMap) void * data = dataMap [ 2 ] ; size_t dataLen = wcslen ( ( wchar_t * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , sizeof ( wchar_t ) ) ; memcpy ( dest , data , ( dataLen + 1 ) * sizeof ( wchar_t ) ); free ( dest ); 