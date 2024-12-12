#include <stdio.h>

main()
{
	int x = 20;
	while(x > 0)
	{
		if(x%2 == 0)
		{
			printf("%i \n", x);
		}
		x--;
	}
}

