struct xt_table *arpt_register_table(struct net const struct xt_table const struct arpt_replace *repl) int ret ; struct xt_table_info * newinfo ; void * loc_cpu_entry ; newinfo = xt_alloc_table_info ( repl -> size ); if ( ! newinfo )  loc_cpu_entry = newinfo -> entries; memcpy ( loc_cpu_entry , repl -> entries , repl -> size ); ret = translate_table ( newinfo , loc_cpu_entry , repl ); static int translate_table(struct xt_table_info *newinfo, void const struct arpt_replace *repl) struct arpt_entry * iter ; unsigned int i ; newinfo -> size = repl -> size; newinfo -> number = repl -> num_entries; for (i = 0; i < NF_ARP_NUMHOOKS; i++) newinfo -> hook_entry [ i ] = 0xFFFFFFFF; newinfo -> underflow [ i ] = 0xFFFFFFFF; ret = check_entry_size_and_hooks ( iter , newinfo , entry0 , entry0 + repl -> size , repl -> hook_entry , repl -> underflow , repl -> valid_hooks ); static inline int check_entry_size_and_hooks(struct arpt_entry struct xt_table_info const unsigned char const unsigned char const unsigned int const unsigned int unsigned int valid_hooks) unsigned int h ; if ( e -> next_offset < sizeof ( struct arpt_entry ) + sizeof ( struct xt_entry_target ) )  for (h = 0; h < NF_ARP_NUMHOOKS; h++) if ( ! ( valid_hooks & ( 1 << h ) ) )  if ( ( unsigned char * ) e - base == hook_entries [ h ] )  newinfo -> hook_entry [ h ] = hook_entries [ h ]; if ( ( unsigned char * ) e - base == underflows [ h ] )  if ( ! check_underflow ( e ) )  newinfo -> underflow [ h ] = underflows [ h ]; static bool check_underflow(const struct arpt_entry *e) const struct xt_entry_target * t ; if ( ! unconditional ( & e -> arp ) )  t = arpt_get_target_c ( e ); if ( strcmp ( t -> u . user . name , XT_STANDARD_TARGET ) != 0 )  