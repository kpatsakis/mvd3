static void CVE_2006_6106_VULN_cmtp_recv_interopmsg(struct cmtp_session *session, struct sk_buff *skb) struct capi_ctr * ctrl = & session -> ctrl ; __u16 appl , msgnum , func , info ; switch ( CAPIMSG_SUBCOMMAND ( skb -> data ) )  func = CAPIMSG_U16 ( skb -> data , CAPI_MSG_BASELEN + 5 ); info = CAPIMSG_U16 ( skb -> data , CAPI_MSG_BASELEN + 8 ); switch ( func )  msgnum = CAPIMSG_MSGID ( skb -> data ); msgnum = CAPIMSG_MSGID ( skb -> data ); if ( ! info && ( msgnum == CMTP_INITIAL_MSGNUM ) )  if ( ! info && ctrl )  memcpy ( & ctrl -> profile , skb -> data + CAPI_MSG_BASELEN + 11 , sizeof ( capi_profile ) ); capi_ctr_ready ( ctrl ); 