/*. Faça um Programa que peça dois números e imprima o maior deles.*/

#include <stdio.h>

int main(){

    int num1 = 0;
    int num2 = 0;

    printf("informe o primeiro número: ");
    scanf("%d", &num1);
    printf("Informe o segundo número: ");
    scanf("%d", &num2);

    if (num1 > num2) { 

        printf("O maior número é: %d", num1);

    }
    if (num2 > num1) {
        
        printf("O maior número é: %d", num2);

    }
    
    return 0;

}