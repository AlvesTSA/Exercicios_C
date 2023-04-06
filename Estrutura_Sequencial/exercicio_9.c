//Faça um Programa que peça a temperatura em graus Fahrenheit, transforme e mostre a temperatura em graus Celsius.C = 5 * ((F-32) / 9).

#include <stdio.h>

int main(){

    float F,C;

    printf("informe a temperatura em Fahrenheit: ");
    scanf("%f",&F);

    C = 5 * ((F-32) / 9);

    printf("A tempreratura em Celsius: %f", C);

    return 0;


}