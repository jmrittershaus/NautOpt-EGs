/* Standard HeaderFile named "till.h" Definition was "_till_h" !!! */
#pragma once

#include <stdio.h> /* printf, sprintf */
#include <time.h> /* Zeit Funktionen */
#include <stdlib.h> /* exit, atoi, malloc, free */
#include <string.h> /* memcpy, memset */
#include <unistd.h> /* read, write, close */
/* ToDo #include "config_parser/config_parser.h" /* Configuration Header */
#include "network/net_skeleton.h"
#include <windows.h>

/* #include <bool.h> */
#include <sys/types.h>

#include <process.h>
#include <errno.h>
#include <fcntl.h>
/*
#include <netdb.h>
*/
#include <pthread.h>
#include <stdarg.h>
#include <unistd.h>
/*
#include <arpa/inet.h>  // For inet_pton() when NS_ENABLE_IPV6 is defined
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/select.h>
*/

#ifdef _till_h_net
#define closesocket(x) close(x)
#define __cdecl
#define INVALID_SOCKET (-1)
#define to64(x) strtoll(x, NULL, 10)
typedef int sock_t;
#include <sys/socket.h> /* socket, connect */
#include <netinet/in.h> /* struct sockaddr_in, struct sockaddr */
#include <netdb.h> /* struct hostent, gethostbyname */
#include <arpa/inet.h>
#endif

