static void goodB2G() int * data ; data = NULL; data = ( int * ) calloc ( 100 , sizeof ( int ) ); data [ 0 ] = 5; CWE401_Memory_Leak__int_calloc_53b_goodB2GSink ( data ); void CWE401_Memory_Leak__int_calloc_53b_goodB2GSink(int * data) CWE401_Memory_Leak__int_calloc_53c_goodB2GSink ( data ); void CWE401_Memory_Leak__int_calloc_53c_goodB2GSink(int * data) CWE401_Memory_Leak__int_calloc_53d_goodB2GSink ( data ); void CWE401_Memory_Leak__int_calloc_53d_goodB2GSink(int * data) free ( data ); 