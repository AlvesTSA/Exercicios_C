/*Faça um Programa que verifique se uma letra digitada é vogal ou consoante.*/

#include <stdio.h>

int main(){

    char letra;

    printf("Digite uma letra do alfabeto: ");
    scanf("%c", &letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){

        printf("A letra digitada é uma vogal");

    }
    else {

        printf("A letra digitada é uma consoante");

    }
    return 0;

}