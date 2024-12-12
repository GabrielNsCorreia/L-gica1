//4)- Ler duas matrizes A e B do tipo vetor, com 5 elementos cada. Criar uma
//matriz C, sendo essa a junção das duas outras matrizes. Assim, C deverá ter o
//dobro de elementos, ou seja, 10. Exibir a matriz C.

#include <stdio.h>

int main(){
    int A[5], B[5], C[10];
    for(int i = 0; i<5; ++i){
        printf("Para a matriz A digite o numero para o indice %i: ", i);
        scanf("%i",&A[i]);
        printf("Para a matriz B digite o numero para o indice %i: ", i);
        scanf("%i",&B[i]);
        printf("\n");
    }

    for(int i = 0; i<5; ++i){
        C[i] = A[i];
        C[i+5] = B[i];
    }

    for(int i = 0; i<10; ++i){
        printf("%i \n", C[i]);
    }
}
