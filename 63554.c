static void goodG2B() char * data ; data = NULL; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_84_goodG2B * goodG2BObject = new CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_84_goodG2B ( data ) ; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_84_goodG2B::CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_84_goodG2B(char * dataCopy) data = dataCopy; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; delete goodG2BObject CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_84_goodG2B::~CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_84_goodG2B() char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strncpy ( data , source , 100 - 1 ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 