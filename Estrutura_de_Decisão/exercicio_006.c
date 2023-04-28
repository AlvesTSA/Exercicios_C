/*Faça um Programa que leia três números e mostre o maior deles.*/

#include <stdio.h>

int main(){

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    printf("Informe o primeiro número: ");
    scanf("%d", &num1);
    printf("Informe o segundo número: ");
    scanf("%d", &num2);
    printf("Informe o terceiro número: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3){

        printf("O maior número digitado: %d", num1);
    }
    else if (num2 > num1 && num2 > num3){
        
        printf("O maior número digitado: %d", num2);
    }
    else if (num3 > num1 && num3 > num2) {

        printf("O maior número digitado: %d", num3);
    }
    
    return 0;

}