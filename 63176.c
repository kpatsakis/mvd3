void CWE134_Uncontrolled_Format_String__char_file_printf_52_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; fclose ( pFile ); CWE134_Uncontrolled_Format_String__char_file_printf_52b_badSink ( data ); void CWE134_Uncontrolled_Format_String__char_file_printf_52b_badSink(char * data) CWE134_Uncontrolled_Format_String__char_file_printf_52c_badSink ( data ); void CWE134_Uncontrolled_Format_String__char_file_printf_52c_badSink(char * data) printf ( data ); 