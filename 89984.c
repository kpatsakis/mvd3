static void goodG2B2() wchar_t * data ; wchar_t dataBuffer [ 100 ] ; data = dataBuffer; data = goodG2B2Source ( data ); static wchar_t * goodG2B2Source(wchar_t * data) if ( goodG2B2Static )  wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' return data ; wchar_t dest [ 50 ] = L "" memmove ( dest , data , wcslen ( data ) * sizeof ( wchar_t ) ); 