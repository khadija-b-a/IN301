#include <stdlib.h> 
#include <stdio.h>

#define N 15
int t[N]; 
int b[N];
int q[10];

int k=0; 

void remplir() {
	srandom(getpid());
	int i; 
	for (i=0; i<N; i++) {
	t[i]= rand() %100;	
	}
}

void ecrire() {
	int i; 
	for( i=0; i<N; i++) {
	printf(" la valeur de T[%2d] est %2d\n", i, t[i]);	
	}
	printf("\n");}


int diff(int i, int j) {
for (j=0; j<i; j++) {
	if (t[i]==t[j]) return 1;}	
	
return 0; }	
	
void verif() {
	int s=0, i, j;
for (i=0; i<N ; i++) {
j=i; 
if (diff(i, j)==0) {s=s+1;
	b[k]= t[i]; 
	k++;	
	} 	
}
printf("le nombre des valeurs differentes de ce tableau est %d\n", s);	
 }
 
void nouveau() {
int i; 
	for( i=0; i<k; i++) {
	printf(" la valeur de T[%2d] est %2d\n", i, b[i]);	
	}	
	printf("\n");
}

void reste(){
	int i, s; 
	for(i=0; i<N; i++) {
	s=t[i]%10;
	q[s]++;	
	}	
}

void affiche() {
int i; 
	for( i=0; i<10; i++) {
	printf(" le nombre de valeurs dont le reste de la division par 10  est %2d est %2d\n", i, q[i]);	
	}
	printf("\n");}	
	


int main (){
	remplir(); 
	ecrire();
	verif(); 
	nouveau();
	reste(); 
	affiche();
	return 0;}
