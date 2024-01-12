/*6. Leia um vetor de 40 posições e atribua valor 0 para todos os elementos que possuírem valores negativos.*/

#include <stdio.h>

int main(){

    int vetor[40];

    printf("Atribua 40 valores\n");

    for (int i = 0; i < 40; i++){
        
        printf("Vetor %d: ", i);
        scanf("%d", &vetor[i]);

        if (vetor[i] < 0){
            
            vetor[i] = 0;
        }
    }
    for (int i = 0; i < 40; i++){
        
        printf("%d ", vetor[i]);
    }

    return 0;
    
}