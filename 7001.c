void CWE124_Buffer_Underwrite__wchar_t_declare_memcpy_54b_goodG2BSink(wchar_t * data) CWE124_Buffer_Underwrite__wchar_t_declare_memcpy_54c_goodG2BSink ( data ); void CWE124_Buffer_Underwrite__wchar_t_declare_memcpy_54c_goodG2BSink(wchar_t * data) CWE124_Buffer_Underwrite__wchar_t_declare_memcpy_54d_goodG2BSink ( data ); void CWE124_Buffer_Underwrite__wchar_t_declare_memcpy_54d_goodG2BSink(wchar_t * data) CWE124_Buffer_Underwrite__wchar_t_declare_memcpy_54e_goodG2BSink ( data ); void CWE124_Buffer_Underwrite__wchar_t_declare_memcpy_54e_goodG2BSink(wchar_t * data) wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' memcpy ( data , source , 100 * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 