#include <stdio.h>
#include <stdlib.h> 
#include <unistd.h>
#include <sys/types.h>
#include <unistd.h>
//la difference entre < .h> et " .h" c'est l'endroit ou le programe va chercher la libraire
// < .h> libraire commune, " .h" est une libraire personnelle
#include "constantes.h"
FILE *F; 

void ecrire() {
	F=fopen(NOMFIC, "w"); 
	int i; 
	srandom(getpid());
	for (i=0; i<N; i++) {
	fprintf(F, "%6ld\n", random()%MAX); }
	// %d en base décimale
	//%o en base 8
	//%x en base 16
	//%c afficher un caractère 
	//pour passer de la majusc a la minus il u a un bite de diff
	fclose(F); 
}

int main() {
	ecrire();
	return 0;}
