void CWE121_Stack_Based_Buffer_Overflow__CWE135_34_bad() void * data ; CWE121_Stack_Based_Buffer_Overflow__CWE135_34_unionType myUnion ; data = NULL; data = ( void * ) WIDE_STRING; myUnion . unionFirst = data; void * data = myUnion . unionSecond ; size_t dataLen = strlen ( ( char * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , 1 ) ; memcpy ( dest , data , ( dataLen + 1 ) ); free ( dest ); 