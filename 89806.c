static void goodG2B() int data ; int dataArray [ 5 ] ; data = - 1; data = 100 - 1; dataArray [ 2 ] = data; CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memcpy_66b_goodG2BSink ( dataArray ); void CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memcpy_66b_goodG2BSink(int dataArray[]) int data = dataArray [ 2 ] ; char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  memcpy ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 