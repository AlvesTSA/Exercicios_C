/*2. Leia uma matriz 6 x 6, conte e escreva quantos valores maiores que 10 ela possui.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int matriz [6][6];

    // Inicializa o gerador de números aleatórios com base no tempo atual
    srand(time(NULL));

    int i,j = 0;
    int count;

    for (i = 0; i < 6; i++){
        
        for (j = 0; j < 6; j++){
            
            matriz[i][j] = rand() % 36;

            if (matriz[i][j] > 10){
                
                count++;
            }   
        }    
    }

    printf("Foram lidos %d valores maiores que 10\nValores maiores que 10: ",count);
    
    for (i = 0; i < 6; i++){
        
        for (j = 0; j < 6; j++){
            
            if (matriz[i][j] > 10){
                
                printf("%d ",matriz[i][j]);
            }   
        } 
    }

    return 0;    
}