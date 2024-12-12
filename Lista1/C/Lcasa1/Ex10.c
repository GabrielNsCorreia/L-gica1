#include <stdio.h> 

int main()
{
	int a, b, c;
	printf("Valor de A: ");
	scanf("%i", &a);
	printf("Valor de B: ");
	scanf("%i", &b);
	c = a;
	a = b;
	b = c;
	printf("O valor de A e: %i e o valor de B e %i", a, b);
}

