/*9. Faça um Programa que leia um vetor A com 10 números inteiros, calcule e mostre a soma dos quadrados dos elementos do vetor.*/

#include <stdio.h>

int main(){

    int a[10];
    int soma = 0;

    printf("Informe 10 numeros inteiros:\n");

    for (int i = 0; i < 10; i++){
        
        scanf("%d",&a[i]);

        soma += a[i] * a[i];
    }
    printf("Soma dos quadrado dos elementos: %d", soma);

    return 0;
    
}