static void goodB2G() wchar_t * data ; data = NULL; data = ( wchar_t * ) realloc ( data , 20 * sizeof ( wchar_t ) ); dataArray [ 2 ] = data; CWE690_NULL_Deref_From_Return__wchar_t_realloc_66b_goodB2GSink ( dataArray ); void CWE690_NULL_Deref_From_Return__wchar_t_realloc_66b_goodB2GSink(wchar_t * dataArray[]) wchar_t * data = dataArray [ 2 ] ; if ( data != NULL )  printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 