void bad() char * data ; char dataBuffer [ 256 ] = "" ; data = dataBuffer; badSource ( data ); void badSource(char * &data) size_t dataLen = strlen ( data ) ; if ( 256 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 256 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; 