static void goodB2G() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; dataArray [ 2 ] = data; CWE606_Unchecked_Loop_Condition__char_file_66b_goodB2GSink ( dataArray ); void CWE606_Unchecked_Loop_Condition__char_file_66b_goodB2GSink(char * dataArray[]) char * data = dataArray [ 2 ] ; if ( sscanf ( data , "%d" , & n ) == 1 )  