static void goodB2G() twoIntsStruct * data ; map < int , twoIntsStruct * > dataMap ; data = NULL; data = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; goodB2GSink ( dataMap ); void goodB2GSink(map<int, twoIntsStruct *> dataMap) twoIntsStruct * data = dataMap [ 2 ] ; free ( data ); 