static void good1() if ( globalReturnsFalse ( ) )  int globalReturnsFalse() return 0 ; char dataBuffer [ 100 ] = "" ; char * data = dataBuffer ; strcpy ( data , "abcdefghijklmnopqrstuvwxyz" ); memmove ( data + 6 , data + 4 , 10 * sizeof ( char ) ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 