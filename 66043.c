void bad() char * data ; char * & dataRef = data ; char dataBuffer [ 100 ] ; data = dataBuffer; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; char * data = dataRef ; size_t i , dataLen ; dataLen = strlen ( data ); for (i = 0; i < dataLen; i++) 