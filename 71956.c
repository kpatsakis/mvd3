static void goodG2B() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , "fixedstringtest" ); myStruct . structFirst = data; CWE134_Uncontrolled_Format_String__char_connect_socket_printf_67b_goodG2BSink ( myStruct ); void CWE134_Uncontrolled_Format_String__char_connect_socket_printf_67b_goodG2BSink(CWE134_Uncontrolled_Format_String__char_connect_socket_printf_67_structType myStruct) char * data = myStruct . structFirst ; printf ( data ); 