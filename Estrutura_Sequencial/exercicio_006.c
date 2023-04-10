//Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.

#include <stdio.h>

int main(){

    float area, raio;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    area = 3.14*(raio*raio);

    printf("A area do circulo: %f", area);

    return 0;

}