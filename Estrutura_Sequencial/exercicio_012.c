/*Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58  */

#include <stdio.h>

int main(){

    double altura = 0;
    double peso = 0;

    printf("Informe sua altura: ");
    scanf("%lf", &altura);

    peso = (72.7*altura) - 58;

    printf("Seu peso ideal: %lf Kg\n",peso);

    return 0;

}