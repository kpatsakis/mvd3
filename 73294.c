void CWE366_Race_Condition_Within_Thread__global_int_04_bad() if ( STATIC_CONST_TRUE )  if ( ! stdThreadCreate ( helperBad , NULL , & threadB ) )  int stdThreadCreate(stdThreadRoutine start, void *args, stdThread *thread) uintptr_t handle ; stdThread my_thread ; my_thread = ( stdThread ) malloc ( sizeof ( * my_thread ) ); if ( my_thread == NULL )  my_thread -> start = start; my_thread -> args = args; handle = _beginthreadex ( NULL , 0 , internal_start , my_thread , 0 , NULL ); if ( handle == 0 )  free ( my_thread ); 