static void goodG2B() wchar_t * data ; wchar_t * & dataRef = data ; data = new wchar_t [ 100 ]; wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' wchar_t * data = dataRef ; size_t i , dataLen ; dataLen = wcslen ( data ); for (i = 0; i < dataLen; i++) 