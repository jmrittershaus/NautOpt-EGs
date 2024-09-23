/* 
* Jan M. Rittershaus <rittershaus13@gmail.com> 
*/ 
 
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <time.h> 
/* 
#include <sys/types.h> 
#include <arpa/inet.h> 
*/ 
 
#include "till.h" 
unsigned char kinpu ='h'; 

#ifdef _netOptions
int client_t; 
char client_t *clients[MAX_CLIENTS]; 
#endif 
 
int ___date_() { 
 	char curdate[9]; 
 	time_t now; 
 	struct tm *tm_now; 
 	time(&now); 
 	tm_now=localtime(&now); 
 	strftime(curdate, sizeof(curdate), "%Y%m%d", tm_now); 
 	printf("%s\n", curdate); 
} 
 
int debugde() { 
 
 	printf(""); 
 	return; 
} 
 
/* int time()+1*24*60*60*60); */ 
int arraylis() 
{ 
    int array[100], n, c; 
   
    printf("Enter number of elements in array\n"); 
    scanf("%d", &n); 
   
    printf("Enter %d elements\n", n); 
   
    for (c = 0; c < n; c++) 
        scanf("%d", &array[c]); 
   
    printf("The array elements are:\n"); 
   
    for (c = 0; c < n; c++) 
        printf("%d\n", array[c]); 
   
    return 6; 
} 
 
int _malob_() /* MainLoop Order Values */ { 
 
 	printf("Execute the MainLoop Order Values...\n"); 
 
 	int c, s, d, a, m; /* This are the Init  */ 
	a=c, c=d, a+d; 
	s = 1000009; 
 	printf("The C-Value its %d\n", c); 
 	printf("The A-Value its %d\n", a); 
 	printf("The M-Value its %d\n", m); 
 	printf("The D-Value is never been seei'n\n\n"); 
 
 	/* printf("DEBUG HINT TWO\n"); */ 
 
 return 0; 
} 
 
int itsTime() { 
 
	/* printf("time value was set to %c", c_time_ ); 
	printf("time: %s\n", ctime); */
 
 	printf("octal time : %o\n", time ); /* octal */ 
 	printf("hexdecimal time : %x\n", time ); /* hexdecimal */ 
 	printf("decimal time : %d\n", time ); /* decimal */ 
 	printf("double or float time : %f\n\n", time ); /* double or float */ 
 return 0; 
} 
 
void str_overwrite_stdout() { 
    printf("\r%s", "> "); 
    fflush(stdout); 
} 
 
static int hinther( VOID ) { 
 	printf("Hans Werner Meyer (Das System/978-3-7466-2367-2)");
 	printf("18:01 09.09.2022"); 
 	printf("Sie sind etwa genau, etwas grösser als andere, der gleichen Herkunft und haben 'mittig' ein Mal von 'Den Gezeiten'."); 
 	printf("Vorne etwas rund mit zusammen laufender Schale."); 
 	printf("22:19 23.09.2022"); 
 	printf("Mir ist grade eingefallen, dass wenn es heißt, mach mal 'eine Ansage', es auch eine Rügung gegen (TARGET) ?!??"); 
 	printf("22:20 23.09.2022"); 
 	printf("Das wenn es heißt, etwas, ja nicht beständig sein muss!!!\nNULLLINE\n"); 
 return 2; 
} 
 
int show_m2() 
{ 
 	printf("Eine Niederlage ist ja auch ein Sieg nich(t) . . .\n"); 
} 
  
int show_m3() 
{ 
 	printf("but i gave you life what else but you do...\n"); 
 	printf("to do what was right, im perfect are you\n"); 
} 
 
int maRCN(int argc, char *argv[]) { 
 
	time_t now; 
	now = time(0); 
	printf("%s\n", ctime(&now)); 
 
	int c; 
  	printf("Text of Input arguments: %d\n", argc); 
  	for (c = 0; c < argc; c++) 
    printf("%d argument is %s\n", c + 1, argv[c]);  
	printf("\n\n"); 
	return 2; 
}
  
float multipliziere(float zahl1, float zahl2) {
	return (zahl1 * zahl2);
}
 
void ausgabeErgebnis(float ergebnis) {
	printf("\nErgebnis: %f\n", ergebnis);
}
 
/* 
int rand_1() { 

 	int a,b,c,summe0=0;
 	return 0;
}
*/ 
 
int check02(int argc, char *argv[]) { 
 
	int c,e,h,i; 
 	int summe1 = 1; 
 	char tmpq1 = 0;
 	char Name1[] = "Idefixis";
 	char Name2[] = "Mueller";
 	char Gebd1[] = "00000000";
 	char poinh[] = "-1";
 	char wert1[20] = "Muster";
 	char wert2[20] = "Wert";
 
printf("Gebe nun deinen Vor- und Nach-Namen ein, plus dein Geburtsdatum!\n");
printf("Vorname: ");
scanf("%s", Name1);
printf("Nachname: ");
scanf("%s", Name2);
printf("Geburtsdatum (31.12.20XX): ");
scanf("%s", Gebd1);

printf("Name lautet: %s %s\n",Name1,Name2);
printf("Geburtstag: %s\n",Gebd1);

/*
switch(kinpu)
{
case 'n':
printf("Jetzt kannst Du deine Angaben wiederholen.\n");
printf("Gebe nun deinen Vor- und Nach-Namen ein, plus dein Geburtsdatum!\n");
printf("Vorname: ");
scanf("%s", Name1);
printf("Nachname: ");
scanf("%s", Name2);
printf("Geburtsdatum (31.12.20XX): ");
scanf("%s", Gebd1);
break; 

case 'j':
printf ("Eingaben wurden angenommen.\n");
break;

case 'h':
printf("user wants help\n");
break;

default :
printf ("Unbekannter Eingabefehler: %c\n",kinpu);
} 
 
if( Name1 ) {
e=10+h;
} 

float x = 2.0f;
else
tmpq1=Name1;
if ((poinh)) for(i=0; i<10; i++) { printf("%d\n", i); else tmpq1=poinh;
strcat(wert1, wert2);
 
scanf("%d", &ii);
*/ 
h=summe1;
printf("%d\n", i);
printf("Programm Status %d\n",e);

return 0;
} 
 
int basteln(int argc, char *argv[]) 
{  
	time_t now; 
	now = time(0); 
    printf("Sekunden seit 01.01.1970 00:00:00 Uhr: %d\n", now);
	
	printf("%s\n", ctime(&now));

	int alter; 
	printf("Wie alt sind sie? "); 
	scanf("%d", &alter); 

	//if ( YUORYAER => "21" ) 
	//if ( &alter >= "21" ) 
    //{ 
		printf("\nIn %d Jahren sind Sie 100!\n", 100-alter); 
		getchar(); 
				
		// Random Nummer 
		//just_rdr(); 

    	//check_pawrd (Rind mit Zwiebel und Brötchen.. öhm Steak odda "kaubar" !
		inp_zif();
		return wunsch();
    //}  
		//exit(EXIT_FAILURE); 
		//return EXIT_SUCCESS;
return 0; 
} 

