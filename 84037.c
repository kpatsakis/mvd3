void CWE400_Resource_Exhaustion__rand_fwrite_54b_goodG2BSink(int count) CWE400_Resource_Exhaustion__rand_fwrite_54c_goodG2BSink ( count ); void CWE400_Resource_Exhaustion__rand_fwrite_54c_goodG2BSink(int count) CWE400_Resource_Exhaustion__rand_fwrite_54d_goodG2BSink ( count ); void CWE400_Resource_Exhaustion__rand_fwrite_54d_goodG2BSink(int count) CWE400_Resource_Exhaustion__rand_fwrite_54e_goodG2BSink ( count ); void CWE400_Resource_Exhaustion__rand_fwrite_54e_goodG2BSink(int count) const char * filename = "output_bad.txt" ; pFile = fopen ( filename , "w+" ); for (i = 0; i < (size_t)count; i++) if ( strlen ( SENTENCE ) != fwrite ( SENTENCE , sizeof ( char ) , strlen ( SENTENCE ) , pFile ) )  