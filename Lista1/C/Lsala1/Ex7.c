#include <stdio.h>

int main()
{
	int coelho;
	float valor;
	printf("Entre com o numero de coelhos: ");
	scanf("%i", &coelho);
	valor = (coelho * 0.7) / 18 + 10;
	printf("Com %i coelhos, o valor de custo sera %.2f",coelho, valor);
}

