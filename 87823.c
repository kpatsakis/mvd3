static void goodG2B() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; while ( 1 )  wcscpy ( data , L "C:\\Windows\\System32\\winsrv.dll" ) HMODULE hModule ; hModule = LoadLibraryW ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 