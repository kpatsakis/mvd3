static void goodG2B2() char * data ; char * dataGoodBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; switch ( 6 )  data = dataGoodBuffer; data [ 0 ] = '\0'; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strncat ( data , source , 100 ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 