void bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; badSource ( data ); void badSource(char * &data) size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; 