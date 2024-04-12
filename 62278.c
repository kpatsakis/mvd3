static void v9fs_create(void *opaque) int32_t fid ; size_t offset = 7 ; V9fsFidState * fidp ; int32_t perm ; V9fsPath path ; V9fsString name ; V9fsPDU * pdu = opaque ; err = pdu_unmarshal ( pdu , offset , "dsdbs" , & fid , & name , & perm , & mode , & extension ); if ( err < 0 )  fidp = get_fid ( pdu , fid ); if ( fidp == NULL )  if ( perm & P9_STAT_MODE_DIR )  err = v9fs_co_mkdir ( pdu , fidp , & name , perm & 0777 , fidp -> uid , - 1 , & stbuf ); if ( err < 0 )  err = v9fs_co_name_to_path ( pdu , & fidp -> path , name . data , & path ); if ( err < 0 )  v9fs_path_copy ( & fidp -> path , & path ); void v9fs_path_copy(V9fsPath *lhs, V9fsPath *rhs) lhs -> data = g_malloc ( rhs -> size ); memcpy ( lhs -> data , rhs -> data , rhs -> size ); lhs -> size = rhs -> size; 