static brcmf_cfg80211_change_beacon(struct wiphy *wiphy, struct net_device struct cfg80211_beacon_data *info) struct brcmf_if * ifp = netdev_priv ( ndev ) ; s32 err ; err = brcmf_config_ap_mgmt_ie ( ifp -> vif , info ); static brcmf_config_ap_mgmt_ie(struct brcmf_cfg80211_vif struct cfg80211_beacon_data *beacon) s32 err ; err = brcmf_vif_set_mgmt_ie ( vif , BRCMF_VNDR_IE_BEACON_FLAG , beacon -> tail , beacon -> tail_len ); if ( err )  err = brcmf_vif_set_mgmt_ie ( vif , BRCMF_VNDR_IE_PRBRSP_FLAG , beacon -> proberesp_ies , beacon -> proberesp_ies_len ); s32 brcmf_vif_set_mgmt_ie(struct brcmf_cfg80211_vif *vif, s32 const u8 *vndr_ie_buf, u32 vndr_ie_len) struct vif_saved_ie * saved_ie ; u8 * iovar_ie_buf ; u8 * curr_ie_buf ; int mgmt_ie_buf_len ; u32 * mgmt_ie_len ; u32 parsed_ie_buf_len = 0 ; struct parsed_vndr_ies new_vndr_ies ; struct parsed_vndr_ie_info * vndrie_info ; s32 i ; if ( ! vif )  saved_ie = & vif -> saved_ie; iovar_ie_buf = kzalloc ( WL_EXTRA_BUF_MAX , GFP_KERNEL ); if ( ! iovar_ie_buf )  curr_ie_buf = iovar_ie_buf; switch ( pktflag )  mgmt_ie_buf = saved_ie -> probe_req_ie; mgmt_ie_len = & saved_ie -> probe_req_ie_len; mgmt_ie_buf_len = sizeof ( saved_ie -> probe_req_ie ); mgmt_ie_buf = saved_ie -> probe_res_ie; mgmt_ie_len = & saved_ie -> probe_res_ie_len; mgmt_ie_buf_len = sizeof ( saved_ie -> probe_res_ie ); mgmt_ie_buf = saved_ie -> beacon_ie; mgmt_ie_len = & saved_ie -> beacon_ie_len; mgmt_ie_buf_len = sizeof ( saved_ie -> beacon_ie ); mgmt_ie_buf = saved_ie -> assoc_req_ie; mgmt_ie_len = & saved_ie -> assoc_req_ie_len; mgmt_ie_buf_len = sizeof ( saved_ie -> assoc_req_ie ); if ( vndr_ie_len > mgmt_ie_buf_len )  if ( vndr_ie_buf && vndr_ie_len && curr_ie_buf )  for (i = 0; i < new_vndr_ies.count; i++) vndrie_info = & new_vndr_ies . ie_info [ i ]; parsed_ie_buf_len += vndrie_info -> ie_len; if ( mgmt_ie_buf && * mgmt_ie_len )  if ( parsed_ie_buf_len && ( parsed_ie_buf_len == * mgmt_ie_len ) && ( memcmp ( mgmt_ie_buf , curr_ie_buf , parsed_ie_buf_len ) == 0 ) )  