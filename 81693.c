static void goodG2B() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , "fixedstringtest" ); myStruct . structFirst = data; CWE134_Uncontrolled_Format_String__char_connect_socket_vprintf_67b_goodG2BSink ( myStruct ); void CWE134_Uncontrolled_Format_String__char_connect_socket_vprintf_67b_goodG2BSink(CWE134_Uncontrolled_Format_String__char_connect_socket_vprintf_67_structType myStruct) char * data = myStruct . structFirst ; goodG2BVaSink ( data , data ); static void goodG2BVaSink(char * data, ...) va_start ( args , data ); vprintf ( data , args ); 