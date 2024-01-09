/*3. Faça um Programa que leia 4 notas, mostre as notas e a média na tela.*/

#include <stdio.h>

int main(){

    float notas[4];
    float soma = 0;
    float media = 0;
    int count = 0;

    printf("informe 4 notas\n");

    for (int i = 0; i < 4; i++){

        count++;
        printf("Informe a nota %d: ", count);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma/count;
    count = 0;

    for (int i = 0; i < 4; i++){

        count++;
        printf("Nota %d: %.2f\n", count, notas[i]);
    }
    
    printf("Nota media: %.2f", media);

    return 0;
}