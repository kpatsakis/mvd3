void CWE401_Memory_Leak__int64_t_realloc_53_bad() int64_t * data ; data = NULL; data = ( int64_t * ) realloc ( data , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); CWE401_Memory_Leak__int64_t_realloc_53b_badSink ( data ); void CWE401_Memory_Leak__int64_t_realloc_53b_badSink(int64_t * data) CWE401_Memory_Leak__int64_t_realloc_53c_badSink ( data ); void CWE401_Memory_Leak__int64_t_realloc_53c_badSink(int64_t * data) CWE401_Memory_Leak__int64_t_realloc_53d_badSink ( data ); void CWE401_Memory_Leak__int64_t_realloc_53d_badSink(int64_t * data) 