void CWE134_Uncontrolled_Format_String__char_file_w32_vsnprintf_54_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; CWE134_Uncontrolled_Format_String__char_file_w32_vsnprintf_54b_badSink ( data ); void CWE134_Uncontrolled_Format_String__char_file_w32_vsnprintf_54b_badSink(char * data) CWE134_Uncontrolled_Format_String__char_file_w32_vsnprintf_54c_badSink ( data ); void CWE134_Uncontrolled_Format_String__char_file_w32_vsnprintf_54c_badSink(char * data) CWE134_Uncontrolled_Format_String__char_file_w32_vsnprintf_54d_badSink ( data ); void CWE134_Uncontrolled_Format_String__char_file_w32_vsnprintf_54d_badSink(char * data) CWE134_Uncontrolled_Format_String__char_file_w32_vsnprintf_54e_badSink ( data ); void CWE134_Uncontrolled_Format_String__char_file_w32_vsnprintf_54e_badSink(char * data) badVaSink ( data , data ); static void badVaSink(char * data, ...) va_start ( args , data ); vsnprintf ( dest , 100 - 1 , data , args ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 