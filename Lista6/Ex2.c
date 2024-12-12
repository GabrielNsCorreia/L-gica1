//2)- Ler 2 matrizes A e B, cada uma com 1D para 7 elementos. Criar
//uma matriz C de 2D, onde a 1ª coluna deverá ser formada pelos
//elementos da matriz A e a 2ª coluna deverá ser formada pelos
//elementos da matriz B. Exibir a matriz C.

#include <stdio.h>

int main(){
    int A[7], B[7], C[7][2];

    printf("Array A \n");
    for(int i = 0; i<7; ++i){
        printf("Para a matriz A digite o numero para o indice %i: ", i);
        scanf("%i",&A[i]);
    }

    printf("Array B \n");
    for(int i = 0; i<7; ++i){
        printf("Para a matriz B digite o numero para o indice %i: ", i);
        scanf("%i",&B[i]);
    }

    for(int i = 0; i<7; ++i){
        C[i][0] = A[i];
        C[i][1] = B[i];
    }

    for(int i = 0; i<7; ++i){
        for(int c = 0; c<2; ++c){
            printf("Linha(%i) Coluna(%i) Valor(%i) \n", i+1, c+1, C[i][c]);
        }
    }
}
