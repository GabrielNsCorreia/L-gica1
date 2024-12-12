#include <stdio.h>

main()
{
	int par=0, impar=0, cont=1;
	while(cont<=20)
	{
		printf("%i \n", cont);
		if(cont%2==0)
		{
			par++;
		}
		else
		{
			impar++;
		}
		cont++;
	}
	printf("Numero de pares: %i\nNumero de impares: %i", par, impar);
}

