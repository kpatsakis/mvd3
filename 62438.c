static void goodB2G() long * data ; data = NULL; data = NULL; data = ( long * ) realloc ( data , 100 * sizeof ( long ) ); myStruct . structFirst = data; goodB2GSink ( myStruct ); void goodB2GSink(structType myStruct) long * data = myStruct . structFirst ; free ( data ); 