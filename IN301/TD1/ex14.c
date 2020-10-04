#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


#define N 0.001

void racine() {
int i=2; 
float s, s1 ;	
s=1;
s1=(1.00/4); 
printf("S 1 est %.4f\n", s);
printf("S 2 est %.4f\n", s1);
while (fdimf(s, s1)>=N)
{i++; 
s=s1; 
s1=(1.00/(i*i));	
printf("S%2d est %.4f\n", i, s1);
} 	
}



int main() {
	racine();
	return 0;}
