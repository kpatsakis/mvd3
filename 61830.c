void bad() wchar_t * data ; wchar_t dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; size_t dataLen = wcslen ( data ) ; wcsncat ( data + dataLen , environment , FILENAME_MAX - dataLen - 1 ); baseObject -> action ( data ); void CWE23_Relative_Path_Traversal__wchar_t_environment_fopen_82_bad::action(wchar_t * data) pFile = FOPEN ( data , L "wb+" ) if ( pFile != NULL )  fclose ( pFile ); 