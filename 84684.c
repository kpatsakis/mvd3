static void goodG2B() wchar_t * data ; while ( 1 )  data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); wcsncat ( data , source , 100 ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 