void bad() wchar_t * data ; wchar_t dataBuffer [ FILENAME_MAX ] = L "" data = dataBuffer; CWE36_Absolute_Path_Traversal__wchar_t_console_ofstream_84_bad * badObject = new CWE36_Absolute_Path_Traversal__wchar_t_console_ofstream_84_bad ( data ) ; CWE36_Absolute_Path_Traversal__wchar_t_console_ofstream_84_bad::CWE36_Absolute_Path_Traversal__wchar_t_console_ofstream_84_bad(wchar_t * dataCopy) data = dataCopy; size_t dataLen = wcslen ( data ) ; if ( FILENAME_MAX - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( FILENAME_MAX - dataLen ) , stdin ) != NULL )  dataLen = wcslen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == L '\n' ) 