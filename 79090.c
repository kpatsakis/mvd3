void bad() vector < size_t > dataVector ; badSink ( dataVector ); void badSink(vector<size_t> dataVector) size_t data = dataVector [ 2 ] ; char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); free ( myString ); 