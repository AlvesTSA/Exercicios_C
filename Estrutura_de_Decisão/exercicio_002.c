/*Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.*/

#include <stdio.h>

int main(){

    int valor = 0;

    printf("Informe um valor qualquer: ");
    scanf("%d", &valor);

    if(valor > 0){

        printf("O valor é positivo");

    }
    else{

        printf("O valor é negativo");
    }

    return 0;

}