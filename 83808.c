static void PgstatCollectorMain(int argc,char *argv[]) int len ; PgStat_Msg msg ; int wr ; if ( need_exit )  while ( ! need_exit )  len = ( recv ( pgStatSock , ( ( char * ) ( & msg ) ) , sizeof ( PgStat_Msg ) , 0 ) ); if ( len < 0 )  if ( * __errno_location ( ) == 11 || * __errno_location ( ) == 11 || * __errno_location ( ) == 4 )  if ( len < sizeof ( PgStat_MsgHdr ) )  if ( msg . msg_hdr . m_size != len )  switch ( msg . msg_hdr . m_type )  pgstat_recv_resetcounter ( ( ( PgStat_MsgResetcounter * ) ( & msg ) ) , len ); wr = WaitLatchOrSocket ( ( & pgStatLatch ) , 1 << 0 | 1 << 4 | 1 << 1 , pgStatSock , - 1L ); if ( wr & 1 << 4 )  static void pgstat_recv_resetcounter(PgStat_MsgResetcounter *msg,int len) PgStat_StatDBEntry * dbentry ; dbentry = pgstat_get_db_entry ( msg -> m_databaseid , ( ( bool ) 0 ) ); static PgStat_StatDBEntry *pgstat_get_db_entry(Oid databaseid,bool create) bool found ; if ( ! create && ! found )  if ( ! found )  memset ( ( & hash_ctl ) , 0 , sizeof ( hash_ctl ) ); 