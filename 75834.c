void bad() wchar_t * data ; data = NULL; data = badSource ( data ); wchar_t * badSource(wchar_t * data) if ( badGlobal )  data = new wchar_t [ 10 ]; return data ; wchar_t source [ 10 + 1 ] = SRC_STRING ; memmove ( data , source , ( wcslen ( source ) + 1 ) * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] data 