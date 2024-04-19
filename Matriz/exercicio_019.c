/*19. Leia duas matrizes 10 x 10 e faça uma substituição entre a diagonal inferior da primeira coma diagonal superior da segunda.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 10
#define intervalo_rand 10

int main(){

    int matrizA[size][size];
    int matrizB[size][size];
    srand(time(NULL));

    for (int i = 0; i < size; i++){
        
        for (int j = 0; j < size; j++){
            
            matrizA[i][j] = rand() % intervalo_rand;
            matrizB[i][j] = rand() % intervalo_rand;
        }
    }

    printf("Matrizes originais:\n");
    for (int i = 0; i < size; i++){
        
        for (int j = 0; j < size; j++){
            
            printf("%d ",matrizA[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < size; i++){
        
        for (int j = 0; j < size; j++){
            
            printf("%d ",matrizB[i][j]);
        }
        printf("\n");
    }

    int i,j = 0;
    int temp = 0;
    
    for (i = 0; i < size; i++){
        
        for (j = i + 1; j < size; j++){
            
            temp = matrizA[j][i];
            matrizA[j][i] = matrizB[i][j];
            matrizB[i][j] = temp;
        }
    }

    printf("Matrizes invertidas:\n");
    for (i = 0; i < size; i++){
        
        for (j = 0; j < size; j++){
            
            printf("%d ",matrizA[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (i = 0; i < size; i++){
        
        for (j = 0; j < size; j++){
            
            printf("%d ",matrizB[i][j]);
        }
        printf("\n");
    }
    return 0;
}