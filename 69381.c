static void goodB2G() FILE * data ; CWE690_NULL_Deref_From_Return__w32_wfopen_67_structType myStruct ; data = NULL; data = _wfopen ( L "file.txt" , L "w+" ) myStruct . structFirst = data; CWE690_NULL_Deref_From_Return__w32_wfopen_67b_goodB2GSink ( myStruct ); void CWE690_NULL_Deref_From_Return__w32_wfopen_67b_goodB2GSink(CWE690_NULL_Deref_From_Return__w32_wfopen_67_structType myStruct) FILE * data = myStruct . structFirst ; if ( data != NULL )  fclose ( data ); 