void bad() char * data ; char dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; while ( 1 )  size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , FILENAME_MAX - dataLen - 1 ); inputFile . open ( ( char * ) data ); 