static void goodG2B() int count ; CWE400_Resource_Exhaustion__connect_socket_fwrite_34_unionType myUnion ; count = - 1; count = 20; myUnion . unionFirst = count; int count = myUnion . unionSecond ; const char * filename = "output_bad.txt" ; pFile = fopen ( filename , "w+" ); for (i = 0; i < (size_t)count; i++) if ( strlen ( SENTENCE ) != fwrite ( SENTENCE , sizeof ( char ) , strlen ( SENTENCE ) , pFile ) )  