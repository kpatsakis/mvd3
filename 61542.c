static void goodG2B2() char * data ; char * dataGoodBuffer = ( char * ) ALLOCA ( ( 10 + 1 ) * sizeof ( char ) ) ; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; data = dataGoodBuffer; data [ 0 ] = '\0'; char source [ 10 + 1 ] = SRC_STRING ; strncpy ( data , source , strlen ( source ) + 1 ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 