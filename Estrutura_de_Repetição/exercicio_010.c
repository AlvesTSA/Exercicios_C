/*Faça um programa que receba dois números inteiros e gere os números inteiros que estão no intervalo compreendido por eles*/

#include <stdio.h>

int main(){

    int num1 = 0;
    int num2 = 0;
    int num = 0;

    printf("Informe dois numeros: ");
    scanf("%d", &num1);
    scanf("%d", &num2);

    if(num1 > num2){

        while (num1 - 1 > num2){
            num2 = num2 + 1;
            num = num2;
            printf("%d ",num);
        }  
    }
    else{

        while (num1 < num2 - 1){
            num1 = num1 + 1;
            num = num1;
            printf("%d ",num);
        }  
    }

    return 0;
}

/*

#include <stdio.h>

int main() {
    int num1, num2, i;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    printf("Números no intervalo entre %d e %d:\n", num1, num2);

    // Verifica se num1 é maior que num2 e inverte os valores se necessário
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Gera e exibe os números no intervalo
    for (i = num1 + 1; i < num2; i++) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}


*/