/*Faça um Programa que leia três números e mostre o maior e o menor deles.*/

#include <stdio.h>

int main(){

    int num1 = 0; 
    int num2 = 0;
    int num3 = 0;
    int maior = 0;
    int menor = 0;

    printf("Informe três números: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3){

        maior = num1;

        if (num2 < num1 && num2 < num3) {
       
            menor = num2;
        }
        else if (num3 < num1 && num3 < num2) {
       
            menor = num3;
        }
        
    }
    
    else if (num2 > num1 && num2 > num3){

        maior = num2;

        if (num1 < num2 && num1 < num3) {
       
            menor = num1;
        }
        else if (num3 < num2 && num3 < num1) {
       
            menor = num3;
        }
    }

    else if (num3 > num1 && num3 > num2){
       
        maior = num3;

        if (num1 < num2 && num1 < num3) {
       
            menor = num1;
        }
        else if (num2 < num1 && num2 < num3) {
       
            menor = num2;
        }
    }
    
    printf("O maior é: %d\n", maior);
    printf("O menor é: %d", menor);

    return 0;

}