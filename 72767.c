static int handle_onhook_message(struct skinny_req *req, struct skinnysession *s) struct skinny_device * d = s -> device ; struct skinny_line * l ; struct skinny_subchannel * sub ; int instance ; int reference ; instance = letohl ( req -> data . onhook . instance ); reference = letohl ( req -> data . onhook . reference ); if ( instance && reference )  sub = find_subchannel_by_instance_reference ( d , instance , reference ); if ( ! sub )  l = sub -> line; l = d -> activeline; sub = l -> activesub; if ( ! sub )  if ( d -> hookstate == SKINNY_ONHOOK )  if ( l -> transfer && sub -> xferor && sub -> owner -> _state >= AST_STATE_RING )  dumpsub ( sub , 0 ); static void dumpsub(struct skinny_subchannel *sub, int forcehangup) struct skinny_line * l = sub -> line ; if ( ! forcehangup && sub -> substate == SUBSTATE_HOLD )  if ( sub == l -> activesub )  if ( sub -> related )  setsubstate ( sub , SUBSTATE_ONHOOK ); static void setsubstate(struct skinny_subchannel *sub, int state) struct skinny_line * l = sub -> line ; struct skinny_subline * subline = sub -> subline ; struct skinny_device * d = l -> device ; struct ast_channel * c = sub -> owner ; int actualstate = state ; if ( sub -> substate == SUBSTATE_ONHOOK )  if ( state != SUBSTATE_RINGIN && sub -> aa_sched )  sub -> aa_sched = 0; sub -> aa_beep = 0; sub -> aa_mute = 0; if ( ( state == SUBSTATE_RINGIN ) && ( ( d -> hookstate == SKINNY_OFFHOOK ) || ( AST_LIST_NEXT ( AST_LIST_FIRST ( & l -> sub ) , list ) ) ) )  actualstate = SUBSTATE_CALLWAIT; if ( ( state == SUBSTATE_CONNECTED ) && ( ! subline ) && ( AST_LIST_FIRST ( & l -> sublines ) ) )  const char * slastation ; struct skinny_subline * tmpsubline ; slastation = pbx_builtin_getvar_helper ( c , "SLASTATION" ); if ( slastation )  subline = tmpsubline; if ( subline )  subline -> sub = sub; sub -> subline = subline; subline -> callid = sub -> callid; if ( subline )  switch ( actualstate )  if ( sub -> substate != SUBSTATE_CONNECTED )  sub -> substate = SUBSTATE_HOLD; if ( skinnydebug )  ast_verb ( 3 , "Sub %d - change state from %s to %s\n" , sub -> callid , substate2str ( sub -> substate ) , substate2str ( actualstate ) ); static char *substate2str(int ind) char * tmp ; switch ( ind )  if ( ! ( tmp = ast_threadstorage_get ( & substate2str_threadbuf , SUBSTATE2STR_BUFSIZE ) ) )  snprintf ( tmp , SUBSTATE2STR_BUFSIZE , "UNKNOWN-%d" , ind ); return tmp ; 