static void goodG2B() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data = CWE122_Heap_Based_Buffer_Overflow__c_src_char_cat_61b_goodG2BSource ( data ); char * CWE122_Heap_Based_Buffer_Overflow__c_src_char_cat_61b_goodG2BSource(char * data) memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; return data ; char dest [ 50 ] = "" ; strcat ( dest , data ); 