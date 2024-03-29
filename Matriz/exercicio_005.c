/*5. Leia duas matrizes 20 x 20 e escreva os valores da primeira que ocorrem em qualquer posição da segunda.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int matrizA[20][20];
    int matrizB[20][20];
    srand(time(NULL));

    for (int i = 0; i < 20; i++){
        
        for (int y = 0; y < 20; y++){
            
            matrizA[i][y] = rand() % 401; //scanf("%d",&matrizA[i][y]);
            matrizB[i][y] = rand() % 401; //scanf("%d",&matrizB[i][y]);
            
        }
    }

    printf("Valores existentes nas duas matrizes: ");

    for (int w = 0; w < 20; w++){
        
        for (int z = 0; z < 20; z++){
            
            for (int i = 0; i < 20; i++){
        
                for (int y = 0; y < 20; y++){
                    
                    if (matrizA[w][z] == matrizB[i][y]){
                        
                        printf("%d ",matrizA[w][z]);
                    } 
                }
            }
        } 
    }

    return 0;
}
