static void goodB2G2() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; switch ( 6 )  size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; goodB2G2VaSinkG ( data , data ); static void goodB2G2VaSinkG(char * data, ...) va_start ( args , data ); 