static void goodG2B() TwoIntsClass * data ; data = NULL; data = new TwoIntsClass [ 100 ]; CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_class_memmove_82_base * baseObject = new CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_class_memmove_82_goodG2B baseObject -> action ( data ); void CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_class_memmove_82_goodG2B::action(TwoIntsClass * data) TwoIntsClass source [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) source [ i ] . intOne = 0; source [ i ] . intTwo = 0; memmove ( data , source , 100 * sizeof ( TwoIntsClass ) ); printIntLine ( data [ 0 ] . intOne ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); delete [ ] data 