void CWE134_Uncontrolled_Format_String__wchar_t_environment_fprintf_53_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; size_t dataLen = wcslen ( data ) ; wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); CWE134_Uncontrolled_Format_String__wchar_t_environment_fprintf_53b_badSink ( data ); void CWE134_Uncontrolled_Format_String__wchar_t_environment_fprintf_53b_badSink(wchar_t * data) CWE134_Uncontrolled_Format_String__wchar_t_environment_fprintf_53c_badSink ( data ); void CWE134_Uncontrolled_Format_String__wchar_t_environment_fprintf_53c_badSink(wchar_t * data) CWE134_Uncontrolled_Format_String__wchar_t_environment_fprintf_53d_badSink ( data ); void CWE134_Uncontrolled_Format_String__wchar_t_environment_fprintf_53d_badSink(wchar_t * data) fwprintf ( stdout , data ); 