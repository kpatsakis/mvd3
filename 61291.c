static void goodB2G2() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( GLOBAL_CONST_TRUE )  size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  data [ dataLen ] = '\0'; if ( GLOBAL_CONST_TRUE )  if ( sscanf ( data , "%d" , & n ) == 1 )  