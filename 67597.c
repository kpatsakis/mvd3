static void pgstat_read_current_status() volatile PgBackendStatus * beentry ; PgBackendStatus * localtable ; PgBackendStatus * localentry ; char * localappname ; char * localactivity ; int i ; if ( localBackendStatusTable )  localtable = ( ( PgBackendStatus * ) ( MemoryContextAlloc ( pgStatLocalContext , sizeof ( PgBackendStatus ) * MaxBackends ) ) ); localappname = ( ( char * ) ( MemoryContextAlloc ( pgStatLocalContext , ( 64 * MaxBackends ) ) ) ); localactivity = ( ( char * ) ( MemoryContextAlloc ( pgStatLocalContext , ( pgstat_track_activity_query_size * MaxBackends ) ) ) ); beentry = BackendStatusArray; localentry = localtable; for (i = 1; i <= MaxBackends; i++) int save_changecount = beentry -> st_changecount ; localentry -> st_procpid = beentry -> st_procpid; if ( localentry -> st_procpid > 0 )  memcpy ( localentry , ( ( char * ) beentry ) , sizeof ( PgBackendStatus ) ); strcpy ( localappname , ( ( char * ) ( beentry -> st_appname ) ) ); localentry -> st_appname = localappname; strcpy ( localactivity , ( ( char * ) ( beentry -> st_activity ) ) ); localentry -> st_activity = localactivity; if ( save_changecount == beentry -> st_changecount && ( save_changecount & 1 ) == 0 )  beentry ++; if ( localentry -> st_procpid > 0 )  localentry ++; localappname += 64; localactivity += pgstat_track_activity_query_size; 