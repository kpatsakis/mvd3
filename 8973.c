static void goodB2G() FILE * data ; FILE * dataArray [ 5 ] ; data = NULL; data = fopen ( "BadSource_fopen.txt" , "w+" ); dataArray [ 2 ] = data; CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_66b_goodB2GSink ( dataArray ); void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_66b_goodB2GSink(FILE * dataArray[]) FILE * data = dataArray [ 2 ] ; if ( data != NULL )  fclose ( data ); 