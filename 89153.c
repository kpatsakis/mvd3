static void goodG2B() char * data ; char * & dataRef = data ; char dataGoodBuffer [ 10 + 1 ] ; data = dataGoodBuffer; data [ 0 ] = '\0'; char * data = dataRef ; char source [ 10 + 1 ] = SRC_STRING ; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 