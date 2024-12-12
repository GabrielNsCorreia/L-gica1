#include <stdio.h> 

int main()
{
	int n;
	printf("Digite um numero: ");
	scanf("%i", &n);
	if (n % 2 == 0) {
		printf("O numero e par");
	} else {
		printf("O numero e impar");
	}
}
 
