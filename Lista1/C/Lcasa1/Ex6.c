#include <stdio.h>
#define M_PI 3.14159265358979323846

int main()
{
	float r, a, c;
	printf("Raio da circunferencia: ");
	scanf("%f", &r);
	a = M_PI * r * r;
	c = 2 * M_PI * r;
	printf("A area da circunferencia e: %.2f e o comprimento e: %.2f", a, c);
}

