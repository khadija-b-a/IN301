#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define NMAX 1000

int ecrire() { int n;
printf(" donner un entier  = ");
scanf ("%d", &n); //while(n<0); 	
return n; }


int somme(int n, int m) {
int i; 
int s=0, s1=0; 
for (i=1; i<n; i++) {
	if (n % i== 0 )  s=s+i;
		}
	
for (i=1; i<m; i++) {
	
	if (m%i==0 )  s1=s1+i;}
	
if (s1==n && s==m) return 1; 
return 0; 
}

void ami () {
	int i, j; 
for (i=0; i<=NMAX; i++) {
	for (j=0; j<i; j++) {
		if (somme(i, j)==1) printf("les entiers %d et %d sont amis\n", i, j);
	
}}
}


int main () { 

/*n=ecrire(); 
m=ecrire(); */
ami();	
	
return 0; }
