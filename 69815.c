static void goodG2B() wchar_t * data ; structType myStruct ; data = NULL; data = new wchar_t [ 100 ]; wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' myStruct . structFirst = data; goodG2BSink ( myStruct ); void goodG2BSink(structType myStruct) wchar_t * data = myStruct . structFirst ; wchar_t dest [ 100 ] ; wmemset ( dest , L 'C' , 100 - 1 dest [ 100 - 1 ] = L '\0' memmove ( dest , data , wcslen ( dest ) * sizeof ( wchar_t ) ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 