static void goodG2B() char * dataGoodBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; memset ( dataGoodBuffer , 'A' , 100 - 1 ); dataGoodBuffer [ 100 - 1 ] = '\0'; data = dataGoodBuffer; dataArray [ 2 ] = data; CWE126_Buffer_Overread__char_alloca_loop_66b_goodG2BSink ( dataArray ); void CWE126_Buffer_Overread__char_alloca_loop_66b_goodG2BSink(char * dataArray[]) char * data = dataArray [ 2 ] ; dest [ i ] = data [ i ]; dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 