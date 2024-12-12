#include <stdio.h>
#define quadrado(x) ((x)*(x))

main()
{
	int x;
	for(x = 15; x<200; x++)
	{
		printf("%i ^ 2 = %i\n",x, quadrado(x));
	}
}

