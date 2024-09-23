/* Main Sourcecode File for NautOpt-EGs to Run! */
#include "stdafx.h"
#include "till.h" 

const float Pi = 3.1416f;

void _Version() {
	printf("Sch0ckW0rld! Version 0.53a\n");
	printf("Was ist eigentlich das Kaputt?\n");
}

int das_system() {
 	printf("ENGLISH: but i gave you life what else but you do...\n");
 	printf("ENGLISH: to do what was right, im perfect are you\n");
 	return 2;
}

int rand_1() { 
 	int summe=5;
 	summe++;
 	printf("make %d output\n", summe);
 	summe++;
 	printf("make %d output\n", summe);
 	summe++;
 	printf("make %d output\n", summe);
 	return summe;
}

int deamon_func() {
	printf("Starts in Deamon Mode..\n");
return 1;
}

int show_m3() 
{ 
 	printf("GERMAN : Vorne etwas rund mit zusammen laufender Schale.\n");
return 1;
} 

int _cli_ent_home() 
{ 
 	printf("GERMAN : Vorne etwas rund mit zusammen laufender Schale.\n");
return 1;
} 

int _srv_ent_point() {
	printf("RUN _srv_ent_point..\n");
	return 1;
}

int _SeRVer_int() {
	printf("Starts in Server Side Mode..\n");
	
	/* show_m3(); */
	return 1;
}

int _smizze(int cmdarg) {
	int a=0;
	int summq=0;
	
	// Deklaration von normalgroﬂer Kommazahl
	float kommazahl;
	char zeichen;
	char b, c, temp;

	// a mit Inkrement-Operator hochz‰hlen
	a++;
	
	zeichen = 'A';

	// Wert zuweisen
	kommazahl = 12.3456;

	printf("RUN _smizze..\n");
	// Ausgabe
	printf("Kommazahl: %f\n", kommazahl);
	printf("Zeichen: %c\n", zeichen);

	printf("\nGeben sie ein Zeichen ein: ");
	scanf("%c%c", &a, &temp);

	printf("\nGeben sie ein Zeichen ein: ");
	scanf("%c%c", &b, &temp);
	printf("\nDie ASCII-Codes ihrer Zeichen sind %d und %d\n", a, b);
	
	if(summq==5) {
	printf("Can NOT make!\n");
	} else {
	system("cmd.exe");
	}
	return 1;
}

int do_exit(int do_exit_x) {
	printf("RUN DO_EXIT..\n");
	return do_exit_x;
}

int multi_bail() {
	printf("RUN MULTIBAIL..\n");
	return 1;
}

#ifdef _WIN32
BOOL WINAPI
sighandler(int signum)
{
	int do_exit=0;
	if (CTRL_C_EVENT == signum) {
		do_exit++;
		multi_bail();
		return TRUE;
	}
	return FALSE;
}
#else
static void sighandler(int signum)
{
	do_exit++;
	multi_bail();
}
#endif

int do_login(int login) {
	/* int loginname=0,pwdinpt; */
	char pwdinpt=0;
	printf("Access Password: ");
	scanf("%d", pwdinpt);
	return pwdinpt;
}

int _chknme(int argc, char *argv[]) { 
 	time_t time( time_t *time );
 
 	// char tmpq1 = 0;
 	char Name1_[] = "Idefixit";
 	char Name2_[] = "Muellair";
 	char Gebd1_[] = "00000000";
 	char poinh_[] = "-1";
 	// char wert1_[20] = "Muster";
 	// char wert2_[20] = "Wert";
 
printf("Gebe nun deinen Vor- und Nach-Namen ein, plus dein Geburtsdatum!\n");
printf(".....................................\n");
printf(".......... UPDATE SOFTWARE ..........\n");
printf(".....................................\n");
rand_1();
printf("Vorname: ");
scanf("%s", Name1_);
printf("Nachname: ");
scanf("%s", Name2_);
printf("Geburtsdatum (14.06.20XX): ");
scanf("%s", Gebd1_);
printf("Name lautet: %s %s\n",Name1_,Name2_);
printf("Geburtstag: %s\n",Gebd1_);
printf("All Things %s Right..\n", poinh_);
return 1;
}

int birthdate() {
	int tag, monat, jahr;
	printf("Bitte geben Sie ihr Geburtsdatum ein [TT.MM.JJJJ]: ");
	scanf("%d.%d.%d", &tag, &monat, &jahr);
	printf("\nIhr internationales Geburtsdatum: %04d-%02d-%02d\n", jahr, monat, tag);
	return 1;
}

int basteln(int argc, char *argv[]) 
{ 
 	/* time_t time( time_t *time );
	time_t now; 
	now = time(0); 
	printf("%c\n", time(&now));
	*/
	
	time_t time( time_t *time );
	time_t now;
	now = time(0);
	printf("%s\n", ctime(&now));
	
    // fprintf("Sekunden seit 01.01.1970 00:00:00 Uhr: %d\n", now);

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

    	//check_pawrd (Rind mit Zwiebel und Br√∂tchen.. √∂hm Steak odda "kaubar" !
		// inp_zif();
		return alter;
	/*
    //}  
		//exit(EXIT_FAILURE); 
		//return EXIT_SUCCESS;
	*/
}

