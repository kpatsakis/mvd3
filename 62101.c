static void goodB2G() size_t data ; data = 0; data = goodB2GSource ( data ); size_t goodB2GSource(size_t data) char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); return data ; if ( data > strlen ( HELLO_STRING ) && data < 100 )  