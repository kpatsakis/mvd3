static void goodB2G() size_t data ; data = 0; data = rand ( ); goodB2GSink_b ( data ); void goodB2GSink_b(size_t data) goodB2GSink_c ( data ); void goodB2GSink_c(size_t data) char * myString ; if ( data > strlen ( HELLO_STRING ) && data < 100 )  myString = new char [ data ]; strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] myString 