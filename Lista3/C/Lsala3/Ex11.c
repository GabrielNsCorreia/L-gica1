#include <stdio.h>

main()
{
	int n1, n2, n3, n4, n5, auxiliar, cont1, cont2;
	cont1 = 0;
	cont2 = 0;
	printf("Numero 1: ");
	scanf("%i", &n1);
	printf("Numero 2: ");
	scanf("%i", &n2);
	printf("Numero 3: ");
	scanf("%i", &n3);
	printf("Numero 4: ");
	scanf("%i", &n4);
	printf("Numero 5: ");
	scanf("%i", &n5);
	while(cont1 != 1)
	{
		if(n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5)
		{
			cont1 = 1;
			printf("Maior = %i\n", n1);
		}
		else
		{
			auxiliar = n1;
			n1 = n2;
			n2 = n3;
			n3 = n4;
			n4 = n5;
			n5 = auxiliar;
		}
	}
	while(cont2 != 1)
	{
		if(n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5)
		{
			cont2 = 1;
			printf("Menor = %i\n", n1);
		}
		else
		{
			auxiliar = n1;
			n1 = n2;
			n2 = n3;
			n3 = n4;
			n4 = n5;
			n5 = auxiliar;
		}
	}
}

