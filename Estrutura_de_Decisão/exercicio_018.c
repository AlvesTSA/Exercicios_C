/* Faça um Programa que peça um número inteiro e determine se ele e par ou ímpar.*/

#include <stdio.h>

int main(){

    int num = 0;

    printf("Informe um número inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0){

        printf("Número par");
    }
    else{

        printf("Número ímpar.");
    }
    
    return 0;
    
}