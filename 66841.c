void bad() char * data ; char dataBadBuffer [ 50 ] ; memset ( dataBadBuffer , 'A' , 50 - 1 ); dataBadBuffer [ 50 - 1 ] = '\0'; data = dataBadBuffer; CWE126_Buffer_Overread__char_declare_loop_82_base * baseObject = new CWE126_Buffer_Overread__char_declare_loop_82_bad baseObject -> action ( data ); void CWE126_Buffer_Overread__char_declare_loop_82_bad::action(char * data) char dest [ 100 ] ; memset ( dest , 'C' , 100 - 1 ); dest [ 100 - 1 ] = '\0'; destLen = strlen ( dest ); for (i = 0; i < destLen; i++) dest [ i ] = data [ i ]; dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 