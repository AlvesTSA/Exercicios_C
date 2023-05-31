/*Faça um Programa para um caixa eletrônico. O programa deverá perguntar ao usuário a valor do saque e depois informar quantas notas de cada valor serão fornecidas. As notas disponíveis serão as de 1, 5, 10, 50 e 100 reais. O valor mínimo é de 10 reais e o máximo de 600 reais. O programa não deve se preocupar com a quantidade de notas existentes na máquina.
 
Exemplo 1: Para sacar a quantia de 256 reais, o programa fornece duas notas de 100, uma nota de 50, uma nota de 5 e uma nota de 1;
 
Exemplo 2: Para sacar a quantia de 399 reais, o programa fornece três notas de 100, uma nota de 50, quatro notas de 10, uma nota de 5 e quatro notas de 1.

*/

#include <stdio.h>

int main(){

    int valor_saque = 0;
    int nota_100 = 0;
    int nota_50 = 0;
    int nota_10 = 0;
    int nota_5 = 0;
    int nota_1 = 0;


    printf("informe o valor do saque de 10 a 600 reais: ");
    scanf("%d", &valor_saque);

    if(valor_saque >= 10 && valor_saque <= 600){

        nota_100 = valor_saque/100;
        valor_saque = valor_saque % 100;
        nota_50 = valor_saque/50;
        valor_saque = valor_saque % 50;
        nota_10 = valor_saque/10;
        valor_saque = valor_saque % 10;
        nota_5 = valor_saque/5;
        valor_saque = valor_saque % 5;
        nota_1 = valor_saque;

    }
    else{

        printf("ERRO: Valor máximo de saque ate 600 reais e minimo de 10 reais");

        return 0;
    }
    
    printf("Notas fornecidas:\n");
    printf("Notas de 100 reais: %d\n", nota_100);
    printf("Notas de 50 reais: %d\n", nota_50);
    printf("Notas de 10 reais: %d\n", nota_10);
    printf("Notas de 5 reais: %d\n", nota_5);
    printf("Notas de 1 real: %d\n", nota_1); 

    return 0;

}