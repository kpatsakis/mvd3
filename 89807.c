void bad() int * data ; data = NULL; data = ( int * ) malloc ( 50 * sizeof ( int ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_82_base * baseObject = new CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_82_bad baseObject -> action ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_82_bad::action(int * data) int source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 