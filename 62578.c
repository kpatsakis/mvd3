void bad() char * data ; char dataBuffer [ FILENAME_MAX ] = "" ; data = dataBuffer; if ( STATIC_CONST_TRUE )  size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , FILENAME_MAX - dataLen - 1 ); outputFile . open ( ( char * ) data ); 