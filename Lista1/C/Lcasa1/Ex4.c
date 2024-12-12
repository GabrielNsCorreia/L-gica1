#include <stdio.h>

int main()
{
	float a, b, A, P;
	printf("Medida lado a: ");
	scanf("%f", &a);
	printf("Medida lado b: ");
	scanf("%f", &b);
	A = a * b;
	P = 2*a + 2*b;
	printf("Area: %.2f \n Perimetro: %.2f", A, P);
}

