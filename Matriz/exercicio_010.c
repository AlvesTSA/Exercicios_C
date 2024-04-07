/*10. Leia uma matriz 50 x 2, onde cada coluna corresponde a um lado de um triangulo retângulo. Declare um vetor que contenha a área dos respectivos triângulos e o escreva.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size_l 50
#define size_c 2
#define intervalo_rand 10

int main(){

    int matriz[size_l][size_c];
    float vetor[size_l];
    srand(time(NULL));
    const float C = 0.5;

    printf("Informe uma matriz %d x %d:\n",size_l,size_c);

    for (int i = 0; i < size_l; i++){
        
        for (int j = 0; j < size_c; j++){
            
            int num = rand() % intervalo_rand;
            matriz[i][j] = num + 1;
        }
    }

    printf("Matriz lida: \n");
    
    for (int i = 0; i < size_l; i++){
        
        for (int j = 0; j < size_c; j++){
            
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

    printf("Areas dos triangulos: \n");

    for (int i = 0; i < size_l; i++){
         
        vetor[i] = (float)matriz[i][0] * (float)matriz[i][1] * C;
        
        printf("%.1f ",vetor[i]);
    }

    return 0;  
}