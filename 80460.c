static void goodG2B() short data ; short dataArray [ 5 ] ; data = 0; data = 100 - 1; dataArray [ 2 ] = data; CWE194_Unexpected_Sign_Extension__connect_socket_malloc_66b_goodG2BSink ( dataArray ); void CWE194_Unexpected_Sign_Extension__connect_socket_malloc_66b_goodG2BSink(short dataArray[]) short data = dataArray [ 2 ] ; if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; printLine ( dataBuffer ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( dataBuffer ); 