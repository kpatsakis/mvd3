void bad() char * data ; char dataBuffer [ FILENAME_MAX ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , FILENAME_MAX - dataLen - 1 ); dataArray [ 2 ] = data; badSink ( dataArray ); void badSink(char * dataArray[]) char * data = dataArray [ 2 ] ; pFile = FOPEN ( data , "wb+" ); if ( pFile != NULL )  fclose ( pFile ); 