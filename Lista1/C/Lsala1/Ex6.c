#include <stdio.h>

int main()
{
    float valor, taxa, tempo, atraso;
    printf("Digite o valor da prestação: ");
    scanf("%f", &valor);
    printf("Digite o valor da taxa de juros: ");
    scanf("%f", &taxa);
    printf("Digite o tempo do atraso: ");
    scanf("%f", &tempo);
    atraso = valor + (valor*(taxa/100)*tempo);
    printf("O valor da presta��o �: %f", atraso);
}

