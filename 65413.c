void CWE134_Uncontrolled_Format_String__char_environment_printf_17_bad() int i , j ; char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; for(i = 0; i < 1; i++) size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); printf ( data ); 