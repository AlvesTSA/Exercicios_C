/* Faça um Programa que leia três números e mostre-os em ordem decrescente.*/

#include <stdio.h>

int main(){

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int maior1 = 0;
    int maior2 = 0;
    int maior3 = 0;

    printf("Informe três números: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3){

        maior1 = num1;

        if (num2 > num3){

            maior2 = num2;
            maior3 = num3;

        }
        else {

            maior2 = num3;
            maior3 = num2;
        }
        
    }

    if (num2 > num1 && num2 > num3){

        maior1 = num2;

        if (num1 > num3){

            maior2 = num1;
            maior3 = num3;

        }
        else {

            maior2 = num3;
            maior3 = num1;
        }
        
    }

    if (num3 > num1 && num3 > num2){

        maior1 = num3;

        if (num1 > num2){

            maior2 = num1;
            maior3 = num2;

        }
        else {

            maior2 = num2;
            maior3 = num1;

        }
        
    }

    printf("Ordem decrescente: %d %d %d", maior1, maior2, maior3);

    return 0;

}