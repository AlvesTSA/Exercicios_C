/*8. Leia uma matriz 8x 8 e escreva o maior elemento da diagonal principal e a soma dos elementos da diagonal secundaria.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 8
#define intervalo_rand 100

int main(){

    srand(time(NULL));
    int matriz[size][size];
    int maior = 0;

    printf("Informe uma matriz %d x %d:",size,size);

    for (int i = 0; i < size; i++){
        
        for (int y = 0; y < size; y++){
            
            //scanf("%d", &matriz[i][y]);
            matriz[i][y] = rand() % intervalo_rand;
        }
    }

    //maior valor da diagonal principal
    maior = matriz[0][0];

    for (int i = 0; i < size; i++){
        
        if (matriz[i][i] > maior){
            
            maior = matriz[i][i];
        }
    }
    
    //soma da diagonal secundária
    int soma = 0;
    int j = size - 1;

    for (int i = 0; i < size; i++){
        
        soma += matriz[i][j];
        j--;
    }
    
    printf("\nMatriz lida:\n");

    for (int i = 0; i < size; i++){
        
        for (int y = 0; y < size; y++){
            
            printf("%d ",matriz[i][y]);
        }
        printf("\n");
    }

    printf("Diagonal principal: ");

    for (int i = 0; i < size; i++){
        
        printf("%d ",matriz[i][i]);
    }
    printf("\nMaior valor da diagonal principal: %d",maior);
    
    printf("\nDiagonal secundaria: ");

    j = size - 1;
    for (int i = 0; i < size; i++){
        
        printf("%d ",matriz[i][j]);
        j--;
    }

    printf("\nSoma da diagonal secundaria: %d\n",soma);

    return 0;
}