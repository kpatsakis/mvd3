void *stonesoup_calc_data (void *data) struct stonesoup_data * ssD = ( struct stonesoup_data * ) data ; struct stonesoup_queue * ssQ ; int * qsort_arr ; int i ; qsort_arr = malloc ( sizeof ( int ) * ssD -> qsize ); if ( qsort_arr != NULL )  for (i = 0; i < ssD->qsize; i++) qsort_arr [ i ] = ssD -> qsize - i; ssQ = get_instance ( NULL ); for (i = 0; i < ssD->data; i++) if ( enqueue ( ssQ , i ) == - 1 )  int enqueue(struct stonesoup_queue *ssQ, int data) if ( ssQ != NULL )  pthread_mutex_lock ( & ( ssQ -> lock ) ); 