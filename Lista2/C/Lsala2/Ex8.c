#include <stdio.h> 

int main()
{
	int n1, n2, n3;
	printf("1o Numero: ");
	scanf("%i", &n1);
	printf("2o Numero: ");
	scanf("%i", &n2);
	printf("3o Numero: ");
	scanf("%i", &n3);
	if(n1%2==0 && n1%3==0 || n2%2==0 && n2%3==0 || n3%2==0 && n3%3==0){
		if(n1%2==0 && n1%3==0){
			printf("O número %i é divesível por 2 e por 3", n1);
		}
		if(n2%2==0 && n2%3==0){
			printf("O número %i é divesível por 2 e por 3", n2);
		}
		if(n3%2==0 && n3%3==0){
			printf("O número %i é divesível por 2 e por 3", n3);
		}
	}else{
		printf("Nenhum dos numeros e divisivel por 2 e por 3");
	}
}

