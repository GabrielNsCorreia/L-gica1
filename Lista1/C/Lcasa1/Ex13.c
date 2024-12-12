#include <stdio.h> 

int main()
{
	float t, s;
	printf("Tempo em segundos: ");
	scanf("%f", &t);
	s = 2 + 3 * t + 1/2 * 10 * t * t;
	printf("%.2f metros", s);
}

