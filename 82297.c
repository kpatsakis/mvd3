static void goodB2G() int * data ; data = ( int * ) calloc ( 100 , sizeof ( int ) ); data [ 0 ] = 5; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); myStruct . structFirst = data; CWE401_Memory_Leak__int_calloc_67b_goodB2GSink ( myStruct ); void CWE401_Memory_Leak__int_calloc_67b_goodB2GSink(CWE401_Memory_Leak__int_calloc_67_structType myStruct) int * data = myStruct . structFirst ; free ( data ); 