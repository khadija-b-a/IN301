#include <stdlib.h> 
#include <stdio.h>
#include <unistd.h>

#define N  13

int t[N];

void remplir() { int i; 
for (i=0; i<N; i++) {
printf("donner la valeur de T[%2d] = ", i);
scanf("%d", &t[i]);	
}
}

/*void remplir () { int i; 
for (i=0; i<N; i++) {
t[i]=rand() % 10;
}	
}*/

void affichage () { int i;
for (i=0; i<N; i++) {
printf("%d |", t[i]);	
}
printf("\n");
} 

void multiplication() { int i, s=1;
	for (i=0; i<N; i++) {
	s=s*t[i];}
	printf("la multipliction des entiers du tableau est = %d\n", s);
}

void minimum() { int i, min=t[0];
	for (i=0; i<N; i++) {
	if (min>t[i]) min=t[i];}
	printf("le minimum des entiers du tableau est = %d\n", min);
}

void decalage() { int i;
	t[N-1]=0;
	for (i=N-1; i>=1; i--) {
		t[i]=t[i-1];	
	}
	t[0]=0;
	affichage();
}

void inversion() { int i, c;
	for (i=0; i<=(N/2); i++) {
		c=t[i];
		t[i]=t[N-i-1]; 
		t[N-i-1]=c;	
	}
	affichage();
}

void decoupage() { int i=0,  y=0; 
float s=0; 
while (i<N) {
if (t[i]!=0) {
int j=0; 
while(t[i+j]!=0) j++;	
int m=1, k; 
for(k=i; k<i+j; k++) {m=m*t[k];}
s=s+m; 
printf(" s= %f\n", s);
y++;	
 
i=i+j+1;}
else i++;
} 
s=s/y;
printf(" la moyenne des produits du tableau T est = %f\n", s);
}

int main () {
srandom(getpid());
remplir(); 
affichage(); 
//multiplication();	
//minimum();
//decalage();
decoupage();
inversion();

return 0;
}
