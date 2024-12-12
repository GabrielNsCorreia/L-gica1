#include <stdio.h>

int main()
{
    float F, C;
    printf("Entre com a temperatura em Fahrenheit: ");
    scanf("%f", &F);
    C = (((F-32)*5)/9);
    printf("A temperatura em graus Centígrados é: %f", C);
    return 0;
}
