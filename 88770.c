int CVE_2011_3191_PATCHED_CIFSFindNext(const int xid, struct cifsTconInfo __u16 searchHandle, struct cifs_search_info *psrch_inf) TRANSACTION2_FNEXT_REQ * pSMB = NULL ; unsigned int name_len ; if ( psrch_inf -> endOfSearch )  rc = smb_init ( SMB_COM_TRANSACTION2 , 15 , tcon , ( void * * ) & pSMB , ( void * * ) & pSMBr ); if ( rc )  pSMB -> TotalDataCount = 0; pSMB -> MaxParameterCount = cpu_to_le16 ( 8 ); pSMB -> MaxDataCount = cpu_to_le16 ( ( tcon -> ses -> server -> maxBuf - MAX_CIFS_HDR_SIZE ) & 0xFFFFFF00 ); pSMB -> MaxSetupCount = 0; pSMB -> Reserved = 0; pSMB -> Flags = 0; pSMB -> Timeout = 0; pSMB -> Reserved2 = 0; pSMB -> ParameterOffset = cpu_to_le16 offsetof ( struct smb_com_transaction2_fnext_req , SearchHandle ) - 4 ) pSMB -> DataCount = 0; pSMB -> DataOffset = 0; pSMB -> SetupCount = 1; pSMB -> Reserved3 = 0; pSMB -> SubCommand = cpu_to_le16 ( TRANS2_FIND_NEXT ); pSMB -> SearchHandle = searchHandle; pSMB -> SearchCount = cpu_to_le16 ( CIFSMaxBufSize / sizeof ( FILE_UNIX_INFO ) ); pSMB -> InformationLevel = cpu_to_le16 ( psrch_inf -> info_level ); pSMB -> ResumeKey = psrch_inf -> resume_key; pSMB -> SearchFlags = cpu_to_le16 ( CIFS_SEARCH_CLOSE_AT_END | CIFS_SEARCH_RETURN_RESUME ); name_len = psrch_inf -> resume_name_len; if ( name_len < PATH_MAX )  memcpy ( pSMB -> ResumeFileName , psrch_inf -> presume_name , name_len ); pSMB -> ResumeFileName [ name_len ] = 0; pSMB -> ResumeFileName [ name_len + 1 ] = 0; pSMB -> TotalParameterCount = cpu_to_le16 ( params ); pSMB -> ParameterCount = pSMB -> TotalParameterCount; pSMB -> hdr . smb_buf_length += byte_count; pSMB -> ByteCount = cpu_to_le16 ( byte_count ); rc = SendReceive ( xid , tcon -> ses , ( struct smb_hdr * ) pSMB , ( struct smb_hdr * ) pSMBr , & bytes_returned , 0 ); if ( rc )  if ( rc == - EBADF )  cifs_buf_release ( pSMB ); cFYI ( 1 , "FindNext returned = %d" , rc ); if ( rc == 0 )  psrch_inf -> ntwrk_buf_start = ( char * ) pSMB; psrch_inf -> smallBuf = 0; psrch_inf -> endOfSearch = true; return rc ; if ( rc != 0 )  cifs_buf_release ( pSMB ); return rc ; 