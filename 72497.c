static void goodG2B() int count ; int countArray [ 5 ] ; count = - 1; count = 20; countArray [ 2 ] = count; CWE400_Resource_Exhaustion__fscanf_fwrite_66b_goodG2BSink ( countArray ); void CWE400_Resource_Exhaustion__fscanf_fwrite_66b_goodG2BSink(int countArray[]) int count = countArray [ 2 ] ; const char * filename = "output_bad.txt" ; pFile = fopen ( filename , "w+" ); for (i = 0; i < (size_t)count; i++) if ( strlen ( SENTENCE ) != fwrite ( SENTENCE , sizeof ( char ) , strlen ( SENTENCE ) , pFile ) )  