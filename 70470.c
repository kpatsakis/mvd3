void CWE400_Resource_Exhaustion__fscanf_fwrite_67_bad() int count ; CWE400_Resource_Exhaustion__fscanf_fwrite_67_structType myStruct ; count = - 1; myStruct . structFirst = count; CWE400_Resource_Exhaustion__fscanf_fwrite_67b_badSink ( myStruct ); void CWE400_Resource_Exhaustion__fscanf_fwrite_67b_badSink(CWE400_Resource_Exhaustion__fscanf_fwrite_67_structType myStruct) int count = myStruct . structFirst ; const char * filename = "output_bad.txt" ; pFile = fopen ( filename , "w+" ); for (i = 0; i < (size_t)count; i++) if ( strlen ( SENTENCE ) != fwrite ( SENTENCE , sizeof ( char ) , strlen ( SENTENCE ) , pFile ) )  