CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_malloc_83_bad::~CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_malloc_83_bad() if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; printLine ( dataBuffer ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( dataBuffer ); 