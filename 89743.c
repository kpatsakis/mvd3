void bad() char * data ; data = new char [ 100 ]; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; CWE122_Heap_Based_Buffer_Overflow__cpp_CWE806_char_loop_82_base * baseObject = new CWE122_Heap_Based_Buffer_Overflow__cpp_CWE806_char_loop_82_bad baseObject -> action ( data ); void CWE122_Heap_Based_Buffer_Overflow__cpp_CWE806_char_loop_82_bad::action(char * data) size_t i , dataLen ; dataLen = strlen ( data ); for (i = 0; i < dataLen; i++) 