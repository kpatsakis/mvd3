static void good1() int k ; for(k = 0; k < 1; k++) double * * pointer = ( double * * ) malloc ( sizeof ( double * ) ) ; * pointer = data; double * data = * pointer ; printDoubleLine ( * data ); void printDoubleLine(double doubleNumber) printf ( "%g\n" , doubleNumber ); free ( pointer ); 