/*9. Leia uma matriz 6 x 6 e atribuir o valor 0 para os valores negativos encontrados fora das diagonais principal e secundaria.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 6
#define intervalo_rand 10

int main(){

    srand(time(NULL));
    int matriz[size][size];

    printf("Informe uma matriz %d x %d:\n",size,size);
    for (int i = 0; i < size; i++){
        
        for (int j = 0; j < size; j++){
            
            //scanf("%d", &matriz[i][j]);
            int num = rand() % intervalo_rand;
            matriz[i][j] = num * -1;
        }  
    }

    for (int i = 0; i < size; i++){
        
        for (int j = 0; j < size; j++){
            
            if (i != j && j != size - i - 1 && matriz[i][j] < 0){
                
                matriz[i][j] = 0;
            }  
        }  
    }

    for (int i = 0; i < size; i++){
        
        for (int j = 0; j < size; j++){
            
            printf("%d ",matriz[i][j]);
        } 
        printf("\n"); 
    }
    
    return 0;
}