void bad() char * data ; char dataBuffer [ 256 ] = "" ; data = dataBuffer; badSource ( data ); static void badSource(char * &data) size_t dataLen = strlen ( data ) ; if ( 256 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 256 - dataLen ) , stdin ) != NULL )  dataLen = strlen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == '\n' )  data [ dataLen - 1 ] = '\0'; data [ dataLen ] = '\0'; 