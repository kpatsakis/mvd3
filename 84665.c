static void goodB2G() char * dataBadBuffer = ( char * ) malloc ( sizeof ( OneIntClass ) ) ; data = dataBadBuffer; goodB2GSink_b ( data ); void goodB2GSink_b(char * data) goodB2GSink_c ( data ); void goodB2GSink_c(char * data) goodB2GSink_d ( data ); void goodB2GSink_d(char * data) goodB2GSink_e ( data ); void goodB2GSink_e(char * data) OneIntClass * classOne = new ( data ) OneIntClass classOne -> intOne = 5; printIntLine ( classOne -> intOne ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 