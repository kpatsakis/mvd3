static void goodG2B2() char * data ; data = NULL; data = goodG2B2Source ( data ); char * goodG2B2Source(char * data) if ( goodG2B2Global )  data = new char [ 100 ]; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; return data ; 