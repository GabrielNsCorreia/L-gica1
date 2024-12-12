#include <stdio.h> 
#include<math.h>

int main()
{
	float a, b, c, delta, x1, x2;
	printf("Digite o coeficiente A: ");
	scanf("%f", &a);
	printf("Digite o coeficiente B: ");
	scanf("%f", &b);
	printf("Digite o coeficiente C: ");
	scanf("%f", &c);
	if(a != 0){
		delta = b*b - 4*a*c;
		if(delta < 0){
			printf("A equacao nao tem solucao");
		}
		else if(delta == 0){
			x1 = (-b)/(2*a);
			x2 = x1;
			printf("A equacao tem duas raizes iguais %f e %f", x1, x2);
		}
		else{
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			printf("A equacao tem dois valores diferentes %.5f e %.5f", x1, x2);
		}
	}else{
		printf("Nao e um equacao de segundo grau");
	}
}

