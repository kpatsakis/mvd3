void bad() char * data ; data = NULL; data = new char [ 10 ]; badSink ( & data ); void badSink(char * * dataPtr) char * data = * dataPtr ; char source [ 10 + 1 ] = SRC_STRING ; memcpy ( data , source , ( strlen ( source ) + 1 ) * sizeof ( char ) ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] data 