//2)- Ler uma matriz A do tipo vetor com 6 elementos. Criar uma matriz B de
//mesmo tipo, sendo que cada elemento da matriz B seja o fatorial do elemento
//correspondente da matriz A. Exibir a matriz B.

#include <stdio.h>

int main(){
    int A[6], B[6];

    for(int i = 0; i<6; ++i){
        printf("Para a matriz A digite o numero para o indice %i: ", i);
        scanf("%i",&A[i]);
        
        int cont = A[i] - 1;
        B[i] = A[i];
        while(cont > 0){
            B[i] = B[i] * cont;
            cont--;
        }
    }

    for(int i = 0; i<6; ++i){
        printf("%i! = %i \n", A[i], B[i]);
    }
}
