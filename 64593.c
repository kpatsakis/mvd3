void CWE590_Free_Memory_Not_on_Heap__free_wchar_t_alloca_31_bad() wchar_t * data ; data = NULL; wchar_t * dataBuffer = ( wchar_t * ) ALLOCA ( 100 * sizeof ( wchar_t ) ) ; wmemset ( dataBuffer , L 'A' , 100 - 1 dataBuffer [ 100 - 1 ] = L '\0' data = dataBuffer; wchar_t * dataCopy = data ; wchar_t * data = dataCopy ; free ( data ); 