#include <stdio.h> 

int main()
{
	float n;
	printf("Entre com a nota: ");
	scanf("%f", &n);
	int arredondamento = round(n);
	printf("Apos o arredondamento a nota sera: %i", arredondamento);
}

