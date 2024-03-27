/*3. Leia uma matriz 20 x 20. Leia também um valor X. O programa deverá fazer uma busca desse valor na matriz e, ao final escrever a localização (linha e coluna) ou uma mensagem de “não encontrado”.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    int matriz[20][20];
    int x = 0;
    int i,j = 0;
    int loc[2];
    int count = 0;

    printf("Informe um numero inteiro de 0 a 1000: ");
    scanf("%d",&x);

    for (i = 0; i < 20; i++){
        
        for (j = 0; j < 20; j++){
            
            matriz[i][j] = rand() % 401;

        }
    }
    
    for (i = 0; i < 20; i++){
        
        for (j = 0; j < 20; j++){
            
            if (matriz[i][j] == x){
                
                loc[0] = i;
                loc[1] = j;

                printf("Valor x = %d, encontrado na posicao: linha [%d] e coluna [%d]\n",x,loc[0],loc[1]);

                count++;
            }
        } 
    }
    
    if (count == 0){
        
        printf("Valor de x nao foi encontrado na matrix");
    }
    
    return 0;
}