/*8. Faça uma função que recebe um valor inteiro e verifica se o valor é par ou ímpar. A função deve retornar um valor booleano*/

#include <stdio.h>
#include <stdbool.h>

bool impar_par(int numero){

    return numero % 2 == 0;
}

int main(){

    int num = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    if (impar_par(num))
    {
        printf("O numero informado e PAR");
    }
    else
    {
        printf("O numero informado e IMPAR");
    }
    
    return 0;
}