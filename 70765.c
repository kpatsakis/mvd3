void CWE401_Memory_Leak__wchar_t_realloc_05_bad() wchar_t * data ; data = NULL; if ( staticTrue )  data = ( wchar_t * ) realloc ( data , 100 * sizeof ( wchar_t ) ); wcscpy ( data , L "A String" ) printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 