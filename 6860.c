void bad() char * data ; data = NULL; badSource ( data ); static void badSource(char * &data) char myString [ ] = "myString" ; data = strdup ( myString ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 