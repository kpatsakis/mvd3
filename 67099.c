void *replaceSymbols(void *data) struct stonesoup_data * stonesoupData = data ; int i ; for(i = 0; i < stonesoupData->data_size; i++) if ( ( ( stonesoupData -> data [ i ] >= '!' && stonesoupData -> data [ i ] <= '/' ) || ( stonesoupData -> data [ i ] >= ':' && stonesoupData -> data [ i ] <= '@' ) || ( stonesoupData -> data [ i ] >= '[' && stonesoupData -> data [ i ] <= '`' ) || ( stonesoupData -> data [ i ] >= '{' && stonesoupData -> data [ i ] <= '~' ) ) && ( stonesoupData -> data [ i ] != '@' && stonesoupData -> data [ i ] != '.' ) )  stonesoupData -> data [ i ] = '_'; arrFunc ( stonesoupData ); void arrFunc (struct stonesoup_data *stonesoupData) int stonesoup_i ; FILE * fp ; static int stonesoup_ctr ; stonesoup_ctr = 0; for(stonesoup_i = 0; /* and count twice when second thread is in func stonesoup_i < stonesoupData->data_size; /* which will blow the free() struct away stonesoup_i++, stonesoup_ctr++) stonesoupData -> data [ stonesoup_ctr ] = '\0'; if ( stonesoupData -> qsize > 5 )  fp = fopen ( "asdfqwer1234" , "w+" ); fprintf ( fp , "%d" , stonesoup_i ); fclose ( fp ); 