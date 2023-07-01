/*Faça um programa que imprima na tela os números de 1 a 20, um abaixo do outro. Depois modifique o programa para que ele mostre os números um ao lado do outro.*/

#include <stdio.h>

int main(){

    int num = 0;

    for (num = 1; num <= 20; num++){

        printf("%d\n\n", num);
    }
    for (num = 1; num <= 20; num++){

        printf("%d  ", num);
    }
    
    return 0;
}