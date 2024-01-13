/*11. Altere o programa anterior, intercalando 3 vetores de 10 elementos cada.*/

#include <stdio.h>

int main(){

    int a[10];
    int b[10];
    int c[10];
    int d[30];
    int i = 0;
    int y = 0;
    int z = 0;
    int w = 0;

    printf("Informe os elementos do vetor a:\n");

    for (i = 0; i < 10; i++){
        
        scanf("%d", &a[i]);
    }

    printf("Informe os elementos do vetor b:\n");

    for (y = 0; y < 10; y++){
        
        scanf("%d", &b[y]);
    }

    printf("Informe os elementos do vetor c:\n");

    for (z = 0; z < 10; z++){
        
        scanf("%d", &c[z]);
    }

    i = 0;
    y = 0;
    z = 0;

    for (w = 0; w < 30; w += 3 ){
        
        d[w] = a[i];
        i++;
    }
    for (w = 1; w < 30; w += 3 ){
        
        d[w] = b[y];
        y++;
    }
    for (w = 2; w < 30; w += 3 ){
        
        d[w] = c[z];
        z++;
    }
    for (w = 0; w < 30; w++ ){
        
        printf("%d ", d[w]);
    }
    
    return 0;
}