#ifndef __DNSTEST_MAIN_H
#define __DNSTEST_MAIN_H

typedef enum RESOLVER_STATUS {
    DNS_BLOCKED,
    DNS_RESOLVED,
    DNS_UNRESOLVED
} RESOLVER_STATUS;

RESOLVER_STATUS resolveConnHostname(const char* connhostname);
RESOLVER_STATUS resolveHostname(const char* hostname);
void checkHostnames();

#define CONNECTION_REDIRECT_ADDRESS_USA "207.246.121.77"
#define CONNECTION_REDIRECT_ADDRESS_FRANCE "163.172.141.219"
#define CONNECTION_REDIRECT_ADDRESS_SELFHOST "95.216.149.205"

// List of connection hostnames to test
const char *connectionhostnames[] = {
    "conntest.nintendowifi.net",
    "ctest.cdn.nintendo.net",
    "cloudflare.com",
    "example.com",
    "fortheusers.org",
    "github.com",
    "google.com",
    "nist.gov",
    "ntp.org"

};

// List of hostnames to test
const char *hostnames[] = {
    "nintendo.ch",
    "nintendo.com",
    "nintendo.dk",
    "nintendo.fi",
    "nintendo.gr",
    "nintendo.hu",
    "nintendo.no",
    "nintendo.pl",
    "nintendo.se",
    "nintendoswitch.cn",
    "nintendoswitch.com",
    "nintendoswitch.com.cn",
    "sun.hac.lp1.d4c.nintendo.net"
};

#endif