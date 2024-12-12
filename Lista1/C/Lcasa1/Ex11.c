#include <stdio.h> 

int main()
{
	int a, b;
	printf("Valor de A: ");
	scanf("%i", &a);
	printf("Valor de B: ");
	scanf("%i", &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("O valor de A e: %i e o valor de B e %i", a, b);
}

