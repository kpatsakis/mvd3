static void goodG2B() int data ; CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_connect_socket_67_structType myStruct ; data = - 1; data = 20; myStruct . structFirst = data; CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_connect_socket_67b_goodG2BSink ( myStruct ); void CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_connect_socket_67b_goodG2BSink(CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_connect_socket_67_structType myStruct) int data = myStruct . structFirst ; size_t i ; int * intPointer ; intPointer = ( int * ) malloc ( data * sizeof ( int ) ); for (i = 0; i < (size_t)data; i++) intPointer [ i ] = 0; free ( intPointer ); 