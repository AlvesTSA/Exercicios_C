/* 1. Faça um programa, com uma função que necessite de um argumento. A função retorna o valor de caractere ‘P’, se seu argumento for positivo, e ‘N’, se seu argumento for zero ou negativo. */

#include <stdio.h>

char verifica_num(int num){

    if (num > 0)
    {
        return 'P';
    }
    else
    {
        return 'N';
    }
}

int main(){

    int num = 0;
    char resultado;
    
    printf("Informe um valor inteiro: ");
    scanf("%d", &num);

    resultado = verifica_num(num);

    printf("Resultado: %c",resultado);

    return 0;
}