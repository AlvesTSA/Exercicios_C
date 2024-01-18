/*24. Leia um vetor de 5 posições contendo os caracteres de um numero. Em seguida escreva esse numero por extenso.*/

#include <stdio.h>

int main(){

    int vetor[5];

    printf("Informe os caracteres: \n");

    for (int i = 0; i < 5; i++){
        
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < 5; i++){
        
        printf("%d",vetor[i]);
    }
    return 0;
}