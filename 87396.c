static void goodG2B2() char * data ; data = NULL; if ( STATIC_CONST_FIVE == 5 )  data = ( char * ) malloc ( ( 10 + 1 ) * sizeof ( char ) ); char source [ 10 + 1 ] = SRC_STRING ; memcpy ( data , source , ( strlen ( source ) + 1 ) * sizeof ( char ) ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 