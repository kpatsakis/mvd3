static void goodG2B() char dataBuffer [ 100 ] ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; dataArray [ 2 ] = data; CWE124_Buffer_Underwrite__char_declare_cpy_66b_goodG2BSink ( dataArray ); void CWE124_Buffer_Underwrite__char_declare_cpy_66b_goodG2BSink(char * dataArray[]) char * data = dataArray [ 2 ] ; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 