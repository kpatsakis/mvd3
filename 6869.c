void CWE134_Uncontrolled_Format_String__char_environment_vfprintf_15_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; switch ( 6 )  size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); badVaSinkB ( data , data ); static void badVaSinkB(char * data, ...) va_start ( args , data ); vfprintf ( stdout , data , args ); 