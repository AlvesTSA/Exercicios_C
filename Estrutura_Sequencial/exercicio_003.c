//Faça um Programa que peça dois números e imprima a soma.

#include <stdio.h>

int main(){

    float num1, num2, soma;
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    soma = num1 + num2;

    printf("O resultado da soma: %f\n" ,soma);

    return 0;

}
