@echo off
cls
git config --global user.name "Your Name Here"
git config --global user.email "your_email@youremail.com"
git config --global --unset gpg.format

gpg --list-secret-keys --keyid-format=long

git config --global user.signingkey 3AA5C34371567BD2
git config --global user.signingkey 4BB6D45482678BE3

git config --global commit.gpgsign true

git config --global gpg.format ssh
git config --global user.signingkey C:\Users\jmrittershaus\.ssh\id_rsa.pub

git config --global user.signingkey 0ff455a2708394633e4bb2f88002e3cd80cbd76f
git config --local user.signingkey 0ff455a2708394633e4bb2f88002e3cd80cbd76f
pause