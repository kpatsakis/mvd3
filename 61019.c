void CWE606_Unchecked_Loop_Condition__char_file_05_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( staticTrue )  size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; if ( sscanf ( data , "%d" , & n ) == 1 )  