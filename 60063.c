void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_54_bad() int * data ; data = ( int * ) malloc ( 50 * sizeof ( int ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_54b_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_54b_badSink(int * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_54c_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_54c_badSink(int * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_54d_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_54d_badSink(int * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_54e_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_54e_badSink(int * data) memmove ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 