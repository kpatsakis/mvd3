static void goodG2B2() char * data ; data = NULL; if ( globalTrue )  data = new char [ 10 + 1 ]; char source [ 10 + 1 ] = SRC_STRING ; strncpy ( data , source , strlen ( source ) + 1 ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] data 