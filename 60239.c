void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_31_bad() double * data ; data = ( double * ) malloc ( sizeof ( data ) ); * data = 1.7E300; double * dataCopy = data ; double * data = dataCopy ; printDoubleLine ( * data ); void printDoubleLine(double doubleNumber) printf ( "%g\n" , doubleNumber ); free ( data ); 