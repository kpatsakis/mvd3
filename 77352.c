static void goodG2B() char * dataGoodBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; memset ( dataGoodBuffer , 'A' , 100 - 1 ); dataGoodBuffer [ 100 - 1 ] = '\0'; data = dataGoodBuffer; myStruct . structFirst = data; CWE126_Buffer_Overread__char_alloca_memmove_67b_goodG2BSink ( myStruct ); void CWE126_Buffer_Overread__char_alloca_memmove_67b_goodG2BSink(CWE126_Buffer_Overread__char_alloca_memmove_67_structType myStruct) char * data = myStruct . structFirst ; memmove ( dest , data , strlen ( dest ) * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 