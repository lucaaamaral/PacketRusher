#include <linux/kernel.h> 
#include <linux/types.h>

#include "util.h"

void ip_string(char * ip_str, __be32 ip_int){
    sprintf(ip_str, "%i.%i.%i.%i",
          (ip_int) & 0xFF,
          (ip_int >> 8) & 0xFF,
          (ip_int >> 16) & 0xFF,
          (ip_int >> 24) & 0xFF);
}

void ipv6_string(char *ip_str, __be16 addr[8])
{
    sprintf(ip_str, "%04x:%04x:%04x:%04x:%04x:%04x:%04x:%04x",
             ntohs(addr[0]),
             ntohs(addr[1]),
             ntohs(addr[2]),
             ntohs(addr[3]),
             ntohs(addr[4]),
             ntohs(addr[5]),
             ntohs(addr[6]),
             ntohs(addr[7]));
}