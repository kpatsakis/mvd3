static int CVE_2014_2099_VULN_msrle_decode_frame(AVCodecContext void *data, int AVPacket *avpkt) const uint8_t * buf = avpkt -> data ; int buf_size = avpkt -> size ; MsrleContext * s = avctx -> priv_data ; int istride = FFALIGN ( avctx -> width * avctx -> bits_per_coded_sample , 32 ) / 8 ; int ret ; s -> buf = buf; s -> size = buf_size; if ( ( ret = ff_reget_buffer ( avctx , s -> frame ) ) < 0 )  if ( avctx -> bits_per_coded_sample > 1 && avctx -> bits_per_coded_sample <= 8 )  const uint8_t * pal = av_packet_get_side_data ( avpkt , AV_PKT_DATA_PALETTE , NULL ) ; if ( pal )  s -> frame -> palette_has_changed = 1; memcpy ( s -> pal , pal , AVPALETTE_SIZE ); memcpy ( s -> frame -> data [ 1 ] , s -> pal , AVPALETTE_SIZE ); if ( avctx -> height * istride == avpkt -> size )  int linesize = ( avctx -> width * avctx -> bits_per_coded_sample + 7 ) / 8 ; uint8_t * ptr = s -> frame -> data [ 0 ] ; uint8_t * buf = avpkt -> data + ( avctx -> height - 1 ) * istride ; int i , j ; for (i = 0; i < avctx->height; i++) if ( avctx -> bits_per_coded_sample == 4 )  ptr [ j + 0 ] = buf [ j >> 1 ] >> 4; ptr [ j + 1 ] = buf [ j >> 1 ] & 0xF; ptr [ j + 0 ] = buf [ j >> 1 ] >> 4; memcpy ( ptr , buf , linesize ); buf -= istride; ptr += s -> frame -> linesize [ 0 ]; 