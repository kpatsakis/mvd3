static void goodG2B() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; wcscpy ( data , L "fixedstringtest" ) CWE134_Uncontrolled_Format_String__wchar_t_environment_w32_vsnprintf_52b_goodG2BSink ( data ); void CWE134_Uncontrolled_Format_String__wchar_t_environment_w32_vsnprintf_52b_goodG2BSink(wchar_t * data) CWE134_Uncontrolled_Format_String__wchar_t_environment_w32_vsnprintf_52c_goodG2BSink ( data ); void CWE134_Uncontrolled_Format_String__wchar_t_environment_w32_vsnprintf_52c_goodG2BSink(wchar_t * data) goodG2BVaSink ( data , data ); static void goodG2BVaSink(wchar_t * data, ...) wchar_t dest [ 100 ] = L "" va_list args ; _vsnwprintf ( dest , 100 - 1 , data , args ); 