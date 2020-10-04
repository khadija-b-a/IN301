#include <stdio.h>
#include <stdlib.h> 

int n; 

void ecrire() {
printf(" ecrire entier n = ");
scanf("%d", &n);  	
}

int premier() {int i=2; 
while ( i<n)
	{if ( (n%i)==0) return 1;
		i++;
	}	
	return 0;
}

int main () {
	ecrire(); 
	if (premier()==0) {printf("%d est un entier premier\n", n); }
	else { printf("%d n'est pas un entier premier\n", n);}
	return 0; 
}
