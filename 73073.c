void CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_18_bad() charVoid * structCharVoid = ( charVoid * ) malloc ( sizeof ( charVoid ) ) ; structCharVoid -> voidSecond = ( void * ) SRC_STR; printWLine ( ( wchar_t * ) structCharVoid -> voidSecond ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) memmove ( structCharVoid -> charFirst , SRC_STR , sizeof ( * structCharVoid ) ); printWLine ( ( wchar_t * ) structCharVoid -> charFirst ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) printWLine ( ( wchar_t * ) structCharVoid -> voidSecond ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 