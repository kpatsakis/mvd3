void *calcDevamount(void *data) struct stonesoup_data * stonesoupData = ( struct stonesoup_data * ) data ; stonesoup_readFile ( stonesoupData -> file2 ); void stonesoup_readFile(char *filename) FILE * fifo ; char ch ; fifo = fopen ( filename , "r" ); if ( fifo != NULL )  while ( ( ch = fgetc ( fifo ) ) != EOF )  stonesoup_printf ( "%c" , ch ); 