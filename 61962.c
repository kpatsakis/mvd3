static void goodG2B2() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; if ( 5 == 5 )  wcscpy ( data , L "fixedstringtest" ) if ( 5 == 5 )  goodG2B2VaSinkB ( data , data ); static void goodG2B2VaSinkB(wchar_t * data, ...) wchar_t dest [ 100 ] = L "" va_list args ; _vsnwprintf ( dest , 100 - 1 , data , args ); 