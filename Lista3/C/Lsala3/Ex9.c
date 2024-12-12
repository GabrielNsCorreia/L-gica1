#include <stdio.h>
#include <math.h>

main()
{
	int n, m, result;
	printf("Entre com a base: ");
	scanf("%i", &n);
	printf("Entre com o expeonte: ");
	scanf("%i", &m);
	result = pow(n, m);
	printf("%i elevado a %i = %i", n, m, result);
}

