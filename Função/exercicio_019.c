/*19. Faça um programa para imprimir:

1
1   2
1   2   3
.....
1   2   3   ...  n
para um n informado pelo usuário. Use uma função que receba um valor n inteiro imprima até a n-ésima linha.*/

#include <stdio.h>

void imprimir(int n){

    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }      
}

int main(){

    int n = 0;

    printf("informe um valor inteiro e positivo: ");
    scanf("%d",&n);

    if (n <= 0)
    {
        printf("ERRO: o valor deve ser maior que zero.\n" );

        return 1;
    }

    imprimir(n);

    return 0; 
}