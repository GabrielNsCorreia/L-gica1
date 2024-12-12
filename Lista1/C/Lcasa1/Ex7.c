#include <stdio.h>
#define M_PI 3.14159265358979323846

int main()
{
	float r, v, a;
	printf("Raio da circunferencia: ");
	scanf("%f", &r);
	v = (4/3) * M_PI * r * r * r;
	a = 4 * M_PI * r * r;
	printf("O volume da esfera e: %.2f e a area e: %f", v, a);
}

