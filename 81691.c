static void goodB2G() size_t data ; data = 0; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); goodB2GSink_b ( data ); void goodB2GSink_b(size_t data) goodB2GSink_c ( data ); void goodB2GSink_c(size_t data) goodB2GSink_d ( data ); void goodB2GSink_d(size_t data) if ( data > strlen ( HELLO_STRING ) && data < 100 )  