//Faça um Programa que converta metros para centímetros.

#include <stdio.h>

int main(){

    float metro, centi;

    printf("Digite uma medida em metros: ");
    scanf("%f", &metro);

    centi = metro*100;

    printf("A medida em centimetros: %f", centi);

    return 0;

}