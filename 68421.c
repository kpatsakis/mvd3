static void goodG2B() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; wcscpy ( data , L "fixedstringtest" ) CWE134_Uncontrolled_Format_String__wchar_t_listen_socket_w32_vsnprintf_64b_goodG2BSink ( & data ); void CWE134_Uncontrolled_Format_String__wchar_t_listen_socket_w32_vsnprintf_64b_goodG2BSink(void * dataVoidPtr) wchar_t * * dataPtr = ( wchar_t * * ) dataVoidPtr ; wchar_t * data = ( * dataPtr ) ; goodG2BVaSink ( data , data ); static void goodG2BVaSink(wchar_t * data, ...) wchar_t dest [ 100 ] = L "" va_list args ; _vsnwprintf ( dest , 100 - 1 , data , args ); 