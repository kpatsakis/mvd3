static void goodG2B2() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( STATIC_CONST_TRUE )  strcpy ( data , "fixedstringtest" ); goodG2B2VaSinkB ( data , data ); static void goodG2B2VaSinkB(char * data, ...) va_start ( args , data ); vsnprintf ( dest , 100 - 1 , data , args ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 