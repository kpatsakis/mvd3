void CWE134_Uncontrolled_Format_String__char_file_printf_67_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; myStruct . structFirst = data; CWE134_Uncontrolled_Format_String__char_file_printf_67b_badSink ( myStruct ); void CWE134_Uncontrolled_Format_String__char_file_printf_67b_badSink(CWE134_Uncontrolled_Format_String__char_file_printf_67_structType myStruct) char * data = myStruct . structFirst ; printf ( data ); 