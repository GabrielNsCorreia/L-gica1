#include <stdio.h>
#include <math.h>

main()
{
	float p, r;
	for(p=0; p<=15; p++)
	{
		r = pow(3,p);
		printf("3 elevado a %.0f = %.0f \n", p, r);
	}
}

