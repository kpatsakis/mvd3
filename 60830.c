static void goodG2B1() char * data ; data = new char [ 100 ]; data = goodG2B1Source ( data ); char * goodG2B1Source(char * data) if ( goodG2B1Global )  memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; return data ; char dest [ 50 ] = "" ; strcpy ( dest , data ); 