static void goodG2B() char * data ; char * * dataPtr1 = & data ; char * * dataPtr2 = & data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); char * data = * dataPtr1 ; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; char * data = * dataPtr2 ; char dest [ 50 ] = "" ; strcpy ( dest , data ); 