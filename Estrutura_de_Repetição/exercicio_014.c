/*14. Faça um programa que peça 10 números inteiros, calcule e mostre a quantidade de números pares e a quantidade de números impares.*/

#include <stdio.h>

int main(){

    int num = 0;
    int impar = 0;
    int par = 0;
    int i = 0;
    int resto = 0;

    printf("Informe 10 numeros inteiros:");

    for (i = 1; i < 11; i++){
        
        scanf("%d", &num);
        resto = num % 2;

        if (resto == 0){
            
            par++;

        }
        else {
            
            impar++;

        }
    }

    printf("Quantidade de numeros par: %d\nQuantidade de numeros impar: %d", par, impar);

    return 0;
    
}