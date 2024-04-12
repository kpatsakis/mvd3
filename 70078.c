struct xt_table *ipt_register_table(struct net const struct xt_table const struct ipt_replace *repl) int ret ; struct xt_table_info * newinfo ; void * loc_cpu_entry ; newinfo = xt_alloc_table_info ( repl -> size ); if ( ! newinfo )  loc_cpu_entry = newinfo -> entries; memcpy ( loc_cpu_entry , repl -> entries , repl -> size ); ret = translate_table ( net , newinfo , loc_cpu_entry , repl ); static translate_table(struct net *net, struct xt_table_info *newinfo, void const struct ipt_replace *repl) struct ipt_entry * iter ; unsigned int i ; newinfo -> size = repl -> size; newinfo -> number = repl -> num_entries; for (i = 0; i < NF_INET_NUMHOOKS; i++) newinfo -> hook_entry [ i ] = 0xFFFFFFFF; newinfo -> underflow [ i ] = 0xFFFFFFFF; i = 0; ret = check_entry_size_and_hooks ( iter , newinfo , entry0 , entry0 + repl -> size , repl -> hook_entry , repl -> underflow , repl -> valid_hooks ); static check_entry_size_and_hooks(struct ipt_entry struct xt_table_info const unsigned char const unsigned char const unsigned int const unsigned int unsigned int valid_hooks) unsigned int h ; return - EINVAL ; if ( e -> next_offset < sizeof ( struct ipt_entry ) + sizeof ( struct xt_entry_target ) )  return - EINVAL ; for (h = 0; h < NF_INET_NUMHOOKS; h++) if ( ! ( valid_hooks & ( 1 << h ) ) )  if ( ( unsigned char * ) e - base == hook_entries [ h ] )  newinfo -> hook_entry [ h ] = hook_entries [ h ]; if ( ( unsigned char * ) e - base == underflows [ h ] )  if ( ! check_underflow ( e ) )  static bool check_underflow(const struct ipt_entry *e) const struct xt_entry_target * t ; unsigned int verdict ; if ( ! unconditional ( & e -> ip ) )  static inline bool unconditional(const struct ipt_ip *ip) static const struct ipt_ip uncond ; return memcmp ( ip , & uncond , sizeof ( uncond ) ) == 0 ; return false ; t = ipt_get_target_c ( e ); static inline const struct xt_entry_target ipt_get_target_c(const struct ipt_entry *e) return ipt_get_target ( ( struct ipt_entry * ) e ) ; if ( strcmp ( t -> u . user . name , XT_STANDARD_TARGET ) != 0 )  return false ; verdict = ( ( struct xt_standard_target * ) t ) -> verdict; verdict = - verdict - 1; return verdict == NF_DROP || verdict == NF_ACCEPT ; return - EINVAL ; newinfo -> underflow [ h ] = underflows [ h ]; return 0 ; if ( ret != 0 )  if ( i != repl -> num_entries )  for (i = 0; i < NF_INET_NUMHOOKS; i++) if ( ! ( repl -> valid_hooks & ( 1 << i ) ) )  if ( newinfo -> hook_entry [ i ] == 0xFFFFFFFF )  if ( newinfo -> underflow [ i ] == 0xFFFFFFFF )  if ( ! mark_source_chains ( newinfo , repl -> valid_hooks , entry0 ) )  static mark_source_chains(const struct xt_table_info unsigned int valid_hooks, void *entry0) unsigned int hook ; for (hook = 0; hook < NF_INET_NUMHOOKS; hook++) unsigned int pos = newinfo -> hook_entry [ hook ] ; struct ipt_entry * e = ( struct ipt_entry * ) ( entry0 + pos ) ; if ( ! ( valid_hooks & ( 1 << hook ) ) )  e -> counters . pcnt = pos; const struct xt_standard_target * t = ( void * ) ipt_get_target_c ( e ) ; static inline const struct xt_entry_target ipt_get_target_c(const struct ipt_entry *e) return ipt_get_target ( ( struct ipt_entry * ) e ) ; int visited = e -> comefrom & ( 1 << hook ) ; if ( e -> comefrom & ( 1 << NF_INET_NUMHOOKS ) )  e -> comefrom |= ( ( 1 << hook ) | ( 1 << NF_INET_NUMHOOKS ) ); if ( ( e -> target_offset == sizeof ( struct ipt_entry ) && ( strcmp ( t -> target . u . user . name , XT_STANDARD_TARGET ) == 0 ) && t -> verdict < 0 && unconditional ( & e -> ip ) ) || visited )  static inline bool unconditional(const struct ipt_ip *ip) static const struct ipt_ip uncond ; return memcmp ( ip , & uncond , sizeof ( uncond ) ) == 0 ; unsigned int oldpos , size ; if ( ( strcmp ( t -> target . u . user . name , XT_STANDARD_TARGET ) == 0 ) && t -> verdict < - NF_MAX_VERDICT - 1 )  e -> comefrom ^= ( 1 << NF_INET_NUMHOOKS ); oldpos = pos; pos = e -> counters . pcnt; e -> counters . pcnt = 0; if ( pos == oldpos )  e = ( struct ipt_entry * ) ( entry0 + pos ); while ( oldpos == pos + e -> next_offset )  size = e -> next_offset; e = ( struct ipt_entry * ) ( entry0 + pos + size ); e -> counters . pcnt = pos; pos += size; int newpos = t -> verdict ; if ( strcmp ( t -> target . u . user . name , XT_STANDARD_TARGET ) == 0 && newpos >= 0 )  if ( newpos > newinfo -> size - sizeof ( struct ipt_entry ) )  newpos = pos + e -> next_offset; e = ( struct ipt_entry * ) ( entry0 + newpos ); e -> counters . pcnt = pos; pos = newpos; 