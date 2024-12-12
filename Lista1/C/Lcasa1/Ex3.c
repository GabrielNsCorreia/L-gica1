#include <stdio.h>

int main()
{
	float hp, lp, ha, la, numA;
	printf("Altura da parede: ");
	scanf("%f", &hp);
	printf("Largura da parede: ");
	scanf("%f", &lp);
	printf("Altura do azulejo: ");
	scanf("%f", &ha);
	printf("Largura do azulejo: ");
	scanf("%f", &la);
	numA = (hp * lp) / (ha * la);
	printf("O numero de azulejos necessaros e %f", numA);
}
