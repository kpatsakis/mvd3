void CWE124_Buffer_Underwrite__char_declare_memcpy_07_bad() char * data ; char dataBuffer [ 100 ] ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; if ( staticFive == 5 )  data = dataBuffer - 8; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; memcpy ( data , source , 100 * sizeof ( char ) ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 