static void goodG2B1() char * data ; char data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; if ( staticReturnsFalse ( ) )  static int staticReturnsFalse() return 0 ; strcat ( data , "*.*" ); pipe = POPEN ( data , "wb" ); if ( pipe != NULL )  PCLOSE ( pipe ); 