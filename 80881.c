static void goodG2B2() twoIntsStruct * data ; data = NULL; data = CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_goodG2B2Source ( data ); twoIntsStruct * CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_goodG2B2Source(twoIntsStruct * data) if ( CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_goodG2B2Global )  data = ( twoIntsStruct * ) malloc ( sizeof ( * data ) ); data -> intOne = 1; data -> intTwo = 2; return data ; 