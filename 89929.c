void bad() char * data ; char dataBuffer [ FILENAME_MAX ] = "" ; data = dataBuffer; data = badSource ( data ); char * badSource(char * data) if ( badGlobal )  size_t dataLen = strlen ( data ) ; if ( FILENAME_MAX - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( FILENAME_MAX - dataLen ) , stdin ) != NULL )  data [ dataLen ] = '\0'; return data ; pFile = FOPEN ( data , "wb+" ); if ( pFile != NULL )  fclose ( pFile ); 