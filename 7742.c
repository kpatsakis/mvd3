void CWE195_Signed_to_Unsigned_Conversion_Error__rand_malloc_67_bad() int data ; CWE195_Signed_to_Unsigned_Conversion_Error__rand_malloc_67_structType myStruct ; data = - 1; data = RAND32 ( ); myStruct . structFirst = data; CWE195_Signed_to_Unsigned_Conversion_Error__rand_malloc_67b_badSink ( myStruct ); void CWE195_Signed_to_Unsigned_Conversion_Error__rand_malloc_67b_badSink(CWE195_Signed_to_Unsigned_Conversion_Error__rand_malloc_67_structType myStruct) int data = myStruct . structFirst ; if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; free ( dataBuffer ); 