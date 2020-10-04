#include <stdlib.h> 
#include <stdio.h>

int  u; 

int ecrire() {
printf(" donner premier terme de la suite U0: ");
scanf ("%d", &u); 	
return 0; }

void suite() {int i=0;
while(u!=1) {
		if ((u % 2) == 0) u=u/2; 
		else u=3*u+1;
		i++;
printf("le %d ème terme de la suite est : %d\n",i, u);	
}
}

int main() {
ecrire(); 
suite();	
return 0; }
