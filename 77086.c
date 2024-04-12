static do_replace(struct net *net, const void __user *user, unsigned int len) int ret ; struct ipt_replace tmp ; struct xt_table_info * newinfo ; void * loc_cpu_entry ; if ( copy_from_user ( & tmp , user , sizeof ( tmp ) ) != 0 )  if ( tmp . num_counters >= INT_MAX / sizeof ( struct xt_counters ) )  if ( tmp . num_counters == 0 )  tmp . name [ sizeof ( tmp . name ) - 1 ] = 0; newinfo = xt_alloc_table_info ( tmp . size ); if ( ! newinfo )  loc_cpu_entry = newinfo -> entries; if ( copy_from_user ( loc_cpu_entry , user + sizeof ( tmp ) , tmp . size ) != 0 )  ret = translate_table ( net , newinfo , loc_cpu_entry , & tmp ); static translate_table(struct net *net, struct xt_table_info *newinfo, void const struct ipt_replace *repl) struct ipt_entry * iter ; unsigned int i ; newinfo -> size = repl -> size; newinfo -> number = repl -> num_entries; for (i = 0; i < NF_INET_NUMHOOKS; i++) newinfo -> hook_entry [ i ] = 0xFFFFFFFF; newinfo -> underflow [ i ] = 0xFFFFFFFF; ret = check_entry_size_and_hooks ( iter , newinfo , entry0 , entry0 + repl -> size , repl -> hook_entry , repl -> underflow , repl -> valid_hooks ); static check_entry_size_and_hooks(struct ipt_entry struct xt_table_info const unsigned char const unsigned char const unsigned int const unsigned int unsigned int valid_hooks) unsigned int h ; if ( e -> next_offset < sizeof ( struct ipt_entry ) + sizeof ( struct xt_entry_target ) )  for (h = 0; h < NF_INET_NUMHOOKS; h++) if ( ! ( valid_hooks & ( 1 << h ) ) )  if ( ( unsigned char * ) e - base == hook_entries [ h ] )  newinfo -> hook_entry [ h ] = hook_entries [ h ]; if ( ( unsigned char * ) e - base == underflows [ h ] )  if ( ! check_underflow ( e ) )  newinfo -> underflow [ h ] = underflows [ h ]; static bool check_underflow(const struct ipt_entry *e) const struct xt_entry_target * t ; if ( ! unconditional ( & e -> ip ) )  t = ipt_get_target_c ( e ); if ( strcmp ( t -> u . user . name , XT_STANDARD_TARGET ) != 0 )  