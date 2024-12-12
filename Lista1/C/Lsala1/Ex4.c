#include <stdio.h>

int main()
{
    int a, b, c;
    printf("O valor de A: ");
    scanf("%i", &a);
    printf("O valor de B: ");
    scanf("%i", &b);
    c = a;
    a = b;
    b = c;
    printf("O valor de A é: %i e o valor de B é: %i",a, b);
    return 0;
}
