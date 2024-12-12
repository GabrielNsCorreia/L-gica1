#include <stdio.h>
#define pi 3.14159

int main()
{
    float altura, raio, volume;
    printf("Digite a altura da lata: ");
    scanf("%f", &altura);
    printf("Digite o raio da lata: ");
    scanf("%f", &raio);
    volume = pi * raio * raio * altura;
    printf("O volume da lata é: %.2f", volume);
    return 0;
}
