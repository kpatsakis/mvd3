static void CVE_2010_4342_VULN_aun_incoming(struct sk_buff *skb, struct aunhdr *ah, size_t len) struct iphdr * ip = ip_hdr ( skb ) ; unsigned char stn = ntohl ( ip -> saddr ) & 0xff ; struct sk_buff * newskb ; struct ec_device * edev = skb -> dev -> ec_ptr ; if ( ! edev )  if ( ( sk = ec_listening_socket ( ah -> port , stn , edev -> net ) ) == NULL )  newskb = alloc_skb ( ( len - sizeof ( struct aunhdr ) + 15 ) & ~15 , GFP_ATOMIC ); if ( newskb == NULL )  memcpy ( skb_put ( newskb , len - sizeof ( struct aunhdr ) ) , ( void * ) ( ah + 1 ) , len - sizeof ( struct aunhdr ) ); 