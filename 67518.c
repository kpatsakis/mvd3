static s32 brcmf_cfg80211_resume(struct wiphy *wiphy) struct brcmf_cfg80211_info * cfg = wiphy_to_cfg ( wiphy ) ; struct net_device * ndev = cfg_to_ndev ( cfg ) ; struct brcmf_if * ifp = netdev_priv ( ndev ) ; if ( cfg -> wowl . active )  brcmf_report_wowl_wakeind ( wiphy , ifp ); static void brcmf_report_wowl_wakeind(struct wiphy *wiphy, struct brcmf_if *ifp) struct brcmf_wowl_wakeind_le wake_ind_le ; struct cfg80211_wowlan_wakeup wakeup_data ; u32 wakeind ; s32 err ; err = brcmf_fil_iovar_data_get ( ifp , "wowl_wakeind" , & wake_ind_le , sizeof ( wake_ind_le ) ); if ( err )  wakeind = le32_to_cpu ( wake_ind_le . ucode_wakeind ); if ( wakeind & ( BRCMF_WOWL_MAGIC | BRCMF_WOWL_DIS | BRCMF_WOWL_BCN | BRCMF_WOWL_RETR | BRCMF_WOWL_NET | BRCMF_WOWL_PFN_FOUND ) )  memset ( & wakeup_data , 0 , sizeof ( wakeup_data ) ); wakeup_data . pattern_idx = - 1; wakeup_data . magic_pkt = true; wakeup_data . disconnect = true; wakeup_data . disconnect = true; wakeup_data . disconnect = true; wakeup_data . pattern_idx = 0; wakeup_data . net_detect = cfg -> wowl . nd_info; wakeup_data . gtk_rekey_failure = true; 