void bad() wchar_t * data ; data = new wchar_t [ 100 ]; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' wchar_t dest [ 50 ] = L "" wcsncat ( dest , data , wcslen ( data ) ); 