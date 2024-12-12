#include <stdio.h>

main()
{
	int num=0;
	for (num; num<=20; num=num+1)
	{
		if(num%2 != 0)
		{
			printf("%i \n", num);
		}
	}
}

