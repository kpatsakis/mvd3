void CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_declare_ncpy_53_bad() wchar_t * data ; wchar_t dataBadBuffer [ 50 ] ; data = dataBadBuffer; data [ 0 ] = L '\0' CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_declare_ncpy_53b_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_declare_ncpy_53b_badSink(wchar_t * data) CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_declare_ncpy_53c_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_declare_ncpy_53c_badSink(wchar_t * data) CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_declare_ncpy_53d_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_declare_ncpy_53d_badSink(wchar_t * data) wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcsncpy ( data , source , 100 - 1 ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 