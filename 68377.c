static void goodB2G() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; goodB2GSink ( data ); static void goodB2GSink(char * data) goodB2GVaSink ( data , data ); static void goodB2GVaSink(char * data, ...) va_start ( args , data ); 