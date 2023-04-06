//#Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Fahrenheit.F = 1.8*C + 32

#include <stdio.h>

int main(){

    float F, C;

    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &C);

    F = 1.8*C + 32;

    printf("A temperatura em Fahrenheit: %f", F);

    return 0;

}
