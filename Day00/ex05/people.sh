ldapsearch -H ldap://ldap-master.42.us.org -LLL "(uid=z*)" | grep ^cn | cut -c 5- | sort -r --ignore-case


