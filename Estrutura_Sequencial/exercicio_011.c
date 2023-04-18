/*Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre:
a)o produto do dobro do primeiro com metade do segundo .
b)a soma do triplo do primeiro com o terceiro.
c)o terceiro elevado ao cubo.        */

#include <stdio.h>

int main(){

    double num1 = 0;
    double num2 = 0;
    double num3 = 0;
    double produto = 0;
    double soma = 0;
    double cubo = 0;

    printf("Informe o primeiro número: ");
    scanf("%lf", &num1);

    printf("Informe o segundo número: ");
    scanf("%lf", &num2);

    printf("Informe o terceiro número: ");
    scanf("%lf", &num3);

    produto = 2*num1*(num2/2);
    soma = num1*3 + num3;
    cubo = num3*num3*num3;

    printf("o produto: %lf\n", produto);
    printf("A soma: %lf\n", soma);
    printf("O cubo: %lf\n", cubo);

    return 0;


}