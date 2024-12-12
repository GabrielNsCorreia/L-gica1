#include <stdio.h> 

int main()
{
	float s, t, vm;
	printf("Distancia percorrida em Km: ");
	scanf("%f", &s);
	printf("Tempo gasto em horas: ");
	scanf("%f", &t);
	vm = s/t;
	printf("A velocidade media do percurso foi: %f Km/h", vm);
}

