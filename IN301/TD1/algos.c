#include <stdio.h>
#include <stdlib.h> 
#include <unistd.h>

#include "constantes.h"
#define AUTRE_FIC "nombres-verif.data"

int NB;
int T[N]; 
void lecture (){
	FILE *F; 
	F=fopen(NOMFIC, "r"); 
	int i; 
	for( i=0; i<N; i++) {
	int val;
	fscanf(F, "%d", &val);
	T[i]=val; 

	}
	 
	fclose(F); 
}

void ecriture () 
{FILE *F; 
	F=fopen(AUTRE_FIC, "w"); 
	int i; 
	srandom(getpid());
	for (i=0; i<N; i++) {
	fprintf(F, "%6d\n", T[i]); }
	fclose(F); 
}

int recherche( int x) {
	NB=0; 
	int i; 
	for (i=0; i<N; i++) { NB++;
	if (T[i]==x) return 1; }
	return 0;
}

int main() {
	lecture();
	ecriture(); 
	recherche(23);
	printf("nombre de comparaison = %d", NB);
	return 0;
}
