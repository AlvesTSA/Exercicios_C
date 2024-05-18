/*17. Escreva uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o somatório desse valor.*/

#include <stdio.h>

int somatorio(int n){

    int soma = 0;

    for (int i = 1; i <= n; i++)
    {
        soma += i;
    }
    
    return soma;
}

int main(){

    int soma = 0;
    int n = 0;

    printf("Informe um valor inteiro: ");
    scanf("%d",&n);

    if (n <= 0) 
    {
        printf("Erro: o número deve ser inteiro e positivo.\n");
        return 1;
    }

    soma = somatorio(n);

    printf("Somatorio de %d: %d",n,soma);

    return 0;
}