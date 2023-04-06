//Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.

#include <stdio.h>

int main(){

    float ganho_hora, hora_mes, salario;

    printf("Quanto voce ganha por hora ?: ");
    scanf("%f", &ganho_hora);

    printf("Quantas horas você trabalhou este mes ?: ");
    scanf("%f", &hora_mes);

    salario = hora_mes*ganho_hora;

    printf("Seu salario este mes: %f", salario);

    return 0;

}