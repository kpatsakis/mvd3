void bad() wchar_t * data ; wchar_t dataBadBuffer [ 50 ] ; wmemset ( dataBadBuffer , L 'A' , 50 - 1 dataBadBuffer [ 50 - 1 ] = L wmemset ( dataGoodBuffer , L 'A' , 100 - 1 dataGoodBuffer [ 100 - 1 ] = L '\0' data = dataBadBuffer; CWE126_Buffer_Overread__wchar_t_declare_memmove_82_base * baseObject = new CWE126_Buffer_Overread__wchar_t_declare_memmove_82_bad baseObject -> action ( data ); void CWE126_Buffer_Overread__wchar_t_declare_memmove_82_bad::action(wchar_t * data) wchar_t dest [ 100 ] ; wmemset ( dest , L 'C' , 100 - 1 dest [ 100 - 1 ] = L '\0' memmove ( dest , data , wcslen ( dest ) * sizeof ( wchar_t ) ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 