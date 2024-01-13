/*10. Faça um Programa que leia dois vetores com 10 elementos cada. Gere um terceiro vetor de 20 elementos, cujos valores deverão ser compostos pelos elementos intercalados dos dois outros vetores.*/

#include <stdio.h>

int main(){

    int a[10];
    int b[10];
    int c[20];
    int i = 0;
    int y = 0;
    int w = 0;

    printf("Informe os elementos do vetor a:\n");

    for (i = 0; i < 10; i++){
        
        scanf("%d", &a[i]);
    }

    printf("Informe os elementos do vetor b:\n");

    for (y = 0; y < 10; y++){
        
        scanf("%d", &b[y]);
    }

    i = 0;
    y = 0;
    
    for (w = 0; w < 20; w += 2 ){
        
        c[w] = a[i];
        i++;
    }
    for (w = 1; w < 20; w += 2 ){
        
        c[w] = b[y];
        y++;
    }
    for (w = 0; w < 20; w++ ){
        
        printf("%d ", c[w]);
    }
    
    return 0;
}