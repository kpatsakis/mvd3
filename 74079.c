void CWE400_Resource_Exhaustion__rand_fwrite_31_bad() int count ; count = - 1; count = RAND32 ( ); int countCopy = count ; int count = countCopy ; const char * filename = "output_bad.txt" ; pFile = fopen ( filename , "w+" ); for (i = 0; i < (size_t)count; i++) if ( strlen ( SENTENCE ) != fwrite ( SENTENCE , sizeof ( char ) , strlen ( SENTENCE ) , pFile ) )  