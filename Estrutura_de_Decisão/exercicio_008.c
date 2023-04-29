/*Faça um programa que pergunte o preço de três produtos e informe qual produto você deve comprar, sabendo que a decisão é sempre pelo mais barato.*/

#include <stdio.h>

int main(){

    float produto_a = 0;
    float produto_b = 0;
    float produto_c = 0;
    float barato = 0;

    printf("Informe o preço de três produtos: \n");
    scanf("%f %f %f", &produto_a, &produto_b, &produto_c);

    if (produto_a < produto_b && produto_a < produto_c){

       barato = produto_a;

    }
    else if (produto_b < produto_a && produto_b < produto_c){

       barato = produto_b;
       
    }
    else{

       barato = produto_c;
       
    }

    printf("O produto mais barato é R$:  %f", barato);

    return 0;

}