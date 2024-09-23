@ECHO OFF
CLS
MD c:\Temp
PATH="C:\Program Files\Git\usr\bin"
set RANDFILE=c:\Temp\.rnd
copy openssl.cnf c:\Temp\openssl.cnf
set OPENSSL_CONF="c:\Temp\openssl.cnf"
echo.
openssl.exe

pause