void CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_54b_goodG2BSink(int data) CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_54c_goodG2BSink ( data ); void CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_54c_goodG2BSink(int data) CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_54d_goodG2BSink ( data ); void CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_54d_goodG2BSink(int data) CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_54e_goodG2BSink ( data ); void CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_54e_goodG2BSink(int data) if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; printLine ( dataBuffer ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( dataBuffer ); 