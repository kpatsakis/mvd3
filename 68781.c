void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_bad() int64_t * data ; data = ( int64_t * ) malloc ( sizeof ( data ) ); myStruct . structFirst = data; CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67b_badSink ( myStruct ); void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67b_badSink(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_structType myStruct) int64_t * data = myStruct . structFirst ; printLongLongLine ( * data ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 