#include <stdio.h>
#include <stdlib.h> 
int n; 
void entier() { 
	printf(" entrez un entier: "); 
	scanf("%d", &n);}
	
int heure () {int h; 
	h=n/3600; 
	n=n-h*3600;
return h;}

int minute () {int m; 
	m=n/60; 
	n=n%60;
return m;}


int main () { int h, m; 
	entier();
	printf(" %d correspond a ", n);
	h=heure(); 
	m=minute();
	printf(" %d heure(s), %d minute(s) et %d seconde(s)\n", h, m, n);
	return 0;}
