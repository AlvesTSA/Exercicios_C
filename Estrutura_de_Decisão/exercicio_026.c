/* Uma fruteira está vendendo frutas com a seguinte tabela de preços:

Até 5 Kg de morango: R$ 2,50 por Kg 
  
Acima de 5 Kg de morango: R$ 2,20 por Kg

Até 5 Kg de maçã: R$ 1,80 por Kg 

Acima de 5 Kg de maçã: R$ 1,50 por Kg

Se o cliente comprar mais de 8 Kg em frutas ou o valor total da compra ultrapassar R$ 25,00, receberá ainda um desconto de 10% sobre este total. Escreva um algoritmo para ler a quantidade (em Kg) de morangos e a quantidade (em Kg) de maças adquiridas e escreva o valor a ser pago pelo cliente.*/

#include <stdio.h>

int main(){

    float kilo_ma;
    float kilo_mo;
    float preco1 = 0;
    float preco2 = 0;
    float valor_pago = 0;
    float desconto = 0;
    float preco_total = 0;

    printf("Informe o peso da maçã: ");
    scanf("%f", &kilo_ma);
    printf("Informe o peso da morango: ");
    scanf("%f", &kilo_mo);

    if(kilo_ma > 0 && kilo_ma <= 5){

        preco1 = kilo_ma*1.80;

    }
    else if(kilo_ma > 5){

        preco1 = kilo_ma*1.50;

    }
    if(kilo_mo > 0 && kilo_mo <= 5){

        preco2 = kilo_mo*2.50;

    }
    else if(kilo_mo > 5){

        preco2 = kilo_mo*2.20;
    }

    preco_total = (preco1 + preco2);

    if((kilo_ma + kilo_mo > 8 || preco_total > 25)){

        desconto = preco_total*0.10;
        valor_pago = preco_total - desconto;
    }
    else{

        valor_pago = preco_total;

    }
    
    printf("Valor a ser pago R$: %.2f", valor_pago);

    return 0;

}