void CWE78_OS_Command_Injection__char_file_w32_spawnvp_67_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; myStruct . structFirst = data; CWE78_OS_Command_Injection__char_file_w32_spawnvp_67b_badSink ( myStruct ); void CWE78_OS_Command_Injection__char_file_w32_spawnvp_67b_badSink(CWE78_OS_Command_Injection__char_file_w32_spawnvp_67_structType myStruct) char * data = myStruct . structFirst ; 