/*Faça um programa para o cálculo de uma folha de pagamento, sabendo que os descontos são do imposto de Renda, INSS, Sindicato e que o FGTS corresponde a 11% do salário bruto, mas não é descontado (é a empresa que deposita). O salário líquido corresponde ao salário bruto menos os descontos. O programa deverá pedir ao usuário o valor da sua hora e a quantidade de horas trabalhadas no mês.
 
Desconto do IR; 

Salário Bruto ate R$900,00 (inclusive) – Isento; 

Salário Bruto de R$ 1500, 00 (inclusive) – desconto de 5%;

Salario bruto até R$ 2500,00 (Inclusive) – desconto de 10%;
  
Salário bruto acima de 2500 – Desconto de 20%.

Imprima na tela as informações dispostas conforme o exemplo abaixo.
  
Salário bruto: R$ 

Desconto IR: R$ 
 
Desconto INSS (10%): R$
 
Desconto Sindicato (3%): R$  
 
FGTS (11%) 
  
Desconto total: R$ 
  
Salário líquido: R$ 
*/

#include <stdio.h>

int main(){

    float ganho_hora = 0;
    float hora_mes = 0;
    float salario_bruto = 0;
    float salario_liquido = 0;
    float desconto_IR = 0;
    float desconto_INSS = 0;
    float desconto_Sind = 0;
    float fgts = 0;
    float desconto_total = 0;

    printf("Informe quanto você ganha por hora: ");
    scanf("%f", &ganho_hora);
    printf("Informe quantas horas trabalhou no mês: ");
    scanf("%f", &hora_mes);

    salario_bruto = ganho_hora*hora_mes;

    if (salario_bruto <= 900 && salario_bruto > 0){

        desconto_INSS = salario_bruto*0.1;
        desconto_Sind = salario_bruto*0.03;
        desconto_total = desconto_IR + desconto_INSS + desconto_Sind;
        salario_liquido = salario_bruto - desconto_total;
        fgts = salario_bruto*0.11;

        printf("Salário bruto: R$ %f\nDesconto IR (0 porcento): R$ %f\nDesconto INSS (10 porcento): R$ %f\nDesconto Sindicato (3 porcento): R$ %f\nFGTS (11 porcento): R$ %f\nDesconto total: R$   %f\nSalário líquido: R$ %f", salario_bruto, desconto_IR, desconto_INSS, desconto_Sind, fgts, desconto_total, salario_liquido);

    }
    else if (salario_bruto > 900 && salario_bruto <= 1500){

        desconto_IR = salario_bruto*0.05;
        desconto_INSS = salario_bruto*0.1;
        desconto_Sind = salario_bruto*0.03;
        desconto_total = desconto_IR + desconto_INSS + desconto_Sind;
        salario_liquido = salario_bruto - desconto_total;
        fgts = salario_bruto*0.11;

        printf("Salário bruto: R$ %f\nDesconto IR (5 porcento): R$ %f\nDesconto INSS (10 porcento): R$ %f\nDesconto Sindicato (3 porcento): R$ %f\nFGTS (11 porcento): R$ %f\nDesconto total: R$   %f\nSalário líquido: R$ %f", salario_bruto, desconto_IR, desconto_INSS, desconto_Sind, fgts, desconto_total, salario_liquido);

    }
    else if (salario_bruto > 1500 && salario_bruto <= 2500){

        desconto_IR = salario_bruto*0.1;
        desconto_INSS = salario_bruto*0.1;
        desconto_Sind = salario_bruto*0.03;
        desconto_total = desconto_IR + desconto_INSS + desconto_Sind;
        salario_liquido = salario_bruto - desconto_total;
        fgts = salario_bruto*0.11;

        printf("Salário bruto: R$ %f\nDesconto IR (10 porcento): R$ %f\nDesconto INSS (10 porcento): R$ %f\nDesconto Sindicato (3 porcento): R$ %f\nFGTS (11 porcento): R$ %f\nDesconto total: R$   %f\nSalário líquido: R$ %f", salario_bruto, desconto_IR, desconto_INSS, desconto_Sind, fgts, desconto_total, salario_liquido);

    }
    else if (salario_bruto > 2500){

        desconto_IR = salario_bruto*0.2;
        desconto_INSS = salario_bruto*0.1;
        desconto_Sind = salario_bruto*0.03;
        desconto_total = desconto_IR + desconto_INSS + desconto_Sind;
        salario_liquido = salario_bruto - desconto_total;
        fgts = salario_bruto*0.11;

        printf("Salário bruto: R$ %f\nDesconto IR (20 porcento): R$ %f\nDesconto INSS (10 porcento): R$ %f\nDesconto Sindicato (3 porcento): R$ %f\nFGTS (11 porcento): R$ %f\nDesconto total: R$   %f\nSalário líquido: R$ %f", salario_bruto, desconto_IR, desconto_INSS, desconto_Sind, fgts, desconto_total, salario_liquido);
    }
    else{

        printf("Informe um valor válido !");
    }
    
    return 0;

}