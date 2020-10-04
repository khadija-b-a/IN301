#include <stdlib.h> 
#include <stdio.h>
#include <unistd.h>
#include <math.h>

#define N  10

void racine() {int i; 
	float m;
for(i=1; i<=N; i++) {
m=sqrtf(sqrtf(i)+m);
printf(" la %d eme valeur de la suit est %f\n", i, m);	
}	
}

int main () {
racine();	
return 0; }
