void CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memcpy_66_bad() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); dataArray [ 2 ] = data; CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memcpy_66b_badSink ( dataArray ); void CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memcpy_66b_badSink(int dataArray[]) int data = dataArray [ 2 ] ; if ( data < 100 )  memcpy ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 