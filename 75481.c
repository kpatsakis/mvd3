static void goodG2B2() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); if ( globalTrue )  memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; strncpy ( dest , data , strlen ( data ) ); dest [ 50 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 