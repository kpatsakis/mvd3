static void goodB2G() void * data ; void * & dataRef = data ; data = NULL; data = ( void * ) WIDE_STRING; void * data = dataRef ; size_t dataLen = wcslen ( ( wchar_t * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , sizeof ( wchar_t ) ) ; memcpy ( dest , data , ( dataLen + 1 ) * sizeof ( wchar_t ) ); free ( dest ); 