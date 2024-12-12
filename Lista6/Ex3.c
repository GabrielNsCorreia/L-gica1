//3)- Ler uma matriz A de 1D com 10 elementos. Criar uma matriz B de
//2D com 3 colunas, onde:
//- a 1ª coluna da matriz B é formada pelos elementos da matriz A
//somados com mais 5;
//- a 2ª coluna é formada pelo valor do cálculo da fatorial de cada
//elemento correspondente da matriz A;
//- a 3ª coluna deverá ser formada pelos quadrados dos elementos
//correspondentes da matriz A.
//Exibir a matriz B.

#include <stdio.h>
#define quad(x) ((x)*(x))

int main(){
    int A[10], B[10][3];

    printf("Array A \n");
    for(int i = 0; i<10; ++i){
        printf("Para a matriz A digite o numero para o indice %i: ", i);
        scanf("%i",&A[i]);
    }

    //soma
    for(int i = 0; i<10; ++i){
        B[i][0] = A[i]+5;
    }

    //fatorial
    for(int i = 0; i<10; ++i){
        int cont = A[i] - 1;
        B[i][1] = A[i];
        while(cont > 0){
            B[i][1] = B[i][1] * cont;
            cont--;
        }
    }

    //quadrado
    for(int i = 0; i<10; ++i){
        B[i][2] = quad(A[i]);
    }

    for(int i = 0; i<10; ++i){
        for(int c = 0; c<3; ++c){
            printf("Linha(%i) Coluna(%i) Valor(%i) \n", i+1, c+1, B[i][c]);
        }
    }
}