float multipliziere(float zahl1, float zahl2) {
	return (zahl1 * zahl2);
}
 
void ausgabeErgebnis(float ergebnis) {
	printf("\nErgebnis: %f\n", ergebnis);
}

int _MACTtime(int argc, char *argv[]) { 
	time_t time( time_t *time );
	time_t now;
	now = time(0);
	printf("%s\n", ctime(&now));
	int c;
  	printf("Text of Input arguments: %d\n", argc);
  	for (c = 0; c < argc; c++)
    printf("%d argument is %s\n", c + 1, argv[c]);
	printf("\n\n");
	return 0;
}

int ids_main(int argc, char** argv[]) { 
	time_t time( time_t *time );
	char input = 0;
	time_t now;
	now = time(0);
	printf("%s\n", ctime(&now));
 	printf("-----------------------------------------------\n");
 	// printf("%c\n", &now);
	printf("Press q to quit, press a to see About.\n");
	while(1) {
		if(scanf("%c",&input) == 1) {
			if(input == 'a') {
				_Version();
			} else if(input == 'q') {
				break;
			} else if(input != '\n') {
				printf("Unknown command '%c'! Ignoring...\n",input);
			}
		} else {
			printf("Invalid input! Ignoring...\n");
		}
	}
	// _cmdrun_(argc, argv);
 	printf("-----------------------------------------------\n");
	return 1;
}

int zeigzeit() { 
	/* Uhrzeit Anzeige Grafisch */
	time_t time( time_t *time );
	time_t now;
	now = time(0);
	printf("%s\n", ctime(&now));
 	// printf("%c\n", time);
	return(now);
}

int main(int argc,char* argv[]) 
{
	int c; 
	// int tag=1, monat=8, jahr=2024;
	char input = 0;
	int *cmdarg;
 	char loginname=0;
	char pwdinpt=0;
	
	// time_t time( time_t *time );
	
	time_t now;
	time(&now);
	printf("Seconds by 01.01.1970 00:00:00 Clock: %d\n", now);
	printf("Current Time: ");
	zeigzeit();
	
	// ToDo..
	// printf("Current Date: %02d.%02d.%4d\n", tag, monat, jahr);
	
 	printf("----------------------------------------------------------------\n");
	
	/* Have stored by Input */
  	printf("Text of Input arguments: %d\n", argc); 
  	for (c = 0; c < argc; c++) 
    printf("%d argument is %s\n\n", c + 1, argv[c]);  
	
 	printf("----------------------------------------------------------------\n");
	
	/* Configuration Section
    struct config_t * conf = deserialize_config("./config.ini");
    char * value = lookup_value(conf, "SECTION A", "key1");
    printf("%s\n", value);
    value = lookup_value(conf, "VERSION", "key1");
    printf("%s\n", value);
	*/

	FILE *fptr;
	// Open a file in read mode
	fptr = fopen("motd.see", "r");
	// Store the content of the file
	char myString[100];
	// If the file exist
	if(fptr != NULL) {
	// Read the content and print it
	while(fgets(myString, 100, fptr)) {
	printf("%s", myString);
	}
	// If the file does not exist
	} else {
	printf("Not able to open the file.\n");
	}
	// Close the file
	fclose(fptr);

	printf("\n\n");
	
 	/* do_login(); */
	printf("Please Login..\n");
	do_login(1);
 	
 	/* Kill Jump Enter.. */
 	// do_exit(1);
 	
	printf("Is this a pur Console Application?\n");
	printf("Put y to YES or n for NO..\n");
	while(1) {
		if(scanf("%c",&input) == 1) {
			if(input == 'y') {
			//	_cmdrun_(argc, *argv);
				_SeRVer_int();
			} else if(input == 'n') {
				// _chknme(argc,*argv);
				deamon_func();
 				_cli_ent_home();
			} else if(input == 'q') {
				break;
			} else if(input != '\n') {
				printf("Unknown command '%c'! Ignoring...\n",input);
			}
		} else {
			printf("Invalid input! Ignoring...\n");
		}
	}
	/* _MACRN(argc,**argv); */
 	printf("-----------------------------------------------\n");
	printf("Press q to quit, press a to see About\n");
	printf("and b to make Input and c for People's' Input Save.\n");
	printf("s starts the Server, to make Input and c for People's' Save.\n");
	while(1) {
		if(scanf("%c",&input) == 1) {
			if(input == 'a') {
				_Version();
			} else if(input == 'b') {
				// _chknme(argc,*argv);
				_cli_ent_home();
			} else if(input == 'c') {
				// _chknme(argc,*argv);
				_cli_ent_home();
			} else if(input == 's') {
				_srv_ent_point();
			} else if(input == 'y') {
				_smizze(1);
			} else if(input == 'q') {
				break;
			} else if(input != '\n') {
				printf("Unknown command '%c'! Ignoring...\n",input);
			}
		} else {
			printf("Invalid input! Ignoring...\n");
		}
	}
  return EXIT_SUCCESS;
}

