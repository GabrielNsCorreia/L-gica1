#include <stdio.h>

int main()
{
	float n1, n2, at, m;
	printf("Nota 1: ");
	scanf("%f", &n1);
	printf("Nota 2: ");
	scanf("%f", &n2);
	printf("Nota atividade: ");
	scanf("%f", &at);
	m = (n1*4 + n2*4 + at*2)/10;
	printf("A media do semestre e %.1f", m);
}

