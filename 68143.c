void bad() char * data ; data = NULL; data = new char [ 50 ]; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; dataArray [ 2 ] = data; badSink ( dataArray ); void badSink(char * dataArray[]) char * data = dataArray [ 2 ] ; memmove ( dest , data , strlen ( dest ) * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 