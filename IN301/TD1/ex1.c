#include <stdio.h>

void dessine () {
	int i, k;
	for (i=9; i>=0; i--) 
	{for (k=0; k<=i; k++){
	printf(" "); }
	printf("*\n");	}
	}

	
int main (){
dessine();
return 0; 	
} 
