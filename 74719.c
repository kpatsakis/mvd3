static void goodG2B() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; data = goodG2BSource ( data ); static char * goodG2BSource(char * data) strcpy ( data , "fixedstringtest" ); return data ; goodG2BVaSink ( data , data ); static void goodG2BVaSink(char * data, ...) char dest [ 100 ] = "" ; va_list args ; vsnprintf ( dest , 100 - 1 , data , args ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 