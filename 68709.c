void bad() char * data ; char dataBuffer [ FILENAME_MAX ] = "" ; data = dataBuffer; CWE36_Absolute_Path_Traversal__char_file_ifstream_84_bad * badObject = new CWE36_Absolute_Path_Traversal__char_file_ifstream_84_bad ( data ) ; CWE36_Absolute_Path_Traversal__char_file_ifstream_84_bad::CWE36_Absolute_Path_Traversal__char_file_ifstream_84_bad(char * dataCopy) data = dataCopy; size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( FILENAME_MAX - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( FILENAME_MAX - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; 