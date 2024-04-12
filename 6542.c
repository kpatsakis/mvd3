static int sctp_sendmsg(struct sock *sk, struct msghdr *msg, size_t msg_len) struct net * net = sock_net ( sk ) ; struct sctp_sock * sp ; struct sctp_endpoint * ep ; struct sctp_transport * transport , * chunk_tp ; union sctp_addr to ; struct sockaddr * msg_name = NULL ; struct sctp_sndrcvinfo default_sinfo ; struct sctp_sndrcvinfo * sinfo ; struct sctp_initmsg * sinit ; sctp_assoc_t associd = 0 ; sctp_cmsgs_t cmsgs = { NULL } ; sctp_scope_t scope ; __u16 sinfo_flags = 0 ; int err ; err = 0; sp = sctp_sk ( sk ); ep = sp -> ep; if ( sctp_style ( sk , TCP ) && sctp_sstate ( sk , LISTENING ) )  err = sctp_msghdr_parse ( msg , & cmsgs ); static int sctp_msghdr_parse(const struct msghdr *msg, sctp_cmsgs_t *cmsgs) struct cmsghdr * cmsg ; struct msghdr * my_msg = ( struct msghdr * ) msg ; if ( ! CMSG_OK ( my_msg , cmsg ) )  return - EINVAL ; switch ( cmsg -> cmsg_type )  if ( cmsg -> cmsg_len != CMSG_LEN ( sizeof ( struct sctp_initmsg ) ) )  return - EINVAL ; cmsgs -> init = CMSG_DATA ( cmsg ); if ( cmsg -> cmsg_len != CMSG_LEN ( sizeof ( struct sctp_sndrcvinfo ) ) )  return - EINVAL ; cmsgs -> srinfo = CMSG_DATA ( cmsg ); if ( cmsgs -> srinfo -> sinfo_flags & ~ ( SCTP_UNORDERED | SCTP_ADDR_OVER | SCTP_SACK_IMMEDIATELY | SCTP_PR_SCTP_MASK | SCTP_ABORT | SCTP_EOF ) )  return - EINVAL ; if ( cmsg -> cmsg_len != CMSG_LEN ( sizeof ( struct sctp_sndinfo ) ) )  return - EINVAL ; cmsgs -> sinfo = CMSG_DATA ( cmsg ); if ( cmsgs -> sinfo -> snd_flags & ~ ( SCTP_UNORDERED | SCTP_ADDR_OVER | SCTP_SACK_IMMEDIATELY | SCTP_PR_SCTP_MASK | SCTP_ABORT | SCTP_EOF ) )  return - EINVAL ; return - EINVAL ; return 0 ; if ( err )  if ( ! sctp_style ( sk , UDP_HIGH_BANDWIDTH ) && msg -> msg_name )  int msg_namelen = msg -> msg_namelen ; err = sctp_verify_addr ( sk , ( union sctp_addr * ) msg -> msg_name , msg_namelen ); static inline int sctp_verify_addr(struct sock *sk, union sctp_addr int len) struct sctp_af * af ; af = sctp_sockaddr_af ( sctp_sk ( sk ) , addr , len ); static struct sctp_af *sctp_sockaddr_af(struct sctp_sock union sctp_addr *addr, int len) struct sctp_af * af ; if ( len < sizeof ( struct sockaddr ) )  return NULL ; if ( addr -> sa . sa_family == AF_INET6 && ipv6_addr_v4mapped ( & addr -> v6 . sin6_addr ) )  if ( ! opt -> pf -> af_supported ( AF_INET , opt ) )  return NULL ; if ( ! opt -> pf -> af_supported ( addr -> sa . sa_family , opt ) )  return NULL ; af = sctp_get_af_specific ( addr -> sa . sa_family ); if ( len < af -> sockaddr_len )  return NULL ; return af ; if ( ! af )  return - EINVAL ; if ( ! af -> addr_valid ( addr , sctp_sk ( sk ) , NULL ) )  return - EINVAL ; if ( ! sctp_sk ( sk ) -> pf -> send_verify ( sctp_sk ( sk ) , ( addr ) ) )  return - EINVAL ; return 0 ; if ( err )  if ( msg_namelen > sizeof ( to ) )  msg_namelen = sizeof ( to ); memcpy ( & to , msg -> msg_name , msg_namelen ); msg_name = msg -> msg_name; sinit = cmsgs . init; if ( cmsgs . sinfo != NULL )  memset ( & default_sinfo , 0 , sizeof ( default_sinfo ) ); default_sinfo . sinfo_stream = cmsgs . sinfo -> snd_sid; default_sinfo . sinfo_flags = cmsgs . sinfo -> snd_flags; default_sinfo . sinfo_ppid = cmsgs . sinfo -> snd_ppid; default_sinfo . sinfo_context = cmsgs . sinfo -> snd_context; default_sinfo . sinfo_assoc_id = cmsgs . sinfo -> snd_assoc_id; sinfo = & default_sinfo; sinfo = cmsgs . srinfo; if ( sinfo )  sinfo_flags = sinfo -> sinfo_flags; associd = sinfo -> sinfo_assoc_id; if ( sctp_style ( sk , TCP ) && ( sinfo_flags & ( SCTP_EOF | SCTP_ABORT ) ) )  if ( ( ( sinfo_flags & SCTP_EOF ) && ( msg_len > 0 ) ) || ( ! ( sinfo_flags & ( SCTP_EOF | SCTP_ABORT ) ) && ( msg_len == 0 ) ) )  if ( ( sinfo_flags & SCTP_ADDR_OVER ) && ( ! msg -> msg_name ) )  transport = NULL; if ( msg_name )  asoc = sctp_endpoint_lookup_assoc ( ep , & to , & transport ); if ( ! asoc && ( ( sctp_style ( sk , TCP ) && ( sctp_sstate ( sk , ESTABLISHED ) || sctp_sstate ( sk , CLOSING ) ) ) || sctp_endpoint_is_peeled_off ( ep , & to ) ) )  asoc = sctp_id2assoc ( sk , associd ); struct sctp_association *sctp_id2assoc(struct sock *sk, sctp_assoc_t id) struct sctp_association * asoc = NULL ; if ( ! sctp_style ( sk , UDP ) )  if ( ! sctp_sstate ( sk , ESTABLISHED ) && ! sctp_sstate ( sk , CLOSING ) )  return NULL ; return asoc ; if ( ! id || ( id == ( sctp_assoc_t ) - 1 ) )  return NULL ; asoc = ( struct sctp_association * ) idr_find ( & sctp_assocs_id , ( int ) id ); if ( ! asoc || ( asoc -> base . sk != sk ) || asoc -> base . dead )  return NULL ; return asoc ; if ( ! asoc )  if ( asoc )  if ( sctp_state ( asoc , CLOSED ) && sctp_style ( sk , TCP ) )  if ( sinfo_flags & SCTP_EOF )  if ( sinfo_flags & SCTP_ABORT )  if ( ! asoc )  if ( sinfo_flags & ( SCTP_EOF | SCTP_ABORT ) )  if ( sinfo )  if ( ! sinit || ! sinit -> sinit_num_ostreams )  if ( sinfo -> sinfo_stream >= sp -> initmsg . sinit_num_ostreams )  if ( sinfo -> sinfo_stream >= sinit -> sinit_num_ostreams )  if ( ! ep -> base . bind_addr . port )  if ( sctp_autobind ( sk ) )  static int sctp_autobind(struct sock *sk) union sctp_addr autoaddr ; struct sctp_af * af ; af = sctp_sk ( sk ) -> pf -> af; return sctp_do_bind ( sk , & autoaddr , af -> sockaddr_len ) ; static int sctp_do_bind(struct sock *sk, union sctp_addr *addr, int len) struct net * net = sock_net ( sk ) ; struct sctp_sock * sp = sctp_sk ( sk ) ; struct sctp_endpoint * ep = sp -> ep ; struct sctp_bind_addr * bp = & ep -> base . bind_addr ; struct sctp_af * af ; unsigned short snum ; af = sctp_sockaddr_af ( sp , addr , len ); static struct sctp_af *sctp_sockaddr_af(struct sctp_sock union sctp_addr *addr, int len) struct sctp_af * af ; if ( len < sizeof ( struct sockaddr ) )  return NULL ; if ( addr -> sa . sa_family == AF_INET6 && ipv6_addr_v4mapped ( & addr -> v6 . sin6_addr ) )  if ( ! opt -> pf -> af_supported ( AF_INET , opt ) )  return NULL ; if ( ! opt -> pf -> af_supported ( addr -> sa . sa_family , opt ) )  return NULL ; af = sctp_get_af_specific ( addr -> sa . sa_family ); if ( len < af -> sockaddr_len )  return NULL ; return af ; if ( ! af )  return - EINVAL ; snum = ntohs ( addr -> v4 . sin_port ); if ( ! sp -> pf -> bind_verify ( sp , addr ) )  return - EADDRNOTAVAIL ; if ( bp -> port )  if ( ! snum )  snum = bp -> port; if ( snum != bp -> port )  return - EINVAL ; if ( snum && snum < PROT_SOCK && ! ns_capable ( net -> user_ns , CAP_NET_BIND_SERVICE ) )  return - EACCES ; if ( sctp_bind_addr_match ( bp , addr , sp ) )  return - EINVAL ; addr -> v4 . sin_port = htons ( snum ); if ( ret = sctp_get_port_local ( sk , addr ) )  static long sctp_get_port_local(struct sock *sk, union sctp_addr *addr) struct sctp_bind_hashbucket * head ; struct sctp_bind_bucket * pp ; unsigned short snum ; int ret ; snum = ntohs ( addr -> v4 . sin_port ); if ( snum == 0 )  int low , high , remaining , index ; unsigned int rover ; struct net * net = sock_net ( sk ) ; remaining = ( high - low ) + 1; rover = prandom_u32 ( ) % remaining + low; rover ++; if ( ( rover < low ) || ( rover > high ) )  rover = low; if ( inet_is_local_reserved_port ( net , rover ) )  index = sctp_phashfn ( sock_net ( sk ) , rover ); head = & sctp_port_hashtable [ index ]; if ( ( pp -> port == rover ) && net_eq ( sock_net ( sk ) , pp -> net ) )  while ( -- remaining > 0 )  ret = 1; if ( remaining <= 0 )  snum = rover; head = & sctp_port_hashtable [ sctp_phashfn ( sock_net ( sk ) , snum ) ]; if ( ( pp -> port == snum ) && net_eq ( pp -> net , sock_net ( sk ) ) )  pp = NULL; if ( ! hlist_empty ( & pp -> owner ) )  struct sock * sk2 ; if ( pp -> fastreuse && sk -> sk_reuse && sk -> sk_state != SCTP_SS_LISTENING )  struct sctp_endpoint * ep2 ; ep2 = sctp_sk ( sk2 ) -> ep; if ( sctp_bind_addr_conflict ( & ep2 -> base . bind_addr , addr , sctp_sk ( sk2 ) , sctp_sk ( sk ) ) )  ret = ( long ) sk2; ret = 1; if ( ! pp && ! ( pp = sctp_bucket_create ( head , sock_net ( sk ) , snum ) ) )  static struct sctp_bind_bucket struct sctp_bind_hashbucket *head, struct net *net, unsigned short snum) struct sctp_bind_bucket * pp ; pp = kmem_cache_alloc ( sctp_bucket_cachep , GFP_ATOMIC ); if ( pp )  pp -> port = snum; pp -> fastreuse = 0; pp -> net = net; return pp ; ret = 0; return ret ; return - EADDRINUSE ; if ( ! bp -> port )  bp -> port = inet_sk ( sk ) -> inet_num; ret = sctp_add_bind_addr ( bp , addr , af -> sockaddr_len , SCTP_ADDR_SRC , GFP_ATOMIC ); return ret ; if ( ep -> base . bind_addr . port < PROT_SOCK && ! ns_capable ( net -> user_ns , CAP_NET_BIND_SERVICE ) )  scope = sctp_scope ( & to ); new_asoc = sctp_association_new ( ep , sk , scope , GFP_KERNEL ); if ( ! new_asoc )  asoc = new_asoc; err = sctp_assoc_set_bind_addr_from_ep ( asoc , scope , GFP_KERNEL ); if ( err < 0 )  if ( sinit )  if ( sinit -> sinit_num_ostreams )  asoc -> c . sinit_num_ostreams = sinit -> sinit_num_ostreams; if ( sinit -> sinit_max_instreams )  asoc -> c . sinit_max_instreams = sinit -> sinit_max_instreams; if ( sinit -> sinit_max_attempts )  asoc -> max_init_attempts = sinit -> sinit_max_attempts; if ( sinit -> sinit_max_init_timeo )  asoc -> max_init_timeo = msecs_to_jiffies ( sinit -> sinit_max_init_timeo ); transport = sctp_assoc_add_peer ( asoc , & to , GFP_KERNEL , SCTP_UNKNOWN ); if ( ! transport )  if ( ! sinfo )  memset ( & default_sinfo , 0 , sizeof ( default_sinfo ) ); default_sinfo . sinfo_stream = asoc -> default_stream; default_sinfo . sinfo_flags = asoc -> default_flags; default_sinfo . sinfo_ppid = asoc -> default_ppid; default_sinfo . sinfo_context = asoc -> default_context; default_sinfo . sinfo_timetolive = asoc -> default_timetolive; default_sinfo . sinfo_assoc_id = sctp_assoc2id ( asoc ); sinfo = & default_sinfo; if ( sinfo -> sinfo_stream >= asoc -> c . sinit_num_ostreams )  sctp_prsctp_prune ( asoc , sinfo , msg_len - sctp_wspace ( asoc ) ); static inline int sctp_wspace(struct sctp_association *asoc) if ( asoc -> ep -> sndbuf_policy )  amt = asoc -> sndbuf_used; amt = sk_wmem_alloc_get ( asoc -> base . sk ); if ( amt >= asoc -> base . sk -> sk_sndbuf )  if ( asoc -> base . sk -> sk_userlocks & SOCK_SNDBUF_LOCK )  amt = sk_stream_wspace ( asoc -> base . sk ); if ( amt < 0 )  amt = asoc -> base . sk -> sk_sndbuf - amt; return amt ; datamsg = sctp_datamsg_from_user ( asoc , sinfo , & msg -> msg_iter ); if ( IS_ERR ( datamsg ) )  err = PTR_ERR ( datamsg ); list_for_each_entry ( chunk , & datamsg -> chunks , frag_list ) err = sctp_primitive_SEND ( net , asoc , datamsg ); if ( err )  sctp_datamsg_free ( datamsg ); sctp_datamsg_put ( datamsg ); return sctp_error ( sk , msg_flags , err ) ; static int sctp_error(struct sock *sk, int flags, int err) if ( err == - EPIPE )  err = sock_error ( sk ) ? : - EPIPE if ( err == - EPIPE && ! ( flags & MSG_NOSIGNAL ) )  return err ; 