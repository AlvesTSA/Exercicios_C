/*Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada. Considere que a cobertura da tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00. Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total.*/

#include <stdio.h>

int main(){

    double lata = 0;
    double preco = 0;
    double area = 0;
    double litros_necessario = 0;


    printf("Informe a área a ser pintada: ");
    scanf("%lf", &area);

    litros_necessario = area/3;
    lata = litros_necessario/18;
    preco = lata*80;

    printf("Quantidade de latas necessária: %lf \n", lata);
    printf("Preço R$: %lf \n", preco);

    return 0;
    
}