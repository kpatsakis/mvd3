void CWE194_Unexpected_Sign_Extension__rand_malloc_32_bad() short data ; short * dataPtr2 = & data ; data = 0; data = ( short ) RAND32 ( ); short data = * dataPtr2 ; if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; printLine ( dataBuffer ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( dataBuffer ); 