static void goodG2B() wchar_t * data ; data = new wchar_t [ 100 ]; CWE122_Heap_Based_Buffer_Overflow__cpp_CWE806_wchar_t_memmove_84_goodG2B * goodG2BObject = new CWE122_Heap_Based_Buffer_Overflow__cpp_CWE806_wchar_t_memmove_84_goodG2B ( data ) ; CWE122_Heap_Based_Buffer_Overflow__cpp_CWE806_wchar_t_memmove_84_goodG2B::CWE122_Heap_Based_Buffer_Overflow__cpp_CWE806_wchar_t_memmove_84_goodG2B(wchar_t * dataCopy) data = dataCopy; wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' delete goodG2BObject CWE122_Heap_Based_Buffer_Overflow__cpp_CWE806_wchar_t_memmove_84_goodG2B::~CWE122_Heap_Based_Buffer_Overflow__cpp_CWE806_wchar_t_memmove_84_goodG2B() wchar_t dest [ 50 ] = L "" memmove ( dest , data , wcslen ( data ) * sizeof ( wchar_t ) ); 