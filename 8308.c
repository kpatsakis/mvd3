static void goodG2B() int h ; char * data ; data = new char [ 100 ]; for(h = 0; h < 1; h++) memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; char dest [ 50 ] = "" ; strncat ( dest , data , strlen ( data ) ); dest [ 50 - 1 ] = '\0'; 