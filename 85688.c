void CWE121_Stack_Based_Buffer_Overflow__CWE135_13_bad() void * data ; data = NULL; if ( GLOBAL_CONST_FIVE == 5 )  data = ( void * ) WIDE_STRING; if ( GLOBAL_CONST_FIVE == 5 )  size_t dataLen = strlen ( ( char * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , 1 ) ; memcpy ( dest , data , ( dataLen + 1 ) ); free ( dest ); 