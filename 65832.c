static void goodG2B() char * data ; data = NULL; data = CWE401_Memory_Leak__char_realloc_61b_goodG2BSource ( data ); char * CWE401_Memory_Leak__char_realloc_61b_goodG2BSource(char * data) data = ( char * ) ALLOCA ( 100 * sizeof ( char ) ); strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); return data ; 