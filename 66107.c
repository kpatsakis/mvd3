void bad() wchar_t * data ; data = new wchar_t [ 100 ]; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' size_t i , dataLen ; dataLen = wcslen ( data ); for (i = 0; i < dataLen; i++) 