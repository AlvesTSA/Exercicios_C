/*7. Faça um Programa que leia um vetor de 5 números inteiros, mostre a soma, a multiplicação e os números.*/

#include <stdio.h>

int main(){

    int num[5];
    int soma = 0;
    int mult = 1;

    printf("Informe 5 numeros inteiros:\n");

    for (int i = 0; i < 5; i++){
        
        scanf("%d", &num[i]);
        soma += num[i];
        mult *= num[i];
    }
    printf("Soma: %d", soma);
    printf("\nMultiplicacao: %d", mult);
    printf("\nNumeros: ");

    for (int i = 0; i < 5; i++){
        
        printf("%d ", num[i]);
    }
    
    return 0;

}