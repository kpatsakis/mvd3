static void goodB2G() size_t data ; size_t dataArray [ 5 ] ; data = 0; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); dataArray [ 2 ] = data; CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fgets_66b_goodB2GSink ( dataArray ); void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fgets_66b_goodB2GSink(size_t dataArray[]) size_t data = dataArray [ 2 ] ; if ( data > wcslen ( HELLO_STRING ) && data < 100 )  