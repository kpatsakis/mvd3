static void goodG2B() int h ; wchar_t * data ; for(h = 0; h < 1; h++) data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); memmove ( dest , data , wcslen ( dest ) * sizeof ( wchar_t ) ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 