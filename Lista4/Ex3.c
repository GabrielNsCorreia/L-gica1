//3)- Ler duas matrizes A e B do tipo vetor com 5 elementos cada. Criar uma
//matriz C, onde cada elemento de A é a subtração do elemento correspondente
//de A com B. Exibir a matriz C.

#include <stdio.h>

int main(){
    int A[5], B[5], C[5];
    for(int i = 0; i<5; ++i){
        printf("Para a matriz A digite o numero para o indice %i: ", i);
        scanf("%i",&A[i]);
        printf("Para a matriz B digite o numero para o indice %i: ", i);
        scanf("%i",&B[i]);
        printf("\n");
    }

    for(int i = 0; i < 5; ++i){
        C[i] = A[i] - B[i];
        printf("%i \n", C[i]);
    }
}
