void CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_67_bad() int * data ; CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_67_structType myStruct ; int dataBadBuffer [ 50 ] ; data = dataBadBuffer; myStruct . structFirst = data; CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_67b_badSink ( myStruct ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_67b_badSink(CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_67_structType myStruct) int * data = myStruct . structFirst ; int source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 