int create_dns_file() unsigned char buf [ 200 ] ; unsigned char * p ; char * temp ; int i , len = 0 ; p = buf; temp = "HEADER JUNK:"; len += strlen ( temp ); while ( * temp != '\0' )  * p ++ = * temp ++; temp = "LL.MIT.EDU"; len += strlen ( temp ); len += 4; len += strlen ( temp ); len += 11; len += strlen ( temp ); for(i=0; i<len; i++, p++) return len ; 