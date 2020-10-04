#include <stdio.h>
#include <stdlib.h> 
#include <unistd.h>

#include "beau.h"
//#define NBVAL 100
//#define MAXVAL 1000


int main () { 
	// varibale pour accéder a un fichier 
	FILE *F;
	// nom F // Type FILE* 
	//associer un ficher du disque dur
	F=fopen("in301","w"); //premier argument nom du fichier sur le disque dur
	//deuxieme argument mode d'ouverture
	//"r": read-lcture
	//"w": write-écriture
	//test d'ouverture 
	// écriture dans le fichier 
int i;
srandom(getpid());
for (i=0; i<NBVAL; i++) {
	fprintf(F, " %10ld \n", random()%MAXVAL); }
	
	// fermeture du fichier 
	fclose(F);
	return 0;
	}
