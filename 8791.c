static void v9fs_attach(void *opaque) V9fsPDU * pdu = opaque ; V9fsState * s = pdu -> s ; int32_t fid , afid , n_uname ; V9fsFidState * fidp ; size_t offset = 7 ; ssize_t err ; err = pdu_unmarshal ( pdu , offset , "ddssd" , & fid , & afid , & uname , & aname , & n_uname ); if ( err < 0 )  fidp = alloc_fid ( s , fid ); static V9fsFidState *alloc_fid(V9fsState *s, int32_t fid) V9fsFidState * f ; for (f = s->fid_list; f; f = f->next) if ( f -> fid == fid )  return NULL ; f = g_malloc0 ( sizeof ( V9fsFidState ) ); f -> fid = fid; f -> fid_type = P9_FID_NONE; f -> ref = 1; f -> flags |= FID_REFERENCED; f -> next = s -> fid_list; return f ; if ( fidp == NULL )  err = - EINVAL; fidp -> uid = n_uname; err = v9fs_co_name_to_path ( pdu , NULL , "/" , & fidp -> path ); if ( err < 0 )  err = - EINVAL; err = fid_to_qid ( pdu , fidp , & qid ); static int fid_to_qid(V9fsPDU *pdu, V9fsFidState *fidp, V9fsQID *qidp) int err ; err = v9fs_co_lstat ( pdu , & fidp -> path , & stbuf ); if ( err < 0 )  return err ; return 0 ; if ( err < 0 )  err = - EINVAL; err = pdu_marshal ( pdu , offset , "Q" , & qid ); if ( err < 0 )  err += offset; if ( ! s -> migration_blocker )  s -> root_fid = fid; complete_pdu ( s , pdu , err ); static void complete_pdu(V9fsState *s, V9fsPDU *pdu, ssize_t len) if ( len < 0 )  int err = - len ; if ( s -> proto_version != V9FS_PROTO_2000L )  V9fsString str ; str . data = strerror ( err ); str . size = strlen ( str . data ); len += pdu_marshal ( pdu , len , "s" , & str ); len += pdu_marshal ( pdu , len , "d" , err ); pdu_marshal ( pdu , 0 , "dbw" , ( int32_t ) len , id , pdu -> tag ); pdu -> size = len; pdu -> id = id; virtqueue_push ( s -> vq , & pdu -> elem , len ); qemu_co_queue_next ( & pdu -> complete ); free_pdu ( s , pdu ); 