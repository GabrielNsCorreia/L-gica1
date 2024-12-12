#include <stdio.h>

main()
{
	int c = 1;
	for(c; c<=20; c++)
	{
		if(c%2 != 0)
		{
			printf("%i - Par \n", c);
		}
		else
		{
			printf("%i - Impar \n", c);
		}
	}
}

