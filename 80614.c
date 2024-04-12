static void v9fs_walk(void *opaque) V9fsPath dpath , path ; uint16_t nwnames ; size_t offset = 7 ; int32_t fid , newfid ; V9fsString * wnames = NULL ; V9fsFidState * fidp ; V9fsPDU * pdu = opaque ; err = pdu_unmarshal ( pdu , offset , "ddw" , & fid , & newfid , & nwnames ); if ( err < 0 )  offset += err; if ( nwnames && nwnames <= P9_MAXWELEM )  wnames = g_malloc0 ( sizeof ( wnames [ 0 ] ) * nwnames ); for (i = 0; i < nwnames; i++) err = pdu_unmarshal ( pdu , offset , "s" , & wnames [ i ] ); if ( err < 0 )  offset += err; if ( nwnames > P9_MAXWELEM )  fidp = get_fid ( pdu , fid ); if ( fidp == NULL )  v9fs_path_copy ( & dpath , & fidp -> path ); void v9fs_path_copy(V9fsPath *lhs, V9fsPath *rhs) lhs -> data = g_malloc ( rhs -> size ); memcpy ( lhs -> data , rhs -> data , rhs -> size ); lhs -> size = rhs -> size; 