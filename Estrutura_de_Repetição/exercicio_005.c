/*Altere o programa anterior permitindo ao usuário informar as populações e as taxas de crescimento iniciais. Valide a entrada e permita repetir a operação.*/

#include <stdio.h>
#include <math.h>

int main(){

    int ano = 0;
    double taxa_crescA = 0;
    double taxa_crescB = 0;
    double habitanteA = 0;
    double habitanteB = 0;

    do{
        
        printf("Informe o numero de habitantes da cidade A: ");
        scanf("%lf", &habitanteA);
        printf("Informe o numero de habitantes da cidade B: ");
        scanf("%lf", &habitanteB);
        printf("Informe a taxa de cescimento da cidade A: ");
        scanf("%lf", &taxa_crescA);
        printf("Informe a taxa de cescimento da cidade B: ");
        scanf("%lf", &taxa_crescB);

        if(habitanteA <= 0 || habitanteB <= 0 || taxa_crescA <= 0 || taxa_crescB <= 0){

            printf("Valor invalido. O numero de habitantes e a taxa de crescimento devem ser maior que zero\n");

        }
        else if(habitanteA > habitanteB){

            printf("Valor invalido. O numero de habitantes da cidade A deve ser menor que a cidade B\n");

        }

    } while (habitanteA <= 0 || habitanteB <= 0 || taxa_crescA <= 0 || taxa_crescB <= 0 || habitanteA > habitanteB);
    
    taxa_crescA = taxa_crescA / 100;
    taxa_crescB = taxa_crescB / 100;

    while (habitanteA < habitanteB){
        
        habitanteA = habitanteA*pow(1 + taxa_crescA, ano++);
        habitanteB = habitanteB*pow(1 + taxa_crescB, ano++);

    }

    printf("Anos necessários: %d", ano);
    
    return 0;
}