static void goodG2B1() wchar_t * data ; data = NULL; if ( 0 )  data = new wchar_t [ 10 + 1 ]; wchar_t source [ 10 + 1 ] = SRC_STRING ; wcsncpy ( data , source , wcslen ( source ) + 1 ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] data 