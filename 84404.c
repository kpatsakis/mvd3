static void goodB2G() char * data ; char * * dataPtr1 = & data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; char * data = * dataPtr1 ; size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; * dataPtr1 = data; printf ( "%s\n" , data ); 