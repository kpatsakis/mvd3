void CWE134_Uncontrolled_Format_String__char_console_fprintf_16_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; while ( 1 )  size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  data [ dataLen ] = '\0'; while ( 1 )  fprintf ( stdout , data ); 