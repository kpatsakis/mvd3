static void goodG2B() char * data ; data = NULL; data = new char [ 100 ]; data [ 0 ] = '\0'; CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_char_memmove_82_base * baseObject = new CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_char_memmove_82_goodG2B baseObject -> action ( data ); void CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_char_memmove_82_goodG2B::action(char * data) char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; memmove ( data , source , 100 * sizeof ( char ) ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] data 