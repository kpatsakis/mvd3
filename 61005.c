static void goodB2G() char * data ; CWE690_NULL_Deref_From_Return__char_realloc_67_structType myStruct ; data = NULL; data = ( char * ) realloc ( data , 20 * sizeof ( char ) ); myStruct . structFirst = data; CWE690_NULL_Deref_From_Return__char_realloc_67b_goodB2GSink ( myStruct ); void CWE690_NULL_Deref_From_Return__char_realloc_67b_goodB2GSink(CWE690_NULL_Deref_From_Return__char_realloc_67_structType myStruct) char * data = myStruct . structFirst ; if ( data != NULL )  strcpy ( data , "Initialize" ); free ( data ); 