//1)- Ler 2 matrizes A e B, cada uma delas de 2D com 5 linhas e 3
//colunas. Criar uma matriz C de mesma dimensão, onde C é formada
//pela soma dos elementos da matriz A com os elementos da matriz B.
//Exibir essa matriz.

#include <stdio.h>

int main(){
    int A[5][3], B[5][3], C[5][3];

    //Matriz A
    printf("Matriz A\n");
    for(int i = 0; i<5; ++i){
        for(int c = 0; c<3; ++c){
            printf("Valor da linha(%i) Valor coluna(%i):", i+1, c+1);
            scanf("%i", &A[i][c]);
        }
    }

    //Matriz B
    printf("Matriz B\n");
    for(int i = 0; i<5; ++i){
        for(int c = 0; c<3; ++c){
            printf("Valor da linha(%i) Valor coluna(%i):", i+1, c+1);
            scanf("%i", &B[i][c]);
        }
    }

    //Soma das matrizes A  e B
    for(int i = 0; i<5; ++i){
        for(int c = 0; c<3; ++c){
            C[i][c] = A[i][c] + B[i][c];
            printf("Matriz A(%i) Matriz B(%i) Linha(%i) Coluna(%i) Valor(%i) \n",A[i][c], B[i][c], i+1, c+1, C[i][c]);
        }
    }
}
