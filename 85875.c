void CWE126_Buffer_Overread__wchar_t_alloca_memcpy_53_bad() wchar_t * data ; wchar_t * dataBadBuffer = ( wchar_t * ) ALLOCA ( 50 * sizeof ( wchar_t ) ) ; wmemset ( dataBadBuffer , L 'A' , 50 - 1 dataBadBuffer [ 50 - 1 ] = L wmemset ( dataGoodBuffer , L 'A' , 100 - 1 dataGoodBuffer [ 100 - 1 ] = L '\0' data = dataBadBuffer; CWE126_Buffer_Overread__wchar_t_alloca_memcpy_53b_badSink ( data ); void CWE126_Buffer_Overread__wchar_t_alloca_memcpy_53b_badSink(wchar_t * data) CWE126_Buffer_Overread__wchar_t_alloca_memcpy_53c_badSink ( data ); void CWE126_Buffer_Overread__wchar_t_alloca_memcpy_53c_badSink(wchar_t * data) CWE126_Buffer_Overread__wchar_t_alloca_memcpy_53d_badSink ( data ); void CWE126_Buffer_Overread__wchar_t_alloca_memcpy_53d_badSink(wchar_t * data) wchar_t dest [ 100 ] ; wmemset ( dest , L 'C' , 100 - 1 dest [ 100 - 1 ] = L '\0' memcpy ( dest , data , wcslen ( dest ) * sizeof ( wchar_t ) ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 