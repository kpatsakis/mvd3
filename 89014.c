void CWE78_OS_Command_Injection__char_file_popen_51_bad() char * data ; char data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; CWE78_OS_Command_Injection__char_file_popen_51b_badSink ( data ); void CWE78_OS_Command_Injection__char_file_popen_51b_badSink(char * data) pipe = POPEN ( data , "wb" ); if ( pipe != NULL )  PCLOSE ( pipe ); 