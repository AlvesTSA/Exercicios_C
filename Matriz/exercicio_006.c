/*6. Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida.*/

#include <stdio.h>

int main(){

    int matriz[5][5];

    for (int i = 0; i < 5; i++){
        
        for (int y = 0; y < 5; y++){
            
            if((i == 0 && y == 0) || (i == 1 && y == 1) || (i == 2 && y == 2) || (i == 3 && y == 3) || (i == 4 && y == 4)){

                matriz[i][y] = 1;
            }
            else{

                matriz[i][y] = 0;
            }
        }
    }

    printf("Matriz resultante:\n");
    
    for (int i = 0; i < 5; i++){
        
        for (int y = 0; y < 5; y++){
            
            printf("%d ",matriz[i][y]);
        }

        printf("\n");
    }

    return 0;
}