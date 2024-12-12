#include <stdio.h> 

main()
{
	float a, b, c;
	printf("Medida do primeiro lado do triangulo: ");
	scanf("%f", &a);
	printf("Medida do segundo lado do triangulo: ");
	scanf("%f", &b);
	printf("Medida do terceiro lado do triangulo:");
	scanf("%f", &c);
	if(a<(b+c) && b<(a+c) && c<(a+b)){
		if(a == b && b == c){
			printf("Os valores formam um triangulo equilatero");
		}
		else if(a == b || b == c || a == c){
			printf("Os valores formam um triangulo isoceles");
		}
		else{
			printf("Os valores formam um triangulo escaleno");
		}
	}else{
		printf("Estes valos n�o formam um triangulo");
	}
}

