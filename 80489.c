static void goodG2B() int * data ; data = NULL; CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_84_goodG2B * goodG2BObject = new CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_84_goodG2B ( data ) ; CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_84_goodG2B::CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_84_goodG2B(int * dataCopy) data = dataCopy; data = ( int * ) ALLOCA ( 10 * sizeof ( int ) ); delete goodG2BObject CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_84_goodG2B::~CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_84_goodG2B() int source [ 10 ] = { 0 } ; memcpy ( data , source , 10 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 