static void goodG2B() int data ; data = - 1; data = 100 - 1; CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_64b_goodG2BSink ( & data ); void CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_64b_goodG2BSink(void * dataVoidPtr) int * dataPtr = ( int * ) dataVoidPtr ; int data = ( * dataPtr ) ; if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; free ( dataBuffer ); 