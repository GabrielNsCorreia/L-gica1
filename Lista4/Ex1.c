//1)- Ler 5 elementos em uma matriz A tipo vetor. Criar uma matriz B de mesma
//dimensão com os elementos da matriz A multiplicados por 3. Exibir a matriz B.
//O elemento B[1] deverá ser implicado pelo elemento A [1] * 3, o elemento B[2]
//pelo elemento A [2] * 3 e assim por diante, até 5.

#include <stdio.h>

int main(){
    int A[5], B[5];
    for(int i = 0; i<5; ++i){
        printf("Para a matriz A digite o numero para o indice %i: ", i);
        scanf("%i",&A[i]);
        B[i] = A[i] * 3;
    }
    for(int i = 0; i<5; ++i){
        printf("%i * 3 = %i \n", A[i], B[i]);
    }
}
