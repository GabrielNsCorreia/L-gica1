//5)- Ler duas matrizes do tipo vetor A com 20 elementos e B com 30 elementos.
//Criar uma matriz C, sendo essa a junção das duas outras matrizes. Assim, C
//deverá ter a capacidade de armazenar 50 elementos. 

#include <stdio.h>

int main(){
    int A[20], B[30], C[50];

    for(int i = 0; i<20; ++i){
        printf("Para a matriz A digite o numero para o indice %i: ", i);
        scanf("%i",&A[i]);
    }
    printf("\n");
    for(int i = 0; i<30; ++i){
        printf("Para a matriz B digite o numero para o indice %i: ", i);
        scanf("%i",&B[i]);
    }



    for(int i = 0; i<20; ++i){
        C[i] = A[i];
    }
    for(int i = 0; i<30; ++i){
        C[i+20] = B[i];
    }



    for(int i = 0; i<50; ++i){
        printf("%i \n", C[i]);
    }
}
