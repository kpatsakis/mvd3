void bad() wchar_t * data ; data = NULL; CWE127_Buffer_Underread__new_wchar_t_cpy_84_bad * badObject = new CWE127_Buffer_Underread__new_wchar_t_cpy_84_bad ( data ) ; CWE127_Buffer_Underread__new_wchar_t_cpy_84_bad::CWE127_Buffer_Underread__new_wchar_t_cpy_84_bad(wchar_t * dataCopy) data = dataCopy; wchar_t * dataBuffer = new wchar_t [ 100 ] ; wmemset ( dataBuffer , L 'A' , 100 - 1 dataBuffer [ 100 - 1 ] = L '\0' data = dataBuffer - 8; delete badObject CWE127_Buffer_Underread__new_wchar_t_cpy_84_bad::~CWE127_Buffer_Underread__new_wchar_t_cpy_84_bad() wchar_t dest [ 100 * 2 ] ; wmemset ( dest , L 'C' , 100 * 2 - 1 dest [ 100 * 2 - 1 ] = L '\0' wcscpy ( dest , data ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 