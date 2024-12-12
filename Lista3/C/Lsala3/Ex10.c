#include <stdio.h>

main()
{
	int x, soma;
	soma = 0;
	for(x=1; x<=500; x++)
	{
		if(x%2==0)
		{
			soma = soma + x;
		}
	}
	printf("%i", soma);
}

