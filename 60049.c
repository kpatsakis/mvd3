static void goodB2G2() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  data [ dataLen ] = '\0'; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; fprintf ( stdout , "%s\n" , data ); 