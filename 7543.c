void CWE401_Memory_Leak__char_malloc_21_bad() char * data ; data = NULL; data = ( char * ) malloc ( 100 * sizeof ( char ) ); strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); badSink ( data ); static void badSink(char * data) 