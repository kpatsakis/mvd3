static void goodG2B2() char * password ; char passwordBuffer [ 100 ] = "" ; password = passwordBuffer; password = goodG2B2Source ( password ); static char * goodG2B2Source(char * password) if ( goodG2B2Static )  if ( fgets ( password , 100 , stdin ) == NULL )  password [ 0 ] = '\0'; passwordLen = strlen ( password ); if ( passwordLen > 0 )  password [ passwordLen - 1 ] = '\0'; return password ; 