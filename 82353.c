static void goodG2B1() size_t data ; data = 0; data = 20; goodG2B1Sink ( data ); void goodG2B1Sink(size_t data) if ( goodG2B1Global )  char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = new char [ data ]; strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] myString 