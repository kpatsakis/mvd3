static void goodB2G() void * data ; data = NULL; data = ( void * ) WIDE_STRING; CWE121_Stack_Based_Buffer_Overflow__CWE135_52b_goodB2GSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE135_52b_goodB2GSink(void * data) CWE121_Stack_Based_Buffer_Overflow__CWE135_52c_goodB2GSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE135_52c_goodB2GSink(void * data) size_t dataLen = wcslen ( ( wchar_t * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , sizeof ( wchar_t ) ) ; memcpy ( dest , data , ( dataLen + 1 ) * sizeof ( wchar_t ) ); free ( dest ); 