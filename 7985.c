void bad() size_t data ; data = 0; data = badSource ( data ); size_t badSource(size_t data) data = rand ( ); return data ; char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = new char [ data ]; strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] myString 