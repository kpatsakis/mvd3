int pam_conv_func(int num_msg, const struct pam_message **msg, struct pam_response **resp, void *appdata_ptr) if ( 0 >= num_msg && num_msg > PAM_MAX_NUM_MSG )  * resp = calloc ( num_msg , sizeof * * resp ); if ( ! * resp )  switch ( msg [ i ] -> msg_style )  ( * resp ) [ i ] . resp = getpass_r ( msg [ i ] -> msg ); char * getpass_r(const char *prompt) fprintf ( stderr , "%s" , prompt ); if ( ( * resp ) [ i ] . resp == NULL )  if ( ( * resp ) [ j ] . resp != NULL )  my_memset_s ( ( * resp ) [ j ] . resp , 0 , strlen ( ( * resp ) [ j ] . resp ) ); char *my_memset_s(void *s, int c, size_t n) volatile uint8_t * p = ( uint8_t * ) s ; while ( n -- )  * p ++ = c; return s ; free ( ( * resp ) [ j ] . resp ); my_memset_s ( * resp , 0 , num_msg * sizeof * * resp ); char *my_memset_s(void *s, int c, size_t n) volatile uint8_t * p = ( uint8_t * ) s ; while ( n -- )  * p ++ = c; return s ; * resp = NULL; fputs ( msg [ i ] -> msg , stderr ); fputs ( msg [ i ] -> msg , stdout ); 