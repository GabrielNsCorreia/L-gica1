#include <stdio.h>

int main()
{
	float real, dolar;
	printf("Valor em dolar: ");
	scanf("%f", &dolar);
	real = dolar * 2.4;
	printf("%f dolares e igual a %f reais", dolar, real);
}
