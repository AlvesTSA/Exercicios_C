/* Um posto está vendendo combustíveis com a seguinte tabela de descontos:

Álcool:
 
Até 20 litros: desconto de 3% por litro;
 
Acima de 20 litros: Desconto de 5% por litro.

Gasolina:

Até 20 litros: desconto de 4% por litro

Acima de 20 litros, desconto de 6% por litro

Escreva um algoritmo que leia o número de litros vendidos, o tipo de combustível (codificado da seguinte forma: A-álcool. G-gasolina), calcule e imprima o valor a ser pago pelo cliente.*/

#include <stdio.h>

int main(){

    char combustivel = 0;
    float litro = 0;
    float preco_G = 5.00;
    float preco_A = 4.00;
    float desconto_G1 = 0;
    float desconto_G2 = 0;
    float desconto_A1 = 0;
    float desconto_A2 = 0;
    float valor_bruto = 0;
    float valor_desconto = 0;

    printf("Informe a quantidade em litros: ");
    scanf("%f", &litro);
    printf("Informe 'G' para gasolina e 'A' para álcool\n\nA-álcool\nG-gasolina\n");
    scanf(" %c", &combustivel);

    switch (combustivel){

    case 'A':

        if(litro > 0 && litro <= 20){
            
        
            valor_bruto = litro*preco_A;
            desconto_A1 = preco_A - (preco_A*0.03);
            valor_desconto = desconto_A1*litro;

        }
        else{

            valor_bruto = litro*preco_A;
            desconto_A2 = preco_A - (preco_A*0.05);
            valor_desconto = desconto_A2*litro;

        }
        break;
    
    case 'G':

        if(litro > 0 && litro <= 20){
            
            valor_bruto = litro*preco_G;
            desconto_G1 = preco_G - (preco_G*0.04);
            valor_desconto = desconto_G1*litro;

        }
        else{

            valor_bruto = litro*preco_G;
            desconto_G2 = preco_G - (preco_G*0.06);
            valor_desconto = desconto_G2*litro;

        }
        
        break;
    
    default:

        printf("ERRO: informe uma valor válido");

        break;
    }

    printf("Valor sem desconto R$: %f\nValor com desconto R$: %f", valor_bruto, valor_desconto);

    return 0;
    
}