/*13.Crie um tabuleiro de jogo da velha, usando uma matrizes de caracteres (char) 3×3, onde o usuário pede o número da linha (1 até 3) e o da coluna (1 até 3). A cada vez que o usuário entrar com esses dados, colocar um ‘X’ ou ‘O’ no local selecionado.*/

#include <stdio.h>
#define size 3

int main(){

    char matriz[size][size];
    int i,j = 0;

    for (int z = 0; z < size*size; z++){
        
        do{
            printf("Informe a linha: ");
            scanf("%d",&i);
            printf("Informe a coluna: ");
            scanf("%d",&j);

            if ((i < 1 || i > size) || (j < 1 || j > size)){
                
                printf("ERRO: Valor invalido, informe de 1 a %d.\n",size);
            }
            if (matriz[i-1][j-1] == 'X' || matriz[i-1][j-1] == 'O'){
                
                printf("ERRO: Esse espaco ja foi preenchido.\n");
            }
        
        } while ((i < 1 || i > size) || (j < 1 || j > size) || matriz[i-1][j-1] == 'X' || matriz[i-1][j-1] == 'O');

        if (z % 2 == 0){

            matriz[i-1][j-1] = 'X';
        }
        else{

            matriz[i-1][j-1] = 'O';
        }
    }

    printf("Resultado do jogo:\n");
    for (i = 0; i < size; i++){
        
        for (j = 0; j < size; j++){
            
            printf("%c ",matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}