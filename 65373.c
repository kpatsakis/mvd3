static void goodG2B() twoIntsStruct * data ; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_67_structType myStruct ; data = NULL; data = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ); myStruct . structFirst = data; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_67b_goodG2BSink ( myStruct ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_67b_goodG2BSink(CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_67_structType myStruct) twoIntsStruct * data = myStruct . structFirst ; twoIntsStruct source [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) source [ i ] . intOne = 0; source [ i ] . intTwo = 0; size_t i ; for (i = 0; i < 100; i++) data [ i ] = source [ i ]; free ( data ); 