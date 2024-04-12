static int unix_dgram_sendmsg(struct socket *sock, struct msghdr size_t len) struct sock * sk = sock -> sk ; struct net * net = sock_net ( sk ) ; struct unix_sock * u = unix_sk ( sk ) ; struct sock * other = NULL ; int namelen = 0 ; int err ; unsigned int hash ; struct sk_buff * skb ; long timeo ; int data_len = 0 ; int sk_locked ; err = scm_send ( sock , msg , & scm , false ); if ( err < 0 )  err = - EOPNOTSUPP; if ( msg -> msg_flags & MSG_OOB )  if ( msg -> msg_namelen )  err = unix_mkname ( sunaddr , msg -> msg_namelen , & hash ); static int unix_mkname(struct sockaddr_un *sunaddr, int len, unsigned int *hashp) if ( len <= sizeof ( short ) || len > sizeof ( * sunaddr ) )  return - EINVAL ; if ( ! sunaddr || sunaddr -> sun_family != AF_UNIX )  return - EINVAL ; if ( sunaddr -> sun_path [ 0 ] )  ( ( char * ) sunaddr ) [ len ] = 0; len = strlen ( sunaddr -> sun_path ) + 1 + sizeof ( short ); return len ; return len ; if ( err < 0 )  namelen = err; sunaddr = NULL; other = unix_peer_get ( sk ); struct sock *unix_peer_get(struct sock *s) struct sock * peer ; peer = unix_peer ( s ); return peer ; if ( ! other )  if ( test_bit ( SOCK_PASSCRED , & sock -> flags ) && ! u -> addr && ( err = unix_autobind ( sock ) ) != 0 )  err = - EMSGSIZE; if ( len > sk -> sk_sndbuf - 32 )  if ( len > SKB_MAX_ALLOC )  data_len = min_t ( size_t , len - SKB_MAX_ALLOC , MAX_SKB_FRAGS * PAGE_SIZE ); data_len = PAGE_ALIGN ( data_len ); skb = sock_alloc_send_pskb ( sk , len - data_len , data_len , msg -> msg_flags & MSG_DONTWAIT , & err , PAGE_ALLOC_COSTLY_ORDER ); if ( skb == NULL )  err = unix_scm_to_skb ( & scm , skb , true ); static int unix_scm_to_skb(struct scm_cookie *scm, struct sk_buff *skb, bool send_fds) int err = 0 ; if ( scm -> fp && send_fds )  err = unix_attach_fds ( scm , skb ); static int unix_attach_fds(struct scm_cookie *scm, struct sk_buff *skb) int i ; unsigned char max_level = 0 ; if ( too_many_unix_fds ( current ) )  static inline bool too_many_unix_fds(struct task_struct *p) struct user_struct * user = current_user ( ) ; if ( unlikely ( user -> unix_inflight > task_rlimit ( p , RLIMIT_NOFILE ) ) )  return ! capable ( CAP_SYS_RESOURCE ) && ! capable ( CAP_SYS_ADMIN ) ; return false ; return - ETOOMANYREFS ; for (i = scm->fp->count - 1; i >= 0; i--) struct sock * sk = unix_get_socket ( scm -> fp -> fp [ i ] ) ; if ( sk )  max_level = max ( max_level , unix_sk ( sk ) -> recursion_level ); if ( unlikely ( max_level > MAX_RECURSION_LEVEL ) )  return - ETOOMANYREFS ; UNIXCB ( skb ) . fp = scm_fp_dup ( scm -> fp ); if ( ! UNIXCB ( skb ) . fp )  return - ENOMEM ; return max_level ; return err ; if ( err < 0 )  skb -> data_len = data_len; skb -> len = len; err = skb_copy_datagram_from_iter ( skb , 0 , & msg -> msg_iter , len ); if ( err )  timeo = sock_sndtimeo ( sk , msg -> msg_flags & MSG_DONTWAIT ); if ( ! other )  err = - ECONNRESET; if ( sunaddr == NULL )  other = unix_find_other ( net , sunaddr , namelen , sk -> sk_type , hash , & err ); if ( other == NULL )  if ( sk_filter ( other , skb ) < 0 )  sk_locked = 0; err = - EPERM; if ( ! unix_may_send ( sk , other ) )  static inline int unix_may_send(struct sock *sk, struct sock *osk) return unix_peer ( osk ) == NULL || unix_our_peer ( sk , osk ) ; static inline int unix_our_peer(struct sock *sk, struct sock *osk) return unix_peer ( osk ) == sk ; if ( unlikely ( sock_flag ( other , SOCK_DEAD ) ) )  err = 0; if ( unix_peer ( sk ) == other )  unix_peer ( sk ) = NULL; err = - ECONNREFUSED; other = NULL; if ( err )  if ( other -> sk_shutdown & RCV_SHUTDOWN )  if ( sk -> sk_type != SOCK_SEQPACKET )  err = security_unix_may_send ( sk -> sk_socket , other -> sk_socket ); if ( err )  if ( unlikely ( unix_peer ( other ) != sk && unix_recvq_full ( other ) ) )  static inline int unix_recvq_full(struct sock const *sk) return skb_queue_len ( & sk -> sk_receive_queue ) > sk -> sk_max_ack_backlog ; if ( timeo )  timeo = unix_wait_for_peer ( other , timeo ); static long unix_wait_for_peer(struct sock *other, long timeo) int sched ; sched = ! sock_flag ( other , SOCK_DEAD ) && ! ( other -> sk_shutdown & RCV_SHUTDOWN ) && unix_recvq_full ( other ); if ( sched )  timeo = schedule_timeout ( timeo ); return timeo ; if ( signal_pending ( current ) )  if ( unix_peer ( sk ) != other || unix_dgram_peer_wake_me ( sk , other ) )  static int unix_dgram_peer_wake_me(struct sock *sk, struct sock *other) if ( unix_recvq_full ( other ) )  static inline int unix_recvq_full(struct sock const *sk) return skb_queue_len ( & sk -> sk_receive_queue ) > sk -> sk_max_ack_backlog ; return 1 ; return 0 ; if ( ! sk_locked )  sk_locked = 1; static struct sock *unix_find_other(struct net struct sockaddr_un *sunname, int int type, unsigned int hash, int *error) struct sock * u ; if ( sunname -> sun_path [ 0 ] )  u = unix_find_socket_byname ( net , sunname , len , type , hash ); static inline struct sock *unix_find_socket_byname(struct net struct sockaddr_un int len, int unsigned int hash) struct sock * s ; s = __unix_find_socket_byname ( net , sunname , len , type , hash ); static struct sock *__unix_find_socket_byname(struct net struct sockaddr_un int len, int type, unsigned int hash) struct sock * s ; struct unix_sock * u = unix_sk ( s ) ; if ( u -> addr -> len == len && ! memcmp ( u -> addr -> name , sunname , len ) )  