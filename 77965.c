static void goodB2G() size_t data ; data = 0; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); goodB2GSink ( & data ); void goodB2GSink(void * dataVoidPtr) size_t * dataPtr = ( size_t * ) dataVoidPtr ; size_t data = ( * dataPtr ) ; if ( data > strlen ( HELLO_STRING ) && data < 100 )  