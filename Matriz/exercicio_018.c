/*18. Leia uma matriz 5 x 5 e faça uma troca entre as diagonais superior e inferior. Escreva-a ao final.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 5
#define intervalo_rand 10

int main(){

    int matriz[size][size];
    srand(time(NULL));

    for (int i = 0; i < size; i++){
        
        for (int j = 0; j < size; j++){
            
            matriz[i][j] = rand() % intervalo_rand;
        }
    }

    printf("Matriz original:\n");
    for (int i = 0; i < size; i++){
        
        for (int j = 0; j < size; j++){
            
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int i,j = 0;
    int temp = 0;
    
    for (i = 0; i < size; i++){
        
        for (j = i + 1; j < size; j++){
            
            temp = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i] = temp;
        }
    }

    printf("Matriz invertida:\n");
    for (i = 0; i < size; i++){
        
        for (j = 0; j < size; j++){
            
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}