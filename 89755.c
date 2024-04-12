int CVE_2013_6381_PATCHED_qeth_snmp_command(struct qeth_card *card, char __user *udata) struct qeth_cmd_buffer * iob ; struct qeth_ipa_cmd * cmd ; struct qeth_snmp_ureq * ureq ; unsigned int req_len ; struct qeth_arp_query_info qinfo = 0 , if ( card -> info . guestlan )  if ( ( ! qeth_adp_supported ( card , IPA_SETADP_SET_SNMP_CONTROL ) ) && ( ! card -> options . layer2 ) )  if ( copy_from_user ( & req_len , udata + sizeof ( int ) , sizeof ( int ) ) )  if ( req_len > ( QETH_BUFSIZE - IPA_PDU_HEADER_SIZE - sizeof ( struct qeth_ipacmd_hdr ) - sizeof ( struct qeth_ipacmd_setadpparms_hdr ) ) )  ureq = memdup_user ( udata , req_len + sizeof ( struct qeth_snmp_ureq_hdr ) ); if ( IS_ERR ( ureq ) )  qinfo . udata_len = ureq -> hdr . data_len; qinfo . udata = kzalloc ( qinfo . udata_len , GFP_KERNEL ); if ( ! qinfo . udata )  iob = qeth_get_adapter_cmd ( card , IPA_SETADP_SET_SNMP_CONTROL , QETH_SNMP_SETADP_CMDLENGTH + req_len ); cmd = ( struct qeth_ipa_cmd * ) ( iob -> data + IPA_PDU_HEADER_SIZE ); memcpy ( & cmd -> data . setadapterparms . data . snmp , & ureq -> cmd , req_len ); 