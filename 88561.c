static void goodG2B1() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( GLOBAL_CONST_FALSE )  strcpy ( data , "fixedstringtest" ); goodG2B1VaSinkB ( data , data ); static void goodG2B1VaSinkB(char * data, ...) va_start ( args , data ); vprintf ( data , args ); 