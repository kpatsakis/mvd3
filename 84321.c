static void goodG2B() char * data ; map < int , char * > dataMap ; char dataGoodBuffer [ 10 + 1 ] ; data = dataGoodBuffer; data [ 0 ] = '\0'; dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; goodG2BSink ( dataMap ); void goodG2BSink(map<int, char *> dataMap) char * data = dataMap [ 2 ] ; char source [ 10 + 1 ] = SRC_STRING ; strncpy ( data , source , strlen ( source ) + 1 ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 