/*30. O Sr. Manoel Joaquim acaba de adquirir uma panificadora e pretende implantar a metodologia da tabelinha, que já é um sucesso na sua loja de 1,99. Você foi contratado para desenvolver o programa que monta a tabela de preços de pães, de 1 até 50 pães, a partir do preço do pão informado pelo usuário, conforme o exemplo abaixo:
 
Preço do pão: R$ 0.18 

Panificadora Pão de Ontem - Tabela de preços 
 
1 - R$ 0.18
 
2 - R$ 0.36

...

50 - R$ 9.00

*/

#include <stdio.h>

int main(){

    float preco = 0;
    float soma = 0;
    int i = 0;

    printf("Informe o preco do pao: ");
    scanf("%f", &preco);
    printf("\nPreço do pão: R$ %.2f\n\nPanificadora Pao de Ontem - Tabela de precos\n\n",preco);

    for (i = 1; i <= 50; i++){
        
        soma += preco;
        printf("%d - R$ %.2f\n",i,soma); 
    }
    
    return 0;
}