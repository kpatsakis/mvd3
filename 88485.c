void bad() char * data ; data = NULL; data = new char [ 10 ]; CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_char_loop_82_base * baseObject = new CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_char_loop_82_bad baseObject -> action ( data ); void CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_char_loop_82_bad::action(char * data) char source [ 10 + 1 ] = SRC_STRING ; size_t i , sourceLen ; sourceLen = strlen ( source ); for (i = 0; i < sourceLen + 1; i++) 