static brcmf_cfg80211_mgmt_tx(struct wiphy *wiphy, struct wireless_dev struct cfg80211_mgmt_tx_params *params, u64 *cookie) struct brcmf_cfg80211_info * cfg = wiphy_to_cfg ( wiphy ) ; const u8 * buf = params -> buf ; size_t len = params -> len ; const struct ieee80211_mgmt * mgmt ; struct brcmf_cfg80211_vif * vif ; s32 ie_offset ; s32 ie_len ; mgmt = ( const struct ieee80211_mgmt * ) buf; if ( ! ieee80211_is_mgmt ( mgmt -> frame_control ) )  vif = container_of ( wdev , struct brcmf_cfg80211_vif , wdev ) if ( ieee80211_is_probe_resp ( mgmt -> frame_control ) )  ie_offset = DOT11_MGMT_HDR_LEN + DOT11_BCN_PRB_FIXED_LEN; ie_len = len - ie_offset; if ( vif == cfg -> p2p . bss_idx [ P2PAPI_BSSCFG_PRIMARY ] . vif )  vif = cfg -> p2p . bss_idx [ P2PAPI_BSSCFG_DEVICE ] . vif; err = brcmf_vif_set_mgmt_ie ( vif , BRCMF_VNDR_IE_PRBRSP_FLAG , & buf [ ie_offset ] , ie_len ); s32 brcmf_vif_set_mgmt_ie(struct brcmf_cfg80211_vif *vif, s32 const u8 *vndr_ie_buf, u32 vndr_ie_len) struct vif_saved_ie * saved_ie ; u8 * iovar_ie_buf ; u8 * curr_ie_buf ; int mgmt_ie_buf_len ; u32 * mgmt_ie_len ; u32 parsed_ie_buf_len = 0 ; struct parsed_vndr_ies old_vndr_ies ; struct parsed_vndr_ies new_vndr_ies ; struct parsed_vndr_ie_info * vndrie_info ; s32 i ; int remained_buf_len ; if ( ! vif )  saved_ie = & vif -> saved_ie; iovar_ie_buf = kzalloc ( WL_EXTRA_BUF_MAX , GFP_KERNEL ); if ( ! iovar_ie_buf )  curr_ie_buf = iovar_ie_buf; switch ( pktflag )  mgmt_ie_buf = saved_ie -> probe_req_ie; mgmt_ie_len = & saved_ie -> probe_req_ie_len; mgmt_ie_buf_len = sizeof ( saved_ie -> probe_req_ie ); mgmt_ie_buf = saved_ie -> probe_res_ie; mgmt_ie_len = & saved_ie -> probe_res_ie_len; mgmt_ie_buf_len = sizeof ( saved_ie -> probe_res_ie ); mgmt_ie_buf = saved_ie -> beacon_ie; mgmt_ie_len = & saved_ie -> beacon_ie_len; mgmt_ie_buf_len = sizeof ( saved_ie -> beacon_ie ); mgmt_ie_buf = saved_ie -> assoc_req_ie; mgmt_ie_len = & saved_ie -> assoc_req_ie_len; mgmt_ie_buf_len = sizeof ( saved_ie -> assoc_req_ie ); if ( vndr_ie_len > mgmt_ie_buf_len )  if ( vndr_ie_buf && vndr_ie_len && curr_ie_buf )  for (i = 0; i < new_vndr_ies.count; i++) vndrie_info = & new_vndr_ies . ie_info [ i ]; parsed_ie_buf_len += vndrie_info -> ie_len; if ( mgmt_ie_buf && * mgmt_ie_len )  if ( parsed_ie_buf_len && ( parsed_ie_buf_len == * mgmt_ie_len ) && ( memcmp ( mgmt_ie_buf , curr_ie_buf , parsed_ie_buf_len ) == 0 ) )  for (i = 0; i < old_vndr_ies.count; i++) vndrie_info = & old_vndr_ies . ie_info [ i ]; del_add_ie_buf_len = brcmf_vndr_ie ( curr_ie_buf , pktflag , vndrie_info -> ie_ptr , vndrie_info -> ie_len , "del" ); curr_ie_buf += del_add_ie_buf_len; if ( mgmt_ie_buf && parsed_ie_buf_len )  remained_buf_len = mgmt_ie_buf_len; for (i = 0; i < new_vndr_ies.count; i++) vndrie_info = & new_vndr_ies . ie_info [ i ]; if ( remained_buf_len < ( vndrie_info -> vndrie . len + VNDR_IE_VSIE_OFFSET ) )  remained_buf_len -= ( vndrie_info -> ie_len + VNDR_IE_VSIE_OFFSET ); del_add_ie_buf_len = brcmf_vndr_ie ( curr_ie_buf , pktflag , vndrie_info -> ie_ptr , vndrie_info -> ie_len , "add" ); curr_ie_buf += del_add_ie_buf_len; static brcmf_vndr_ie(u8 *iebuf, s32 pktflag, u8 *ie_ptr, u32 ie_len, s8 *add_del_cmd) strncpy ( iebuf , add_del_cmd , VNDR_IE_CMD_LEN - 1 ); iebuf [ VNDR_IE_CMD_LEN - 1 ] = '\0'; memcpy ( & iebuf [ VNDR_IE_VSIE_OFFSET ] , ie_ptr , ie_len ); 