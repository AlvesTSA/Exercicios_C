/*Faça um programa que leia 5 números e informe a soma e a média dos números.*/

#include <stdio.h>

int main(){

    double soma = 0;
    double media = 0;
    int contador = 0;
    double num = 0;

    for (contador = 0; contador < 5; contador++){
        
        printf("Informe o %dº numero: ",contador + 1);
        scanf("%lf", &num);

        soma += num;

    }

    media = soma/contador;

    printf("soma: %.1lf\nmedia: %.1lf",soma,media);

    return 0;
}