/* Supondo que a população de um país A seja da ordem de 80000 habitantes com uma taxa anual de crescimento de 3% e que a população de B seja 200000 habitantes com uma taxa de crescimento de 1.5%. Faça um programa que calcule e escreva o número de anos necessários para que a população do país A ultrapasse ou iguale a população do país B, mantidas as taxas de crescimento.*/

#include <stdio.h>
#include <math.h>

int main(){

    int ano = 0;
    const double taxa_crescA = 0.03;
    const double taxa_crescB = 0.015;
    double habitanteA = 80000;
    double habitanteB = 200000;
    

    while (habitanteA < habitanteB){
        
        habitanteA = habitanteA*pow(1 + taxa_crescA, ano++);
        habitanteB = habitanteB*pow(1 + taxa_crescB, ano++);

    }

    printf("Anos necessários: %d", ano);
    
    return 0;
}