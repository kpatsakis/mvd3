void CWE590_Free_Memory_Not_on_Heap__free_char_alloca_08_bad() if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 