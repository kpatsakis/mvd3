static void goodG2B() wchar_t * data ; wchar_t * dataArray [ 5 ] ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; wcscpy ( data , L "fixedstringtest" ) dataArray [ 2 ] = data; CWE134_Uncontrolled_Format_String__wchar_t_listen_socket_w32_vsnprintf_66b_goodG2BSink ( dataArray ); void CWE134_Uncontrolled_Format_String__wchar_t_listen_socket_w32_vsnprintf_66b_goodG2BSink(wchar_t * dataArray[]) wchar_t * data = dataArray [ 2 ] ; goodG2BVaSink ( data , data ); static void goodG2BVaSink(wchar_t * data, ...) wchar_t dest [ 100 ] = L "" va_list args ; _vsnwprintf ( dest , 100 - 1 , data , args ); 