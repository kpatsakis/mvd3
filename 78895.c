static void goodG2B2() char * data ; char dataGoodBuffer [ 10 + 1 ] ; if ( GLOBAL_CONST_TRUE )  data = dataGoodBuffer; data [ 0 ] = '\0'; char source [ 10 + 1 ] = SRC_STRING ; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 