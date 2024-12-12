#include <stdio.h> 

int main()
{
	float v1, v2, diferenca;
	printf("Entre com o valor 1: ");
	scanf("%f", &v1);
	printf("Entre com o valor 2: ");
	scanf("%f", &v2);
	if(v1 == v2){
		printf("Os n�meros digitados s�o iguais, ent�o n�o h� diferen�as entre eles");
	}else{
		if(v1 > v2){
			diferenca = v1 - v2;
		}else{
			diferenca = v2 -v1;
		}
		printf("A diferenca entre os dois valores e: %f", diferenca);
	}
}

