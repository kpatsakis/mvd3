static void goodG2B2() wchar_t * data ; switch ( 6 )  data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); memcpy ( dest , data , wcslen ( dest ) * sizeof ( wchar_t ) ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 