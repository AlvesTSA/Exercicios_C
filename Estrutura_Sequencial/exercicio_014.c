/*João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário de seu trabalho. Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente. João precisa que você faça um programa que leia a variável peso (peso de peixes) e calcule o excesso. Gravar na variável excesso a quantidade de quilos além do limite e na variável multa o valor da multa que João deverá pagar. Imprima os dados do programa com as mensagens adequadas.*/

#include <stdio.h>

int main(){

    double peso = 0;
    double peso_excesso = 0;
    double multa = 0;

    printf("Informe o peso: ");
    scanf("%lf", &peso);

    peso_excesso = peso - 50;
    multa = peso_excesso*4;

    printf("O valor a ser pago por peso excedente R$: %lf\n", multa);

    return 0;

}