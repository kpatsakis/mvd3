static void goodG2B() char * data ; data = NULL; data = goodG2BSource ( data ); char * goodG2BSource(char * data) data = new char [ 10 + 1 ]; return data ; char source [ 10 + 1 ] = SRC_STRING ; memmove ( data , source , ( strlen ( source ) + 1 ) * sizeof ( char ) ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] data 