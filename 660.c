void CWE121_Stack_Based_Buffer_Overflow__CWE135_54b_goodG2BSink(void * data) CWE121_Stack_Based_Buffer_Overflow__CWE135_54c_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE135_54c_goodG2BSink(void * data) CWE121_Stack_Based_Buffer_Overflow__CWE135_54d_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE135_54d_goodG2BSink(void * data) CWE121_Stack_Based_Buffer_Overflow__CWE135_54e_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE135_54e_goodG2BSink(void * data) size_t dataLen = strlen ( ( char * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , 1 ) ; memcpy ( dest , data , ( dataLen + 1 ) ); free ( dest ); 