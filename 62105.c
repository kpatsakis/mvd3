static int CVE_2011_3619_PATCHED_apparmor_setprocattr(struct task_struct *task, char void *value, size_t size) char * command , * args = value ; if ( size == 0 )  if ( args [ size - 1 ] != '\0' )  if ( size == PAGE_SIZE )  args [ size ] = '\0'; if ( current != task )  args = value; args = strim ( args ); command = strsep ( & args , " " ); if ( ! args )  args = skip_spaces ( args ); if ( ! * args )  if ( strcmp ( name , "current" ) == 0 )  if ( strcmp ( command , "changehat" ) == 0 )  if ( strcmp ( command , "permhat" ) == 0 )  if ( strcmp ( command , "changeprofile" ) == 0 )  if ( strcmp ( command , "permprofile" ) == 0 )  if ( strcmp ( command , "permipc" ) == 0 )  