#include <stdio.h>

main()
{
	int num, x, r;
	r = 0;
	printf("Entre com um numero para saber sua tabuada: ");
	scanf("%i", &num);
	for(x=0; x<=10; x++)
	{
		r = num * x;
		printf("%i X %i = %i \n", x, num, r);
	}
}

