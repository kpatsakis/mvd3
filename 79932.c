void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memcpy_13_bad() char * data ; data = NULL; if ( GLOBAL_CONST_FIVE == 5 )  data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; memcpy ( data , source , 100 * sizeof ( char ) ); data [ 100 - 1 ] = '\0'; free ( data ); 