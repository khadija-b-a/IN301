#include <stdlib.h> 
#include <stdio.h>

int main() {
	FILE *F; 
	F=fopen("nombre.data", "w"); 
	
	int i; 
	for (i=0; i<15; i++) {
		int a; 
		a= rand() %100;
	fprintf(F, "%d\n", a); 
}
fclose(F);
return 0; }
