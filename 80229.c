void bad() void * data ; void * & dataRef = data ; data = NULL; wchar_t * dataBadBuffer = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ) ; wmemset ( dataBadBuffer , L 'A' , 50 - 1 dataBadBuffer [ 50 - 1 ] = L '\0' data = ( void * ) dataBadBuffer; void * data = dataRef ; size_t dataLen = strlen ( ( char * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , 1 ) ; memcpy ( dest , data , ( dataLen + 1 ) ); printLine ( ( char * ) dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( dest ); 