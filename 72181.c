void CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_declare_cat_12_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] ; data = dataBuffer; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' wchar_t dest [ 50 ] = L "" wcscat ( dest , data ); 