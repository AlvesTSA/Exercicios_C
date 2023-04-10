//Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

#include <stdio.h>

int main(){

    float area, medida;

    printf("Digite a medida de um dos lados do quadrado: ");
    scanf("%f", &medida);

    area = (medida*medida)*2;

    printf("O dobro da area: %f", area);

    return 0;
    
}