void CWE195_Signed_to_Unsigned_Conversion_Error__negative_malloc_05_bad() int data ; data = - 1; if ( staticTrue )  data = - 1; if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; free ( dataBuffer ); 