static void goodG2B2() char * data ; data = NULL; if ( GLOBAL_CONST_FIVE == 5 )  data = ( char * ) malloc ( ( 10 + 1 ) * sizeof ( char ) ); char source [ 10 + 1 ] = SRC_STRING ; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 