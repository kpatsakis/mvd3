static void goodB2G() FILE * data ; map < int , FILE * > dataMap ; data = NULL; data = fopen ( "file.txt" , "w+" ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; goodB2GSink ( dataMap ); void goodB2GSink(map<int, FILE *> dataMap) FILE * data = dataMap [ 2 ] ; if ( data != NULL )  fclose ( data ); 