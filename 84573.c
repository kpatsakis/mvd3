static void goodG2B2() void * data ; data = NULL; switch ( 6 )  data = ( void * ) CHAR_STRING; switch ( 7 )  size_t dataLen = strlen ( ( char * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , 1 ) ; memcpy ( dest , data , ( dataLen + 1 ) ); free ( dest ); 