static void goodB2G() char * data ; char * dataArray [ 5 ] ; data = NULL; data = ( char * ) calloc ( 20 , sizeof ( char ) ); dataArray [ 2 ] = data; CWE690_NULL_Deref_From_Return__char_calloc_66b_goodB2GSink ( dataArray ); void CWE690_NULL_Deref_From_Return__char_calloc_66b_goodB2GSink(char * dataArray[]) char * data = dataArray [ 2 ] ; if ( data != NULL )  strcpy ( data , "Initialize" ); free ( data ); 