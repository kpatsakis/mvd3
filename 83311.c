static void goodB2G() wchar_t * data ; CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_environment_67_structType myStruct ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); myStruct . structFirst = data; CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_environment_67b_goodB2GSink ( myStruct ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_environment_67b_goodB2GSink(CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_environment_67_structType myStruct) wchar_t * data = myStruct . structFirst ; free ( data ); 