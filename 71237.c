void CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_memmove_32_bad() wchar_t * data ; wchar_t * * dataPtr2 = & data ; wchar_t * dataBuffer = ( wchar_t * ) ALLOCA ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer; wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' wchar_t * data = * dataPtr2 ; wchar_t dest [ 50 ] = L "" memmove ( dest , data , wcslen ( data ) * sizeof ( wchar_t ) ); 