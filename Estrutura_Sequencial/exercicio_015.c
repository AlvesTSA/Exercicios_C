/*Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê:
a)salário bruto.
b)quanto pagou ao INSS.
c)quanto pagou ao sindicato.
d)quanto pagou de IR.
e)desconto total.
f)o salário líquido.
calcule os descontos e o salário líquido, conforme a tabela abaixo:
+ Salário Bruto : R$
- IR (11%) : R$
- INSS (8%) : R$
- Sindicato ( 5%) : R$
= Salário Liquido : R$
Obs.: Salário Bruto - Descontos = Salário Líquido.*/

#include <stdio.h>

int main(){

    double ganho_hora = 0;
    double hora_mes = 0;
    double salario_bruto = 0;
    double salario_liquido = 0;
    double desconto_inss = 0;
    double desconto_sin = 0;
    double desconto_ir = 0;
    double desconto_total = 0;

    printf("Informe quanto você ganha por hora: ");
    scanf("%lf", &ganho_hora);

    printf("Informe quantas horas você trabalhou no mes: ");
    scanf("%lf", &hora_mes);

    salario_bruto = ganho_hora*hora_mes;
    desconto_inss = salario_bruto*0.08;
    desconto_sin = salario_bruto*0.05;
    desconto_ir = salario_bruto*0.11;
    desconto_total = desconto_inss + desconto_sin + desconto_ir;
    salario_liquido = salario_bruto - desconto_total;

    printf("Salário bruto R$: %lf \n", salario_bruto);
    printf("Desconto INSS R$: %lf \n", desconto_inss);
    printf("Desconto sindicato R$: %lf \n", desconto_sin);
    printf("Desconto IR R$: %lf \n", desconto_ir);
    printf("Desconto total R$: %lf \n", desconto_total);
    printf("Salário líquido R$: %lf \n", salario_liquido);

    return 0;


}