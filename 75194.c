static void goodG2B2() char * data ; data = NULL; if ( GLOBAL_CONST_FIVE == 5 )  data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 