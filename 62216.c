static void goodB2G2() HANDLE data ; data = CreateFile ( "BadSource_w32CreateFile.txt" , ( GENERIC_WRITE | GENERIC_READ ) , 0 , NULL , OPEN_ALWAYS , FILE_ATTRIBUTE_NORMAL , NULL ); goodB2G2Sink ( data ); static void goodB2G2Sink(HANDLE data) if ( data != INVALID_HANDLE_VALUE )  CloseHandle ( data ); data = CreateFile ( "GoodSink_w32CreateFile.txt" , ( GENERIC_WRITE | GENERIC_READ ) , 0 , NULL , OPEN_ALWAYS , FILE_ATTRIBUTE_NORMAL , NULL ); if ( data != INVALID_HANDLE_VALUE )  CloseHandle ( data ); 