#include <stdio.h>
#define quadrado(x) ((x)*(x))

main()
{
	int i, n, soma = 0;
	printf("Entre com o ultimo numero interio e positivo: ");
	scanf("%i", &n);
	if(n > 0)
	{
		for(i = 0; i <= n; i++)
		{
			soma = soma + quadrado(i);
		}
		printf("%i", soma);
	}
	else
	{
		printf("Numero invalido");
	}
}

