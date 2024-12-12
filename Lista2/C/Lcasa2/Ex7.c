#include <stdio.h> 

int main()
{
	int c;
	printf("Digite um numero de 1 a 5: ");
	scanf("%i", &c);
	if(c == 1){
		printf("Engenharia");
	}
	else if(c == 2){
		printf("Edificaçoes");
	}
	else if(c == 3){
		printf("Sistemas Eletricos");
	}
	else if(c == 4){
		printf("Turismo");
	}
	else if(c == 5){
		printf("Analise de Sistemas");
	}
	else{
		printf("Codigo invalido");
	}
}

