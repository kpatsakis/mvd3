static void goodG2B() wchar_t * data ; CWE124_Buffer_Underwrite__malloc_wchar_t_memmove_67_structType myStruct ; data = NULL; wchar_t * dataBuffer = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; wmemset ( dataBuffer , L 'A' , 100 - 1 dataBuffer [ 100 - 1 ] = L '\0' data = dataBuffer; myStruct . structFirst = data; CWE124_Buffer_Underwrite__malloc_wchar_t_memmove_67b_goodG2BSink ( myStruct ); void CWE124_Buffer_Underwrite__malloc_wchar_t_memmove_67b_goodG2BSink(CWE124_Buffer_Underwrite__malloc_wchar_t_memmove_67_structType myStruct) wchar_t * data = myStruct . structFirst ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' memmove ( data , source , 100 * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 