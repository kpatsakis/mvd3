void CWE121_Stack_Based_Buffer_Overflow__CWE135_06_bad() void * data ; data = NULL; if ( STATIC_CONST_FIVE == 5 )  data = ( void * ) WIDE_STRING; if ( STATIC_CONST_FIVE == 5 )  size_t dataLen = strlen ( ( char * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , 1 ) ; memcpy ( dest , data , ( dataLen + 1 ) ); free ( dest ); 