#include <stdio.h>

int main()
{
	float n1, n2, n3, n4, m;
	printf("Nota 1: ");
	scanf("%f", &n1);
	printf("Nota 2: ");
	scanf("%f", &n2);
	printf("Nota 3: ");
	scanf("%f", &n3);
	printf("Nota 4: ");
	scanf("%f", &n4);
	m = (n1 + n2 + n3 + n4) / 4;
	printf("A media do aluno e: %.1f", m);
}

