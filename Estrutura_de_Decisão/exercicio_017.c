/*. Faça um Programa que peça um número correspondente a um determinado ano e em seguida informe se este ano é ou não bissexto.*/

#include <stdio.h>

int main(){

    int ano = 0;

    printf("Informe um ano: ");
    scanf("%d", &ano);

    if (ano % 4 == 0 && ano % 100 != 0){

        printf("%d é um ano bissexto.", ano);

    }
    else{

        printf("%d não é um ano bissexto.", ano);

    }

    return 0;
    
}

