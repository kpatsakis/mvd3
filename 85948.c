void NetworkUtils::enableNat(CommandChain* CommandCallback NetworkResultOptions& aResult) char command [ MAX_COMMAND_SIZE ] ; if ( ! GET_FIELD ( mIp ) . IsEmpty ( ) && ! GET_FIELD ( mPrefix ) . IsEmpty ( ) )  uint32_t prefix = atoi ( GET_CHAR ( mPrefix ) ) ; uint32_t ip = inet_addr ( GET_CHAR ( mIp ) ) ; char * networkAddr = getNetworkAddr ( ip , prefix ) ; static char* getNetworkAddr(const uint32_t ip, const uint32_t prefix) mask = ~mask << ( 32 - prefix ); mask = htonl ( mask ); subnet = ip & mask; struct in_addr addr ; addr . s_addr = subnet; return inet_ntoa ( addr ) ; snprintf ( command , MAX_COMMAND_SIZE - 1 , "nat enable %s %s 1 %s/%s" , GET_CHAR ( mInternalIfname ) , GET_CHAR ( mExternalIfname ) , networkAddr , GET_CHAR ( mPrefix ) ); 