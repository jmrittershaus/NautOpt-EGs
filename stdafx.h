/* Standard HeaderFile "stdafx.h" */

/* Do our best to make sure va_copy is working */
#if defined(__NGAGE__)
#undef va_copy
#define va_copy(dst, src)   dst = src

#elif defined(_MSC_VER) && _MSC_VER <= 1800
/* Visual Studio 2013 tries to link with _vacopy in the C runtime. Newer versions do an inline assignment */
#undef va_copy
#define va_copy(dst, src)   dst = src

#elif defined(__GNUC__) && (__GNUC__ < 3)
#define va_copy(dst, src)   __va_copy(dst, src)
#endif

static const char * const telnetoptions[]=
{
  "BINARY",      "ECHO",           "RCP",           "SUPPRESS GO AHEAD",
  "NAME",        "STATUS",         "TIMING MARK",   "RCTE",
  "NAOL",        "NAOP",           "NAOCRD",        "NAOHTS",
  "NAOHTD",      "NAOFFD",         "NAOVTS",        "NAOVTD",
  "NAOLFD",      "EXTEND ASCII",   "LOGOUT",        "BYTE MACRO",
  "DE TERMINAL", "SUPDUP",         "SUPDUP OUTPUT", "SEND LOCATION",
  "TERM TYPE",   "END OF RECORD",  "TACACS UID",    "OUTPUT MARKING",
  "TTYLOC",      "3270 REGIME",    "X3 PAD",        "NAWS",
  "TERM SPEED",  "LFLOW",          "LINEMODE",      "XDISPLOC",
  "OLD-ENVIRON", "AUTHENTICATION", "ENCRYPT",       "NEW-ENVIRON"
};

static const char * const telnetcmds[]=
{
  "EOF",  "SUSP",  "ABORT", "EOR",  "SE",
  "NOP",  "DMARK", "BRK",   "IP",   "AO",
  "AYT",  "EC",    "EL",    "GA",   "SB",
  "WILL", "WONT",  "DO",    "DONT", "IAC"
};

