static void goodG2B() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; size_t sourceLen ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; sourceLen = strlen ( source ); strncat ( data , source , sourceLen ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 