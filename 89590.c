void bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; wcscpy ( data , BAD_OS_COMMAND ); baseObject -> action ( data ); void CWE426_Untrusted_Search_Path__wchar_t_popen_82_bad::action(wchar_t * data) pipe = POPEN ( data , L "wb" ) if ( pipe != NULL )  PCLOSE ( pipe ); 