static void goodG2B() void * data ; data = NULL; char * dataGoodBuffer = ( char * ) malloc ( 50 * sizeof ( char ) ) ; memset ( dataGoodBuffer , 'A' , 50 - 1 ); dataGoodBuffer [ 50 - 1 ] = '\0'; data = ( void * ) dataGoodBuffer; CWE122_Heap_Based_Buffer_Overflow__CWE135_82_base * baseObject = new CWE122_Heap_Based_Buffer_Overflow__CWE135_82_goodG2B baseObject -> action ( data ); void CWE122_Heap_Based_Buffer_Overflow__CWE135_82_goodG2B::action(void * data) size_t dataLen = strlen ( ( char * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , 1 ) ; memcpy ( dest , data , ( dataLen + 1 ) ); free ( dest ); 