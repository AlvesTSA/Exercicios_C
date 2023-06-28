/* Faça um programa que peça uma nota, entre zero e dez. Mostre uma mensagem caso o valor seja inválido e continue pedindo até que o usuário informe um valor válido.*/

#include <stdio.h>

int main(){

    int nota = 0;

    do{
        printf("Informe uma nota: ");
        scanf("%d", &nota);

        if(nota < 0 || nota > 10){

            printf("Informe uma nota válida\n");
        }

    }while(nota < 0 || nota > 10);

    printf("Nota: %d", nota);

    return 0;
}