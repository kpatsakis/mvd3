void CWE690_NULL_Deref_From_Return__int_calloc_54_bad() int * data ; data = ( int * ) calloc ( 1 , sizeof ( int ) ); CWE690_NULL_Deref_From_Return__int_calloc_54b_badSink ( data ); void CWE690_NULL_Deref_From_Return__int_calloc_54b_badSink(int * data) CWE690_NULL_Deref_From_Return__int_calloc_54c_badSink ( data ); void CWE690_NULL_Deref_From_Return__int_calloc_54c_badSink(int * data) CWE690_NULL_Deref_From_Return__int_calloc_54d_badSink ( data ); void CWE690_NULL_Deref_From_Return__int_calloc_54d_badSink(int * data) CWE690_NULL_Deref_From_Return__int_calloc_54e_badSink ( data ); void CWE690_NULL_Deref_From_Return__int_calloc_54e_badSink(int * data) data [ 0 ] = 5; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 