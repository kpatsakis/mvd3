static void goodG2B1() char * data ; char * dataGoodBuffer = ( char * ) ALLOCA ( ( 10 + 1 ) * sizeof ( char ) ) ; if ( globalReturnsFalse ( ) )  int globalReturnsFalse() return 0 ; data = dataGoodBuffer; data [ 0 ] = '\0'; char source [ 10 + 1 ] = SRC_STRING ; memcpy ( data , source , ( strlen ( source ) + 1 ) * sizeof ( char ) ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 