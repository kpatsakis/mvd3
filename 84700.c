static int CVE_2012_4530_VULN_load_script(struct linux_binprm *bprm,struct pt_regs *regs) char * cp , * i_name , * i_arg ; char interp [ BINPRM_BUF_SIZE ] ; if ( ( bprm -> buf [ 0 ] != '#' ) || ( bprm -> buf [ 1 ] != '!' ) || ( bprm -> recursion_depth > BINPRM_MAX_RECURSION ) )  bprm -> recursion_depth ++; bprm -> file = NULL; bprm -> buf [ BINPRM_BUF_SIZE - 1 ] = '\0'; if ( ( cp = strchr ( bprm -> buf , '\n' ) ) == NULL )  cp = bprm -> buf + BINPRM_BUF_SIZE - 1; * cp = '\0'; while ( cp > bprm -> buf )  cp --; if ( ( * cp == ' ' ) || ( * cp == '\t' ) )  * cp = '\0'; for (cp = bprm->buf+2; (*cp == ' ') || (*cp == '\t'); cp++); if ( * cp == '\0' )  i_name = cp; strcpy ( interp , i_name ); bprm -> interp = interp; file = open_exec ( interp ); if ( IS_ERR ( file ) )  return PTR_ERR ( file ) ; bprm -> file = file; retval = prepare_binprm ( bprm ); if ( retval < 0 )  return retval ; return search_binary_handler ( bprm , regs ) ; 