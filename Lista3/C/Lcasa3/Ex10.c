#include <stdio.h>

main()
{
	char op = 'n';
	int a, b;
	while(op != 's')
	{
		printf("Digite: \n'+' para somar \n'-' para subtrair \n'*' para multiplicar \n'/' para dividir \n's' para sair \nOpcao: ");
		scanf("%s", &op);
		if(op != 's')
		{
			printf("Digite o primeiro valor: ");
			scanf("%i", &a);
			printf("Digite o segundo valor: ");
			scanf("%i", &b);
			if(op == '+')
			{
				printf("A soma de %i e %i = %i\n", a, b, a+b);
			}
	        else if(op == '-')
	        {
	        	printf("A subtracao de %i e %i = %i\n", a, b, a-b);
			}
	        else if(op == '*')
	        {
	        	printf("A multiplicacao de %i e %i = %i\n", a, b, a*b);
			}
	        else if(op == '/')
	        {
	        	printf("A divisao de %i epor%i = %i\n", a, b, a/b);
			}
	        else
	        {
	        	printf("Opcao invalida!\n");
			}
	        printf("---------------------------------------------\n");
		}
		else
		{
		}
	}
}

