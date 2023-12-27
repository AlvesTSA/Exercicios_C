/*38. Um funcionário de uma empresa recebe aumento salarial anualmente: Sabe-se que:

Esse funcionário foi contratado em 1995, com salário inicial de R$ 1.000,00; 

Em 1996 recebeu aumento de 1,5% sobre seu salário inicial; 

A partir de 1997 (inclusive), os aumentos salariais sempre correspondem ao dobro do percentual do ano anterior. Faça um programa que determine o salário atual desse funcionário. Após concluir isto, altere o programa permitindo que o usuário digite o salário inicial do funcionário.
*/

#include <stdio.h>

int main(){

    float salario = 0;
    float perc_aumento = 0.015;
    
    printf("Informe seu salario inicial: ");
    scanf("%f", &salario);

    for (int i = 1996; i <= 2023; i++){
        
        salario = salario*perc_aumento + salario;
        perc_aumento *= 2;
    }
    printf("Salario atual: R$ %.2f", salario);

    return 0;
}