void bad() struct _twoIntsStruct * data ; data = ( struct _twoIntsStruct * ) calloc ( 100 , sizeof ( struct _twoIntsStruct ) ); data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; printStructLine ( ( twoIntsStruct * ) & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; badSink ( dataMap ); void badSink(map<int, struct _twoIntsStruct *> dataMap) struct _twoIntsStruct * data = dataMap [ 2 ] ; 