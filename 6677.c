static void goodG2B() int h , j ; char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; for(h = 0; h < 1; h++) strcpy ( data , "fixedstringtest" ); goodG2BVaSinkB ( data , data ); static void goodG2BVaSinkB(char * data, ...) va_start ( args , data ); vsnprintf ( dest , 100 - 1 , data , args ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 