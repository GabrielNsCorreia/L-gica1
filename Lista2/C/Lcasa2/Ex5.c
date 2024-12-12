#include <stdio.h> 

int main()
{
	float sb, desconto, adicional;
	int h;
	printf("Salario bruto: ");
	scanf("%f", &sb);
	printf("Numero de horas: ");
	scanf("%i", &h);
	//desconto
	if(sb < 800){
		desconto = 0;
	}else{
		if(800 <= sb && sb <= 1600){
			desconto = sb * 0.08 + sb * 0.05;
		}else{
			desconto = sb * 0.15 + sb * 0.07;
		}
	}
	//adicional
	if(h > 160){
		adicional = ((h -160)*(sb/160))/2;
	}else{
		adicional = 0;
	}
	printf("O salario liquido do fucionario e igual a %.2f", sb - desconto + adicional);
}

