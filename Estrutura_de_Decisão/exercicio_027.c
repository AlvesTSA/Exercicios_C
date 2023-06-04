/*O Hipermercado Tabajara está com uma promoção de carnes que é imperdível. Confira:
 
Até 5 Kg de File Duplo: R$ 4,90 por Kg 
 
Acima de 5 Kg de File Duplo: R$ 5,80 por Kg
 
Até 5 Kg de Alcatra: R$  5,90 por Kg 

Acima de 5 Kg de Alcatra: R$ 6,80 por Kg

Até 5 Kg de Picanha: R$  6,90 por Kg 
 
Acima de 5 Kg de Picanha: R$ 7,80 por Kg

Para atender a todos os clientes, cada cliente poderá levar apenas um dos tipos de carne da promoção, porém não há limites para a quantidade de carne por cliente. Se compra for feita no cartão Tabajara o cliente receberá ainda um desconto de 5% sobre o total da compra. Escreva um programa que peça o tipo e a quantidade de carne comprada pelo usuário e gere um cupom fiscal, contendo as informações da compra: tipo e quantidade de carne, preço total, tipo de pagamento, valor do desconto e valor a pagar.*/

#include <stdio.h>

int main(){

    int op = 0;
    int op2 = 0;
    float kilo_file = 0;
    float kilo_alcatra = 0;
    float kilo_picanha = 0;
    float preco1 = 0;
    float preco2 = 0;
    float preco3 = 0;
    float valor_pago = 0;
    float desconto = 0;
    float valor = 0;

    printf("Informe o tipó de carne: \n[1]-File Duplo\n[2]-Alcatra\n[3]-Picanha\n");
    scanf("%d", &op);

    switch (op){

        case 1:

                printf("Informe quantos Kg de carne: ");
                scanf("%f", &kilo_file);

                if(kilo_file > 0 && kilo_file <= 5){
                    
                    preco1 = kilo_file*4.90;
                }
                else{

                    preco1 = kilo_file*5.80;
                }

                valor = preco1;
            
                break;

        case 2:

                printf("Informe quantos Kg de carne: ");
                scanf("%f", &kilo_alcatra);
                
                if(kilo_alcatra > 0 && kilo_alcatra <= 5){
                    
                    preco2 = kilo_alcatra*5.90;
                }
                else{

                    preco2 = kilo_alcatra*6.80;
                }

                valor = preco2;

                break;

        case 3:

                printf("Informe quantos Kg de carne: ");
                scanf("%f", &kilo_picanha);
                
                if(kilo_picanha > 0 && kilo_picanha <= 5){
                    
                    preco3 = kilo_picanha*6.90;
                }
                else{

                    preco3 = kilo_picanha*7.80;
                }

                valor = preco3;

                break;
        
        default:

                printf("Informe um valor válido!");

                return 0;

                break;
    }

    printf("Informe a forma de pagamento:\n[1]-Cartão tabajara\n[2]-outro cartão\n");
    scanf("%d", &op2);

    switch (op2){

    case 1:

            desconto = valor*0.05;
            valor_pago = valor - desconto;

        break;
    
    case 2:

            valor_pago = valor;

        break;

    default:

            printf("Informe um valor válido!");

            return 0;

            break;
    }

    if(op == 1){

        if(op2 == 1){

            printf("informações da compra:\nTipo: File duplo\nPeso: %.2f\nPreço total R$: %.2f\nTipo de pagamento: Cartão tabajara\nValor do desconto R$: %.2f\nValor a pagar R$: %.2f", kilo_file, valor, desconto, valor_pago);
        }
        else{
            
            printf("informações da compra:\nTipo: File duplo\nPeso: %.2f\nPreço total R$: %.2f\nTipo de pagamento: Outro cartão\nValor do desconto R$: %.2f\nValor a pagar R$: %.2f", kilo_file, valor, desconto, valor_pago);

        }
        

    }
    else if(op == 2){

            if(op2 == 1){

                printf("informações da compra:\nTipo: Alcatra\nPeso: %.2f\nPreço total R$: %.2f\nTipo de pagamento: Cartão tabajara\nValor do desconto R$: %.2f\nValor a pagar R$: %.2f", kilo_alcatra, valor, desconto, valor_pago);
            }
        else{
            
                printf("informações da compra:\nTipo: Alcatra\nPeso: %.2f\nPreço total R$: %.2f\nTipo de pagamento: Outro cartão\nValor do desconto R$: %.2f\nValor a pagar R$: %.2f", kilo_alcatra, valor, desconto, valor_pago);

        }

    }
    else{

            if(op2 == 1){

                printf("informações da compra:\nTipo: Picanha\nPeso: %.2f\nPreço total R$:%.2f\nTipo de pagamento: Cartão tabajara\nValor do desconto R$: %.2f\nValor a pagar R$: %.2f", kilo_picanha, valor, desconto, valor_pago);
        }
        else{
            
                printf("informações da compra:\nTipo: Picanha\nPeso: %.2f\nPreço total R$: %.2f\nTipo de pagamento: Outro cartão\nValor do desconto R$: %.2f\nValor a pagar R$: %.2f", kilo_picanha, valor, desconto, valor_pago);

        }
    }

    return 0;

}