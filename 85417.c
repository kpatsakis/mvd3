void CWE606_Unchecked_Loop_Condition__char_file_41_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; badSink ( data ); static void badSink(char * data) if ( sscanf ( data , "%d" , & n ) == 1 )  