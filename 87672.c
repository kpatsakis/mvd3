void bad() char * dataBuffer = new char [ 100 ] ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer - 8; myStruct . structFirst = data; badSink ( myStruct ); void badSink(structType myStruct) char * data = myStruct . structFirst ; strcpy ( dest , data ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 