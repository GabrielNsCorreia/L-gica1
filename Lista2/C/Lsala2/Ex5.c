	#include <stdio.h> 

	int main()
	{
		int a, b, c;
		printf("Primeiro valor: ");
		scanf("%i", &a);
		printf("Segundo valor: ");
		scanf("%i", &b);
		printf("Terceiro valor: ");
		scanf("%i", &c);
		if(a<b && b<c){
			printf("Os valores em ordem crescente sao %i %i %i", a, b, c);
		}
		else if(a<c && c<b){
			printf("Os valores em ordem crescente sao %i %i %i", a, c, b);
		}
		else if(b<a && a<c){
			printf("Os valores em ordem crescente sao %i %i %i", b, a, c);
		}
		else if(b<c && c<a){
			printf("Os valores em ordem crescente sao %i %i %i", b, c, a);
		}
		else if(c<a && a<b){
			printf("Os valores em ordem crescente sao %i %i %i", c, a, b);
		}
		else if(c<b && b<a){
			printf("Os valores em ordem crescente sao %i %i %i", c, b, a);
		}
		else{
			printf("O valores sao iguais");
		}
	}

