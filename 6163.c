void bad() char * data ; data = NULL; data = new char [ 100 ]; strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); * dataPtr1 = data; 