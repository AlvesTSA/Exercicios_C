/*1. Leia uma matriz 3 x 3 e escreva a localização (linha e a coluna) do maior valor.*/

#include <stdio.h>

int main(){

    int mat [3][3];
    int maior [2];
    int num = 0;

    printf("Informe 9 numeros inteiros e preencha uma matrix 3 x 3:\n");

    int i,j = 0;

    for (i = 0; i < 3; i++){
        
        for (j = 0; j < 3; j++){
            
            printf("Informe a posicao [%d][%d]: ",(i+1),(j+1));
            scanf("%d",&mat[i][j]);

            if (mat[i][j] > num){

                num = mat[i][j];
                maior[0] = i;
                maior[1] = j;
            }
        } 
    }

    printf("O maior valor e o %d e esta na linha/coluna: [%d][%d]", num,(maior[0]+1),(maior[1]+1));

    return 0;
    
}