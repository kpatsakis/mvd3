static void goodG2B1() char * data ; data = NULL; switch ( 5 )  data = ( char * ) ALLOCA ( 100 * sizeof ( char ) ); strcpy ( data , "a string" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 