static void goodG2B() wchar_t * data ; wchar_t * * dataPtr2 = & data ; data = NULL; data = new wchar_t [ 10 + 1 ]; wchar_t * data = * dataPtr2 ; wchar_t source [ 10 + 1 ] = SRC_STRING ; memcpy ( data , source , ( wcslen ( source ) + 1 ) * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] data 