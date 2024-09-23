@echo off
cls
set RANDFILE=c:\Temp\.rnd
set OPENSSL_CONF=openssl.cnf
echo.
echo Achtung irreperable gemeinheiten..
goto manual

:generateca
openssl genrsa -out ca.key 4096
openssl req -new -x509 -days 1826 -key ca.key -out ca.crt

openssl genrsa -out ia.key 4096
openssl req -new -key ia.key -out ia.csr
openssl x509 -req -days 730 -in ia.csr -CA ca.crt -CAkey ca.key -set_serial 01 -out ia.crt
openssl pkcs12 -export -out ia.p12 -inkey ia.key -in ia.crt -chain -CAfile ca.crt
openssl x509 -in ia.crt -noout -text
openssl pkcs12 -nokeys -in ia.crt -export -out cert.pfx -name AuthSec

openssl rsa -in server-rsa-key.pem > server-key.pem

:manual

pause