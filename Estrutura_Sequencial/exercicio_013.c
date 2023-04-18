/*Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
a)Para homens: (72.7*h) - 58
b)Para mulheres: (62.1*h) - 44.7           */

#include <stdio.h>

int main(){

    double h = 0;
    double peso_homem = 0;
    double peso_mulher = 0;
    
    printf("Informe sua altura: ");
    scanf("%lf", &h);

    peso_homem = (72.7*h) - 58;
    peso_mulher = (62.1*h) - 44.7;

    printf("O peso ideal para homens: %lf\n", peso_homem);
    printf("O peso ideal para mulheres: %lf\n", peso_mulher);

    return 0;
    

}