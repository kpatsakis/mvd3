void bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; CWE134_Uncontrolled_Format_String__char_file_printf_84_bad * badObject = new CWE134_Uncontrolled_Format_String__char_file_printf_84_bad ( data ) ; CWE134_Uncontrolled_Format_String__char_file_printf_84_bad::CWE134_Uncontrolled_Format_String__char_file_printf_84_bad(char * dataCopy) data = dataCopy; size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; 