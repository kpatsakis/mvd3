static void goodB2G() size_t data ; data = 0; data = goodB2GSource ( data ); size_t goodB2GSource(size_t data) return data ; wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) && data < 100 )  myString = new wchar_t [ data ]; wcscpy ( myString , HELLO_STRING ); printWLine ( myString ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] myString 