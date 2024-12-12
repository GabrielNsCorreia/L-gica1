#include <stdio.h> 

int main()
{
	int n, chave;
	printf("Digite um numero entre 0 e 100: ");
	scanf("%i", &n);
	chave = 37;
	if (n > 0 && n < 100) {
		if (n <= chave) {
			printf("A distancia do numero %i para 37 e igual a %i", n, chave-n);
		} else {
			printf("A distancia do numero %i para 37 e igual a %i", n, n - chave);
		}
	} else {
		printf("Numero invalido");
	}
}

