void bad() char * data ; char * & dataRef = data ; char dataBadBuffer [ 10 ] ; data = dataBadBuffer; data [ 0 ] = '\0'; char * data = dataRef ; char source [ 10 + 1 ] = SRC_STRING ; memcpy ( data , source , ( strlen ( source ) + 1 ) * sizeof ( char ) ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 