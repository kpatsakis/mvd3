void CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_08_bad() size_t data ; data = 0; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; data = rand ( ); if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( myString ); 