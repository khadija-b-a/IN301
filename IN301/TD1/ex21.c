#include <stdlib.h> 
#include <stdio.h>

char caractere() { char c;
	printf(" entrez un caractere: "); 
	scanf("%c", &c);
	return c;}

int main () {
	char c; 
	c=caractere();
	printf("%d est le code ASCII de %c\n", c, c);
	return 0;}
