void CWE134_Uncontrolled_Format_String__wchar_t_console_w32_vsnprintf_67_bad() wchar_t * data ; CWE134_Uncontrolled_Format_String__wchar_t_console_w32_vsnprintf_67_structType myStruct ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; size_t dataLen = wcslen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  data [ dataLen - 1 ] = L '\0' data [ dataLen ] = L '\0' myStruct . structFirst = data; CWE134_Uncontrolled_Format_String__wchar_t_console_w32_vsnprintf_67b_badSink ( myStruct ); void CWE134_Uncontrolled_Format_String__wchar_t_console_w32_vsnprintf_67b_badSink(CWE134_Uncontrolled_Format_String__wchar_t_console_w32_vsnprintf_67_structType myStruct) wchar_t * data = myStruct . structFirst ; badVaSink ( data , data ); static void badVaSink(wchar_t * data, ...) wchar_t dest [ 100 ] = L "" va_list args ; _vsnwprintf ( dest , 100 - 1 , data , args ); 