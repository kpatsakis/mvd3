void CWE404_Improper_Resource_Shutdown__w32CreateFile_fclose_67_bad() HANDLE data ; CWE404_Improper_Resource_Shutdown__w32CreateFile_fclose_67_structType myStruct ; data = INVALID_HANDLE_VALUE; data = CreateFile ( "BadSource_w32CreateFile.txt" , ( GENERIC_WRITE | GENERIC_READ ) , 0 , NULL , OPEN_ALWAYS , FILE_ATTRIBUTE_NORMAL , NULL ); myStruct . structFirst = data; CWE404_Improper_Resource_Shutdown__w32CreateFile_fclose_67b_badSink ( myStruct ); void CWE404_Improper_Resource_Shutdown__w32CreateFile_fclose_67b_badSink(CWE404_Improper_Resource_Shutdown__w32CreateFile_fclose_67_structType myStruct) HANDLE data = myStruct . structFirst ; if ( data != INVALID_HANDLE_VALUE )  fclose ( ( FILE * ) data ); 