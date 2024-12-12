#include <stdio.h> 

int main()
{
	float n1, n2, n3, media;
	printf("Nota 1: ");
	scanf("%f", &n1);
	printf("Nota 2: ");
	scanf("%f", &n2);
	printf("Nota 3: ");
	scanf("%f", &n3);
	media = (n1 + n2 + n3) / 3;
	if(media >= 6){
		printf("Aluno aprovado com media %.1f", media);
	}else{
		printf("Aluno reprovado com media %.1f", media);
	}
}


