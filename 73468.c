cups_file_t *				/* O - CUPS file or @code NULL@ if the file or socket cannot be opened CVE_2010_2431_VULN_cupsFileOpen(const char *filename,	/* I - Name of file const char *mode)		/* I - Open mode */ int fd ; if ( ! filename || ! mode || ( * mode != 'r' && * mode != 'w' && * mode != 'a' && * mode != 's' ) || ( * mode == 'a' && isdigit ( mode [ 1 ] & 255 ) ) )  switch ( * mode )  fd = open ( filename , O_WRONLY | O_TRUNC | O_CREAT | O_LARGEFILE | O_BINARY , 0666 ); if ( ! httpAddrConnect ( addrlist , & fd ) )  if ( fd < 0 )  if ( ( fp = cupsFileOpenFd ( fd , mode ) ) == NULL )  closesocket ( fd ); close ( fd ); return ( fp ) ; 