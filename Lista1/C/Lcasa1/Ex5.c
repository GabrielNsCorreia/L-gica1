#include <stdio.h>

int main()
{
	float m, h, imc;
	printf("Massa: ");	
	scanf("%f", &m);
	printf("Altura: ");
	scanf("%f", &h);
	imc = m / h * h;
	printf("IMC: %.2f", imc);
}

