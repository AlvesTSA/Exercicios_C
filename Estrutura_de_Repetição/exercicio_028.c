/*28. Faça um programa que calcule o valor total investido por um colecionador em sua coleção de CDs e o valor médio gasto em cada um deles. O usuário deverá informar a quantidade de CDs e o valor para em cada um.*/

#include <stdio.h>

int main(){

    int q_cd = 0;
    float valor_cd = 0;
    int i = 0;
    float valor_soma = 0;
    float valor_medio = 0;

    printf("Informe quantos CDs tem na colecao: ");
    scanf("%d", &q_cd);
    printf("Informe o valor de cada CD:\n");

    for (i = 0; i < q_cd; i++){
        
        scanf("%f", &valor_cd);

        valor_soma += valor_cd; 
    }

    valor_medio = valor_soma / q_cd;

    printf("Valor total gasto R$: %.2f\nValor medio por CD R$: %.2f", valor_soma, valor_medio);
     
    return 0;
}