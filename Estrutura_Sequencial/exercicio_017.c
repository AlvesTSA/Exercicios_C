/*Faça um Programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada. Considere que a cobertura da tinta é de 1 litro para cada 6 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00 ou em galões de 3,6 litros, que custam R$ 25,00.
Informe ao usuário as quantidades de tinta a serem compradas e os respectivos preços em 2 situações:
a)comprar apenas latas de 18 litros;
b)comprar apenas galões de 3,6 litros;
*/

#include <stdio.h>

int main(){

    double area = 0;
    double quant_necessaria = 0;
    double galao = 0;
    double lata = 0;
    double custo_galao = 0;
    double custo_lata = 0;

    printf("Informe a área a ser pintada: ");
    scanf("%lf", &area);

    quant_necessaria = area/6;
    lata = quant_necessaria/18;
    galao = quant_necessaria/3.6;
    custo_galao = galao*25;
    custo_lata = lata*80;

    printf("Número de latas necessaria: %lf \n", lata);
    printf("Custo em latas R$: %lf \n", custo_lata);

    printf("Número de galões necessario: %lf \n", galao);
    printf("Custo em galões R$: %lf \n", custo_galao);

    return 0;

}