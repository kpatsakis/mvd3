static void PgstatCollectorMain(int argc,char *argv[]) int len ; int wr ; last_statrequest = GetCurrentTimestamp ( ); last_statwrite = last_statrequest - 1; if ( need_exit )  while ( ! need_exit )  if ( last_statwrite < last_statrequest )  pgstat_write_statsfile ( ( ( bool ) 0 ) ); len = ( recv ( pgStatSock , ( ( char * ) ( & msg ) ) , sizeof ( PgStat_Msg ) , 0 ) ); if ( len < 0 )  if ( * __errno_location ( ) == 11 || * __errno_location ( ) == 11 || * __errno_location ( ) == 4 )  wr = WaitLatchOrSocket ( ( & pgStatLatch ) , 1 << 0 | 1 << 4 | 1 << 1 , pgStatSock , - 1L ); if ( wr & 1 << 4 )  static void pgstat_write_statsfile(bool permanent) PgStat_StatDBEntry * dbentry ; PgStat_StatFuncEntry * funcentry ; FILE * fpout ; const char * tmpfile = ( permanent ? "global/pgstat.tmp" : pgstat_stat_tmpname ) ; int rc ; fpout = AllocateFile ( tmpfile , "w" ); if ( fpout == ( ( void * ) 0 ) )  while ( ( dbentry = ( ( PgStat_StatDBEntry * ) ( hash_seq_search ( & hstat ) ) ) ) != ( ( void * ) 0 ) )  while ( ( funcentry = ( ( PgStat_StatFuncEntry * ) ( hash_seq_search ( & fstat ) ) ) ) != ( ( void * ) 0 ) )  rc = ( fwrite ( funcentry , sizeof ( PgStat_StatFuncEntry ) , 1 , fpout ) ); 