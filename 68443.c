static void goodG2B1() short data ; data = 0; data = CWE194_Unexpected_Sign_Extension__connect_socket_malloc_22_goodG2B1Source ( data ); short CWE194_Unexpected_Sign_Extension__connect_socket_malloc_22_goodG2B1Source(short data) if ( CWE194_Unexpected_Sign_Extension__connect_socket_malloc_22_goodG2B1Global )  data = 100 - 1; return data ; if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; printLine ( dataBuffer ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( dataBuffer ); 