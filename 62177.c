void CWE194_Unexpected_Sign_Extension__rand_malloc_41_bad() short data ; data = 0; data = ( short ) RAND32 ( ); CWE194_Unexpected_Sign_Extension__rand_malloc_41_badSink ( data ); void CWE194_Unexpected_Sign_Extension__rand_malloc_41_badSink(short data) if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; printLine ( dataBuffer ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( dataBuffer ); 