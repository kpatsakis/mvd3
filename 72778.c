void bad() size_t data ; size_t dataArray [ 5 ] ; data = 0; dataArray [ 2 ] = data; badSink ( dataArray ); void badSink(size_t dataArray[]) size_t data = dataArray [ 2 ] ; char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = new char [ data ]; strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] myString 