static void goodB2G() int * data ; data = NULL; data = ( int * ) realloc ( data , 100 * sizeof ( int ) ); data [ 0 ] = 5; CWE401_Memory_Leak__int_realloc_52b_goodB2GSink ( data ); void CWE401_Memory_Leak__int_realloc_52b_goodB2GSink(int * data) CWE401_Memory_Leak__int_realloc_52c_goodB2GSink ( data ); void CWE401_Memory_Leak__int_realloc_52c_goodB2GSink(int * data) free ( data ); 