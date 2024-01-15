/*16. Utilize uma lista para resolver o problema a seguir. Uma empresa paga seus vendedores com base em comissões. O vendedor recebe $200 por semana mais 9 por cento de suas vendas brutas daquela semana. Por exemplo, um vendedor que teve vendas brutas de $3000 em uma semana recebe $200 mais 9 por cento de $3000, ou seja, um total de $470. Escreva um programa (usando um array de contadores) que determine quantos vendedores receberam salários nos seguintes intervalos de valores:

 a. $200 - $299 

 b. $300 - $399 

 c. $400 - $499

 d. $500 - $599

 e. $600 - $699
 
 f. $700 - $799
 
 g. $800 - $899

 h. $900 - $999

 i. $1000 em diante

Desafio: Crie ma fórmula para chegar na posição da lista a partir do salário, sem fazer vários ifs aninhados.*/

#include <stdio.h>

int main(){

    float valor_vendas = 0;
    int i = 0;
    float percentual = 0.09;
    float fixo = 200.00;
    float salario = 0;
    int faixa = 0;
    int contador[9] = {0};

    printf("informe os valores das vendas de cada vendedor e aperte -1 para finalizar:\n");

    for (i = 0; i < 100; i++){
        
        printf("Informe o valor do vendedor %d: ",i + 1);
        scanf("%f", &valor_vendas);

        if (valor_vendas == -1){
            
            break;
        }
        
        salario = (valor_vendas * percentual) + fixo;

        faixa = (salario - fixo) / 100;

        if (faixa >= 9){
            
            faixa = 9 - 1;
        }
    
        contador[faixa]++;
    }
    for (faixa = 0; faixa < 9; faixa++){

        switch (faixa + 1){
        case 1:
            printf("a. $200 - $299: %d vendedores", contador[faixa]);
            break;
        case 2:
            printf("\nb. $300 - $399: %d vendedores", contador[faixa]);
            break;
        case 3:
            printf("\nc. $400 - $499: %d vendedores", contador[faixa]);
            break;
        case 4:
            printf("\nd. $500 - $599: %d vendedores", contador[faixa]);
            break;
        case 5:
            printf("\ne. $600 - $699: %d vendedores", contador[faixa]);
            break;
        case 6:
            printf("\nf. $700 - $799: %d vendedores", contador[faixa]);
            break;
        case 7:
            printf("\ng. $800 - $899: %d vendedores", contador[faixa]);
            break;
        case 8:
            printf("\nh.$900 - $999: %d vendedores", contador[faixa]);
            break;
        case 9:
            printf("\ni. $1000 em diante: %d vendedores\n", contador[faixa]);
            break;
        default:
            printf("Valor invalido");
            break;
        }
    }
    
    return 0;
}