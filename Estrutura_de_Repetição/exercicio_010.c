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