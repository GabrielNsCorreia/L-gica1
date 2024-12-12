#include <stdio.h>

main()
{
	int x = 0;
	while(x<=38)
	{
		printf("%i \n",x);
		x=x+2;
	}
	
	printf("------------------------------\n");
	
	int y = 0;
	do
	{
		printf("%i \n",y);
		y=y+2;
	}
	while(y<=38);
	
	printf("------------------------------\n");
	
	int z;
	for(z=0;z<=38;z=z+2)
	{
	printf("%i \n", z);
	}
	
	printf("------------------------------\n");
	
	int i, a, q, Termo;
	for(i = 5; i > 0; i = i - 1)
	{
		a = i;
		q = 3;
		Termo = a;
		while (Termo <= 9 * a)
		{
			printf("%d \n", Termo);
			Termo = Termo * q;
		}
	}
}

