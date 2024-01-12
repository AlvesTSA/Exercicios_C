/*10. Faça um Programa que leia dois vetores com 10 elementos cada. Gere um terceiro vetor de 20 elementos, cujos valores deverão ser compostos pelos elementos intercalados dos dois outros vetores.*/

#include <stdio.h>

int main(){

    int a[10];
    int b[10];
    int c[20];

    printf("Informe os elementos do vetor a:\n");

    for (int i = 0; i < 10; i++){
        
        scanf("%d", &a[i]);
    }

    printf("Informe os elementos do vetor b:\n");

    for (int i = 0; i < 10; i++){
        
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < 20; i++){
        
        c[i] = a[i];
    }
    
    
    
}