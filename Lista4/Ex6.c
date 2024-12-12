//6)- Ler 8 elementos de uma matriz A do tipo vetor. Criar uma matriz B de
//mesmo tipo, observando a seguinte lei de formação: “Todo elemento de B
//deverá ser o quadrado do elemento de A correspondente”.

#include <stdio.h>
#define quad(x) ((x)*(x))

int main(){
    int A[8], B[8];

    for(int i = 0; i<8; ++i){
        printf("Para a matriz A digite o numero para o indice %i: ", i);
        scanf("%i",&A[i]);
    }

    for(int i = 0; i<8; ++i){
        B[i] = quad(A[i]);
        printf("%i ao quadrado = %i\n", A[i], B[i]);
    }
}
