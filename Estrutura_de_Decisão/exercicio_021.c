/*
Faça um Programa que leia um número inteiro menor que 1000 e imprima a quantidade de centenas, dezenas e unidades do mesmo.Exemplo:326 = 3 centenas, 2 dezenas e 6 unidades
*/
#include <stdio.h>

int main(){

    int num = 0;
    int centena = 0;
    int dezena = 0;
    int unidade = 0;
    int resto1 = 0;
    int resto2 = 0;

    printf("Informe um número inteiro menor que 1000: ");
    scanf("%d", &num);

    if(num < 1000){

        centena = num/100;
        resto1 = num % 100;
        dezena = resto1/10;
        resto2 = resto1 % 10;
        unidade = resto2/1;

    }
    else{

        printf("Informe um valor válido !");

    }

    printf("%d = %d centena(s), %d dezena(s) e %d unidade(s)", num, centena, dezena, unidade);

    return 0;

}