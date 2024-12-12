#include <stdio.h>

main()
{
	int cont = 1;
	do
	{
		if(cont%2 == 0)
		{
			printf("%i - Par \n", cont);
		}
		else
		{
			printf("%i - Impar \n", cont);
		}
		cont++;
	}
	while(cont <= 20);
}

