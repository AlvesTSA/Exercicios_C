/*2. Faça um Programa que leia um vetor de 10 números reais e mostre-os na ordem inversa.*/

#include <stdio.h>

int main(){

    int v[10];

    printf("Informe 10 numeros inteiros:\n");

    for (int i = 0; i < 10; i++){
        
        scanf("%d", &v[i]);
    }

    printf("Os numeros inseridos em ordem inversa: ");

    for (int i = 9; i >= 0; i--){
        
        printf("%d ", v[i]);
    }
    
    return 0;
    
}