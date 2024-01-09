/*1. Faça um Programa que leia um vetor de 5 números inteiros e mostre-os.*/

#include <stdio.h>

int main(){

    int v[5];
    //int i;

    printf("Informe 5 numeros inteiros:\n");

    for (int i = 0; i < 5; i++){

        scanf("%d", &v[i]);
    }

    printf("Os valores informados sao: ");

    for (int i = 0; i < 5; i++){
        
        printf("%d ", v[i]);
    }
    
    return 0;
}