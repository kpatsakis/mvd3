void CWE401_Memory_Leak__wchar_t_realloc_52_bad() wchar_t * data ; data = NULL; data = ( wchar_t * ) realloc ( data , 100 * sizeof ( wchar_t ) ); wcscpy ( data , L "A String" ) printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) CWE401_Memory_Leak__wchar_t_realloc_52b_badSink ( data ); void CWE401_Memory_Leak__wchar_t_realloc_52b_badSink(wchar_t * data) CWE401_Memory_Leak__wchar_t_realloc_52c_badSink ( data ); void CWE401_Memory_Leak__wchar_t_realloc_52c_badSink(wchar_t * data) 