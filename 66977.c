static void goodG2B() char * dataBuffer = new char [ 100 ] ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; goodG2BSink ( & data ); void goodG2BSink(char * * dataPtr) char * data = * dataPtr ; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 