static void goodG2B() char * data ; char dataGoodBuffer [ 100 ] ; data = dataGoodBuffer; data [ 0 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_ncpy_63b_goodG2BSink ( & data ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_ncpy_63b_goodG2BSink(char * * dataPtr) char * data = * dataPtr ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strncpy ( data , source , 100 - 1 ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 