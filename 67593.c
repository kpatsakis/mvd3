static void goodG2B1() char * data ; char dataGoodBuffer [ 100 ] ; if ( staticFive != 5 )  data = dataGoodBuffer; data [ 0 ] = '\0'; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 