 CVE_2014_7145_PATCHED_SMB2_tcon(const unsigned int xid, struct cifs_ses *ses, const char struct cifs_tcon *tcon, const struct nls_table *cp) int unc_path_len ; if ( ( ses -> server ) && tree )  if ( tcon && tcon -> bad_network_name )  unc_path = kmalloc ( MAX_SHARENAME_LENGTH * 2 , GFP_KERNEL ); if ( unc_path == NULL )  unc_path_len = cifs_strtoUTF16 ( unc_path , tree , strlen ( tree ) , cp ) + 1; unc_path_len *= 2; if ( unc_path_len < 2 )  req -> PathLength = cpu_to_le16 ( unc_path_len - 2 ); iov [ 1 ] . iov_len = unc_path_len; inc_rfc1001_len ( req , unc_path_len - 1 ); rc = SendReceive2 ( xid , ses , iov , 2 , & resp_buftype , 0 ); rsp = ( struct smb2_tree_connect_rsp * ) iov [ 0 ] . iov_base; if ( rc != 0 )  ses -> ipc_tid = rsp -> hdr . TreeId; if ( rsp -> ShareType & SMB2_SHARE_TYPE_DISK )  if ( rsp -> ShareType & SMB2_SHARE_TYPE_PIPE )  if ( rsp -> ShareType & SMB2_SHARE_TYPE_PRINT )  cifs_dbg ( VFS , "unknown share type %d\n" , rsp -> ShareType ); tcon -> share_flags = le32_to_cpu ( rsp -> ShareFlags ); tcon -> capabilities = rsp -> Capabilities; tcon -> maximal_access = le32_to_cpu ( rsp -> MaximalAccess ); tcon -> tidStatus = CifsGood; tcon -> need_reconnect = false; tcon -> tid = rsp -> hdr . TreeId; strlcpy ( tcon -> treeName , tree , sizeof ( tcon -> treeName ) ); if ( ( rsp -> Capabilities & SMB2_SHARE_CAP_DFS ) && ( ( tcon -> share_flags & SHI1005_FLAGS_DFS ) == 0 ) )  init_copy_chunk_defaults ( tcon ); if ( tcon -> ses -> server -> ops -> validate_negotiate )  rc = tcon -> ses -> server -> ops -> validate_negotiate ( xid , tcon ); free_rsp_buf ( resp_buftype , rsp ); return rc ; if ( rsp -> hdr . Status == STATUS_BAD_NETWORK_NAME )  