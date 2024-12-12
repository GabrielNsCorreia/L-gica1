#include <stdio.h> 

int main()
{
	float n1, n2, media, ne, novamedia;
	printf("Nota 1: ");
	scanf("%f", &n1);
	printf("Nota 2: ");
	scanf("%f", &n2);
	media = (n1 + n2) / 2;
	if(media >= 6){
		printf("Aluno aprovado com media %.1f", media);
	}else{
		printf("Nota de exame: ");
		scanf("%f", &ne);
		novamedia = media + ne;
		if(novamedia >= 5){
			printf("Aluno aprovado em exame com media %.1f", novamedia);
		}else{
			printf("Aluno reprovado em exame com media %.1f", novamedia);
		}
	}
}

