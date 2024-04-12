static int CVE_2010_3429_VULN_flic_decode_frame_15_16BPP(AVCodecContext void *data, int const uint8_t *buf, int buf_size) FlicDecodeContext * s = avctx -> priv_data ; int stream_ptr = 0 ; int pixel_ptr ; unsigned char palette_idx1 ; unsigned int frame_size ; int num_chunks ; unsigned int chunk_size ; int chunk_type ; int i , j ; int lines ; int compressed_lines ; signed short line_packets ; int y_ptr ; int byte_run ; int pixel_skip ; int pixel_countdown ; unsigned char * pixels ; int pixel ; s -> frame . reference = 1; s -> frame . buffer_hints = FF_BUFFER_HINTS_VALID | FF_BUFFER_HINTS_PRESERVE | FF_BUFFER_HINTS_REUSABLE; if ( avctx -> reget_buffer ( avctx , & s -> frame ) < 0 )  pixels = s -> frame . data [ 0 ]; frame_size = AV_RL32 ( & buf [ stream_ptr ] ); stream_ptr += 6; num_chunks = AV_RL16 ( & buf [ stream_ptr ] ); stream_ptr += 10; frame_size -= 16; while ( ( frame_size > 0 ) && ( num_chunks > 0 ) )  chunk_size = AV_RL32 ( & buf [ stream_ptr ] ); stream_ptr += 4; chunk_type = AV_RL16 ( & buf [ stream_ptr ] ); stream_ptr += 2; switch ( chunk_type )  stream_ptr = stream_ptr + chunk_size - 6; y_ptr = 0; compressed_lines = AV_RL16 ( & buf [ stream_ptr ] ); stream_ptr += 2; while ( compressed_lines > 0 )  line_packets = AV_RL16 ( & buf [ stream_ptr ] ); stream_ptr += 2; if ( line_packets < 0 )  line_packets = - line_packets; y_ptr += line_packets * s -> frame . linesize [ 0 ]; compressed_lines --; pixel_ptr = y_ptr; pixel_countdown = s -> avctx -> width; for (i = 0; i < line_packets; i++) pixel_skip = buf [ stream_ptr ++ ]; pixel_ptr += ( pixel_skip * 2 ); pixel_countdown -= pixel_skip; byte_run = ( signed char ) ( buf [ stream_ptr ++ ] ); if ( byte_run < 0 )  byte_run = - byte_run; pixel = AV_RL16 ( & buf [ stream_ptr ] ); stream_ptr += 2; for (j = 0; j < byte_run; j++, pixel_countdown -= 2) * ( ( signed short * ) ( & pixels [ pixel_ptr ] ) ) = pixel; pixel_ptr += 2; for (j = 0; j < byte_run; j++, pixel_countdown--) * ( ( signed short * ) ( & pixels [ pixel_ptr ] ) ) = AV_RL16 ( & buf [ stream_ptr ] ); stream_ptr += 2; pixel_ptr += 2; y_ptr += s -> frame . linesize [ 0 ]; stream_ptr = stream_ptr + chunk_size - 6; memset ( pixels , 0x0000 , s -> frame . linesize [ 0 ] * s -> avctx -> height ); y_ptr = 0; for (lines = 0; lines < s->avctx->height; lines++) stream_ptr ++; pixel_countdown = ( s -> avctx -> width * 2 ); while ( pixel_countdown > 0 )  byte_run = ( signed char ) ( buf [ stream_ptr ++ ] ); if ( byte_run > 0 )  palette_idx1 = buf [ stream_ptr ++ ]; for (j = 0; j < byte_run; j++) pixels [ pixel_ptr ++ ] = palette_idx1; pixel_countdown --; byte_run = - byte_run; for (j = 0; j < byte_run; j++) palette_idx1 = buf [ stream_ptr ++ ]; pixels [ pixel_ptr ++ ] = palette_idx1; pixel_countdown --; pixel_countdown = s -> avctx -> width; * ( ( signed short * ) ( & pixels [ pixel_ptr ] ) ) = AV_RL16 ( & buf [ pixel_ptr ] ); pixel_ptr += 2; y_ptr += s -> frame . linesize [ 0 ]; y_ptr = 0; for (lines = 0; lines < s->avctx->height; lines++) stream_ptr ++; pixel_countdown = s -> avctx -> width; while ( pixel_countdown > 0 )  byte_run = ( signed char ) ( buf [ stream_ptr ++ ] ); if ( byte_run > 0 )  stream_ptr += 2; for (j = 0; j < byte_run; j++) * ( ( signed short * ) ( & pixels [ pixel_ptr ] ) ) = pixel; pixel_ptr += 2; pixel_countdown --; byte_run = - byte_run; for (j = 0; j < byte_run; j++) * ( ( signed short * ) ( & pixels [ pixel_ptr ] ) ) = AV_RL16 ( & buf [ stream_ptr ] ); stream_ptr += 2; pixel_ptr += 2; pixel_countdown --; y_ptr += s -> frame . linesize [ 0 ]; if ( chunk_size - 6 > ( unsigned int ) ( s -> avctx -> width * s -> avctx -> height ) * 2 )  stream_ptr += chunk_size - 6; for (y_ptr = 0; y_ptr < s->frame.linesize[0] * y_ptr += s->frame.linesize[0]) * ( ( signed short * ) ( & pixels [ y_ptr + pixel_ptr ] ) ) = AV_RL16 ( & buf [ stream_ptr + pixel_ptr ] ); pixel_ptr += 2; stream_ptr += s -> avctx -> width * 2; stream_ptr += chunk_size - 6; frame_size -= chunk_size; num_chunks --; 