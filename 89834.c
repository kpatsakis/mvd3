void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_66_bad() twoIntsStruct * data ; twoIntsStruct * dataArray [ 5 ] ; data = NULL; data = ( twoIntsStruct * ) malloc ( 50 * sizeof ( twoIntsStruct ) ); dataArray [ 2 ] = data; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_66b_badSink ( dataArray ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_66b_badSink(twoIntsStruct * dataArray[]) twoIntsStruct * data = dataArray [ 2 ] ; twoIntsStruct source [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) source [ i ] . intOne = 0; source [ i ] . intTwo = 0; memcpy ( data , source , 100 * sizeof ( twoIntsStruct ) ); free ( data ); 