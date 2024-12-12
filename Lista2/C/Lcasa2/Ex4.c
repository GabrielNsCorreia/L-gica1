#include <stdio.h> 

int main()
{
	float n1, n2, n3;
	printf("1o Numero: ");
	scanf("%f", &n1);
	printf("2o Numero: ");
	scanf("%f", &n2);
	printf("3o Numero: ");
	scanf("%f", &n3);
	fflush(stdin);
	//maior
	if(n1 > n2 && n1 > n3){
		printf("Maior: %f \n", n1);
	}else{
		if(n2 > n1 && n2 > n3){
			printf("Maior: %f \n", n2);
		}else{
			printf("Maior: %f \n", n3);
		}
	}
	//meio
	if ((n1 > n2 && n1 < n3) || (n1> n3 && n1 < n2)){
		printf("Meio: %f \n", n1);
	}else{
		if((n2 > n1 && n2 < n3) || (n2> n3 && n2 < n1)){
			printf("Meio: %f \n", n2);
		}else{
			printf("Meio: %f \n", n3);
		}
	}
	//menor
	if(n1 < n2 && n1 < n3){
		printf("Menor: %f \n", n1);
	}else{
		if(n2 < n1 && n2 < n3){
			printf("Menor: %f \n", n2);
		}else{
			printf("Menor: %f \n", n3);
		}
	}
	return 0;
}

