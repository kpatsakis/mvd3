s32 brcmf_vif_clear_mgmt_ies(struct brcmf_cfg80211_vif *vif) s32 pktflags [ ] = { BRCMF_VNDR_IE_PRBREQ_FLAG , BRCMF_VNDR_IE_PRBRSP_FLAG , BRCMF_VNDR_IE_BEACON_FLAG } ; int i ; for (i = 0; i < ARRAY_SIZE(pktflags); i++) brcmf_vif_set_mgmt_ie ( vif , pktflags [ i ] , NULL , 0 ); s32 brcmf_vif_set_mgmt_ie(struct brcmf_cfg80211_vif *vif, s32 const u8 *vndr_ie_buf, u32 vndr_ie_len) struct vif_saved_ie * saved_ie ; u8 * iovar_ie_buf ; u8 * curr_ie_buf ; int mgmt_ie_buf_len ; struct parsed_vndr_ies new_vndr_ies ; if ( ! vif )  saved_ie = & vif -> saved_ie; iovar_ie_buf = kzalloc ( WL_EXTRA_BUF_MAX , GFP_KERNEL ); if ( ! iovar_ie_buf )  curr_ie_buf = iovar_ie_buf; switch ( pktflag )  mgmt_ie_buf_len = sizeof ( saved_ie -> probe_req_ie ); mgmt_ie_buf_len = sizeof ( saved_ie -> probe_res_ie ); mgmt_ie_buf_len = sizeof ( saved_ie -> beacon_ie ); mgmt_ie_buf_len = sizeof ( saved_ie -> assoc_req_ie ); if ( vndr_ie_len > mgmt_ie_buf_len )  if ( vndr_ie_buf && vndr_ie_len && curr_ie_buf )  brcmf_parse_vndr_ies ( vndr_ie_buf , vndr_ie_len , & new_vndr_ies ); static brcmf_parse_vndr_ies(const u8 *vndr_ie_buf, u32 struct parsed_vndr_ies *vndr_ies) struct brcmf_vs_tlv * vndrie ; struct brcmf_tlv * ie ; s32 remaining_len ; remaining_len = ( s32 ) vndr_ie_len; memset ( vndr_ies , 0 , sizeof ( * vndr_ies ) ); ie = ( struct brcmf_tlv * ) vndr_ie_buf; while ( ie )  if ( ie -> id != WLAN_EID_VENDOR_SPECIFIC )  vndrie = ( struct brcmf_vs_tlv * ) ie; if ( vndrie -> len < ( VS_IE_FIXED_HDR_LEN - TLV_HDR_LEN + 1 ) )  if ( ! memcmp ( vndrie -> oui , ( u8 * ) WPA_OUI , TLV_OUI_LEN ) && ( ( vndrie -> oui_type == WPA_OUI_TYPE ) || ( vndrie -> oui_type == WME_OUI_TYPE ) ) )  vndr_ies -> count ++; if ( vndr_ies -> count >= VNDR_IE_PARSE_LIMIT )  remaining_len -= ( ie -> len + TLV_HDR_LEN ); if ( remaining_len <= TLV_HDR_LEN )  ie = NULL; ie = ( struct brcmf_tlv * ) ( ( ( u8 * ) ie ) + ie -> len + TLV_HDR_LEN ); 