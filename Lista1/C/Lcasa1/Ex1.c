#include <stdio.h>

int main()
{
	float real, dolar;
	printf("Valor em real: ");
	scanf("%f", &real);
	dolar = real / 2.4;
	printf("%f reais e igual a %f dolares", real, dolar);
}
