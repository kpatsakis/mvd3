void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_61_bad() twoIntsStruct * data ; data = NULL; data = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_61b_badSource ( data ); twoIntsStruct * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_61b_badSource(twoIntsStruct * data) data = ( twoIntsStruct * ) malloc ( 50 * sizeof ( twoIntsStruct ) ); return data ; twoIntsStruct source [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) source [ i ] . intOne = 0; source [ i ] . intTwo = 0; memcpy ( data , source , 100 * sizeof ( twoIntsStruct ) ); free ( data ); 