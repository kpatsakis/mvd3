void CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_memcpy_34_bad() char * data ; CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_memcpy_34_unionType myUnion ; char dataBadBuffer [ 50 ] ; data = dataBadBuffer; data [ 0 ] = '\0'; myUnion . unionFirst = data; char * data = myUnion . unionSecond ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; memcpy ( data , source , 100 * sizeof ( char ) ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 