#include <stdlib.h> 
#include <stdio.h>

int ecrire() { int n;
printf(" donner un entier N = ");
scanf ("%d", &n); 	
return n; }

int factorielle (int n)
{
int f;
if (n <= 1)
f = 1;
else
f = n * factorielle(n-1);
return f;
}

int main () {int n;
n=ecrire();
int f;
f= factorielle(n); 
printf(" factorielle de %d est = %d\n", n, f); 
return 0;}
