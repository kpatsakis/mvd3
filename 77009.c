static void goodG2B1() char * data ; data = NULL; data = goodG2B1Source ( data ); char * goodG2B1Source(char * data) if ( goodG2B1Global )  data = new char [ 10 + 1 ]; return data ; char source [ 10 + 1 ] = SRC_STRING ; memcpy ( data , source , ( strlen ( source ) + 1 ) * sizeof ( char ) ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] data 