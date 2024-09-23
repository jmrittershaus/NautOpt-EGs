/* schaltjahr.h : Definiert den Schaltjahr-Parameter-Weg */
//
#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <time.h>

 class Datum_2 {
 public:
 void setze(int Tag, int Monat, int Jahr)
 {
 int MaxTag=31;
 if ((Monat==4)||(Monat==6)||(Monat==9)||
 (Monat==11)) MaxTag=30;
 else if (Monat==2)
 {
 if (Schaltjahr(Jahr)) MaxTag=29;
 else MaxTag=28;
 }
 if ((1<=Monat) && (Monat<=12) && (1<=Tag) &&
 (Tag<=MaxTag))
 {
 Tag_=Tag;
 Monat_=Monat;
 Jahr_=Jahr;
 }
 else Fehlermeldung("Ungültiges Datum");
 }
 int Tag() { return Tag_;}
 int Monat() { return Monat_;}
 int Jahr() { return Jahr_;}
 private:
 int Tag_, Monat_, Jahr_;
 };

