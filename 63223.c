void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_memmove_52_bad() wchar_t * data ; wchar_t dataBadBuffer [ 10 ] ; data = dataBadBuffer; data [ 0 ] = L '\0' CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_memmove_52b_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_memmove_52b_badSink(wchar_t * data) CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_memmove_52c_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_memmove_52c_badSink(wchar_t * data) wchar_t source [ 10 + 1 ] = SRC_STRING ; memmove ( data , source , ( wcslen ( source ) + 1 ) * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 