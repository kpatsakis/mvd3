static void goodG2B1() char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; if ( globalFalse )  memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; size_t i , dataLen ; dataLen = strlen ( data ); for (i = 0; i < dataLen; i++) 