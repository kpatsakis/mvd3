static void goodG2B() char * data ; char * & dataRef = data ; char dataBuffer [ 256 ] = "" ; data = dataBuffer; strcat ( data , "Doe, XXXXX" ); char * data = dataRef ; char filter [ 256 ] ; _snprintf ( filter , 256 - 1 , "(cn=%s)" , data ); searchSuccess = ldap_search_ext_sA ( pLdapConnection , "base" , LDAP_SCOPE_SUBTREE , filter , NULL , 0 , NULL , NULL , LDAP_NO_LIMIT , LDAP_NO_LIMIT , & pMessage ); if ( searchSuccess != LDAP_SUCCESS )  