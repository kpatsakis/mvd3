void CWE195_Signed_to_Unsigned_Conversion_Error__fgets_strncpy_64_bad() int data ; data = - 1; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); CWE195_Signed_to_Unsigned_Conversion_Error__fgets_strncpy_64b_badSink ( & data ); void CWE195_Signed_to_Unsigned_Conversion_Error__fgets_strncpy_64b_badSink(void * dataVoidPtr) int * dataPtr = ( int * ) dataVoidPtr ; int data = ( * dataPtr ) ; char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  strncpy ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 