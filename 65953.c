void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_cpy_54b_badSink(wchar_t * data) CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_cpy_54c_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_cpy_54c_badSink(wchar_t * data) CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_cpy_54d_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_cpy_54d_badSink(wchar_t * data) CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_cpy_54e_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_cpy_54e_badSink(wchar_t * data) wchar_t source [ 10 + 1 ] = SRC_STRING ; wcscpy ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 