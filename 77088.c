void AudioSessionConduit TrackRate AudioChunk& chunk) nsAutoArrayPtr < int16_t > samples ( new int16_t [ chunk . mDuration ] ) ; if ( enabled_ && chunk . mBuffer )  memset ( samples , 0 , chunk . mDuration * sizeof ( samples [ 0 ] ) ); int16_t * samples_tmp = samples . get ( ) ; memcpy ( & samples_10ms_buffer_ [ buffer_current_ ] , samples_tmp , tocpy * sizeof ( int16_t ) ); samples_tmp += tocpy; conduit -> SendAudioFrame ( samples_tmp , tocpy , rate , 0 ); samples_tmp += tocpy; memcpy ( samples_10ms_buffer_ , samples_tmp , chunk_remaining * sizeof ( int16_t ) ); 