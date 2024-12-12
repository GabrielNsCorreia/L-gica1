#include <stdio.h>

main()
{
	int num;
	printf("Entre com um numero menor ou igual a 50: ");
	scanf("%i", &num);
	if(num<=50)
	{
		while(num<250)
		{
			num=num*3;
		}
		printf("%i", num/3);
	}
	else
	{
		printf("Numero invalido \n");
	}
}

