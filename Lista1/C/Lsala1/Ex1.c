#include <stdio.h>

int main()
{
    float V, T, D, LU;
    printf("Entre com velocidade: ");
    scanf("%f", &V);
    printf("Entre com tempo: ");
    scanf("%f", &T);
    D = V * T;
    LU = D / 12;
    printf("A distância percorrida foi %.2f, ja o tempo gasto foi %.2f, a velocidade foi %.2f e os litros usados foram %.2f",D, T, V, LU);
    return 0;
}

