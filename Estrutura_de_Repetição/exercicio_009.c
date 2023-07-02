/*Faça um programa que imprima na tela apenas os números ímpares entre 1 e 50.*/

#include <stdio.h>

int main(){

    int i = 0;
    int num = 0;
    int resto = 0;

    for (i = 0; i < 50; i++){
        
        num++;
        resto = num % 2;

        if(resto != 0){

            printf("%d ", num);
        }
        
    }

    return 0;
    
}