void bad() int * data ; data = NULL; CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_int_memmove_84_bad * badObject = new CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_int_memmove_84_bad ( data ) ; CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_int_memmove_84_bad::CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_int_memmove_84_bad(int * dataCopy) data = dataCopy; data = new int [ 50 ]; delete badObject CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_int_memmove_84_bad::~CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_int_memmove_84_bad() int source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); delete [ ] data 