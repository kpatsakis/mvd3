static void goodG2B() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; char * dataCopy = data ; char * data = dataCopy ; size_t i , dataLen ; dataLen = strlen ( data ); for (i = 0; i < dataLen; i++) 