void bad() char * data ; data = NULL; char * dataBuffer = new char [ 100 ] ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer - 8; CWE127_Buffer_Underread__new_char_cpy_82_base * baseObject = new CWE127_Buffer_Underread__new_char_cpy_82_bad baseObject -> action ( data ); void CWE127_Buffer_Underread__new_char_cpy_82_bad::action(char * data) char dest [ 100 * 2 ] ; memset ( dest , 'C' , 100 * 2 - 1 ); dest [ 100 * 2 - 1 ] = '\0'; strcpy ( dest , data ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 