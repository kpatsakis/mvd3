void bad() wchar_t * data ; data = NULL; CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_wchar_t_memmove_84_bad * badObject = new CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_wchar_t_memmove_84_bad ( data ) ; CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_wchar_t_memmove_84_bad::CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_wchar_t_memmove_84_bad(wchar_t * dataCopy) data = dataCopy; data = new wchar_t [ 10 ]; delete badObject CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_wchar_t_memmove_84_bad::~CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_wchar_t_memmove_84_bad() wchar_t source [ 10 + 1 ] = SRC_STRING ; memmove ( data , source , ( wcslen ( source ) + 1 ) * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] data 