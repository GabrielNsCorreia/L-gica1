//7)- Ler 10 elementos de uma matriz A tipo vetor e criar uma matriz de mesma
//dimensão com os mesmos elementos de A, sendo que esses deverão estar
//invertidos, ou seja, o 1º elemento de A passa a ser o último de B, o 2º elemento
//de A passa a ser o penúltimo e A e assim por diante

#include <stdio.h>

int main(){
    int A[10], B[10];

    for(int i = 0; i<10; ++i){
        printf("Para a matriz A digite o numero para o indice %i: ", i);
        scanf("%i",&A[i]);
    }

    for(int i = 9; i>=0; --i){
        B[i] = A[i];
        printf("%i \n", B[i]);
    }
}
