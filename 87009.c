static void goodG2B() twoIntsStruct * data ; data = NULL; data = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_82_base * baseObject = new CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_82_goodG2B baseObject -> action ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_82_goodG2B::action(twoIntsStruct * data) twoIntsStruct source [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) source [ i ] . intOne = 0; source [ i ] . intTwo = 0; memcpy ( data , source , 100 * sizeof ( twoIntsStruct ) ); printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 