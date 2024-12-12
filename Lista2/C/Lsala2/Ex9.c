#include <stdio.h> 

int main()
{
	int n1, n2;
	printf("1o Numero: ");
	scanf("%i", &n1);
	printf("2o Numero: ");
	scanf("%i", &n2);
	if(n1%4==0 || n1%5==0 || n2%4==0 || n2%5==0){
		if(n1%4==0 || n1%5==0){
			printf("O numero %i e divisivel por 4 ou por 5", n1);
		}
		if(n2%4==0 || n2%5==0){
			printf("O numero %i e divisivel por 4 ou por 5", n2);
		}
	}else{
		printf("Nenhum dos numeros e divisivel por 4 ou por 5");
	}
}

