static void good1() while ( 1 )  wchar_t dataBuffer [ 100 ] = L "" wchar_t * data = dataBuffer ; wcscpy ( data , L "abcdefghijklmnopqrstuvwxyz" ) memmove ( data + 6 , data + 4 , 10 * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 