void CWE122_Heap_Based_Buffer_Overflow__c_src_char_cat_21_bad() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data = badSource ( data ); static char * badSource(char * data) if ( badStatic )  memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; return data ; char dest [ 50 ] = "" ; strcat ( dest , data ); 