void CWE195_Signed_to_Unsigned_Conversion_Error__rand_malloc_64_bad() int data ; data = - 1; data = RAND32 ( ); CWE195_Signed_to_Unsigned_Conversion_Error__rand_malloc_64b_badSink ( & data ); void CWE195_Signed_to_Unsigned_Conversion_Error__rand_malloc_64b_badSink(void * dataVoidPtr) int * dataPtr = ( int * ) dataVoidPtr ; int data = ( * dataPtr ) ; if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; free ( dataBuffer ); 