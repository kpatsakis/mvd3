static void goodG2B2() wchar_t * data ; wchar_t * dataGoodBuffer = ( wchar_t * ) ALLOCA ( ( 10 + 1 ) * sizeof ( wchar_t ) ) ; if ( globalTrue )  data = dataGoodBuffer; data [ 0 ] = L '\0' wchar_t source [ 10 + 1 ] = SRC_STRING ; memcpy ( data , source , ( wcslen ( source ) + 1 ) * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 