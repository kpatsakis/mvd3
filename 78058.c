static void goodG2B() char * data ; CWE590_Free_Memory_Not_on_Heap__free_char_declare_67_structType myStruct ; data = NULL; char * dataBuffer = ( char * ) malloc ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; myStruct . structFirst = data; CWE590_Free_Memory_Not_on_Heap__free_char_declare_67b_goodG2BSink ( myStruct ); void CWE590_Free_Memory_Not_on_Heap__free_char_declare_67b_goodG2BSink(CWE590_Free_Memory_Not_on_Heap__free_char_declare_67_structType myStruct) char * data = myStruct . structFirst ; free ( data ); 