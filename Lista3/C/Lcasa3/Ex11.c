#include <stdio.h>

main()
{
	int c = 1, num;
	printf("Digite um numero para saber sua tabuada: ");
	scanf("%i", &num);
	for(c; c<=10; c++)
	{
		printf("%i X %i = %i\n", c, num, c*num);
	}
}

