void bad() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  count = atoi ( inputBuffer ); countMap [ 0 ] = count; countMap [ 1 ] = count; countMap [ 2 ] = count; badSink ( countMap ); void badSink(map<int, int> countMap) int count = countMap [ 2 ] ; SLEEP ( count ); 