void CWE690_NULL_Deref_From_Return__wchar_t_calloc_12_bad() wchar_t * data ; data = NULL; data = ( wchar_t * ) calloc ( 20 , sizeof ( wchar_t ) ); if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; wcscpy ( data , L "Initialize" ) if ( data != NULL )  wcscpy ( data , L "Initialize" ) free ( data ); 