void bad() TwoIntsClass * data ; structType myStruct ; data = NULL; data = new TwoIntsClass [ 50 ]; myStruct . structFirst = data; badSink ( myStruct ); void badSink(structType myStruct) TwoIntsClass * data = myStruct . structFirst ; TwoIntsClass source [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) source [ i ] . intOne = 0; source [ i ] . intTwo = 0; memcpy ( data , source , 100 * sizeof ( TwoIntsClass ) ); printIntLine ( data [ 0 ] . intOne ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); delete [ ] data 